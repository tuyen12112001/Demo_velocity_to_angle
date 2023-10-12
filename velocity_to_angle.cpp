#include <velocity_to_anlge.h>
int main() {
    // Giả sử vận tốc và thời gian là:
    double velocity = 1.0; // RPM
    double time = 1.0; // s

    while (true) {
        // Chuyển đổi vận tốc sang góc
        double angle = velocitytoangle(velocity, time);

        // In giá trị góc ra màn hình
        std::cout << "Góc: " << angle << " độ" << std::endl;

        // 1秒待ちます
        sleep(1);
    }

    return 0;
}