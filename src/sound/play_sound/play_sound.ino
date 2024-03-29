#include <PCM.h>

const unsigned char sample[] PROGMEM = {
  126, 127, 129, 128, 127, 128, 128, 127, 127, 128, 127, 127, 127, 127, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 127, 127, 127, 128, 128, 128, 128, 127, 127, 128, 127, 127, 127, 128, 127, 128, 128, 127, 128, 129, 127, 126, 128, 128, 127, 127, 128, 128, 126, 127, 128, 127, 127, 128, 128, 126, 126, 127, 126, 128, 128, 128, 128, 128, 127, 127, 127, 128, 129, 126, 127, 129, 128, 127, 129, 127, 125, 128, 129, 127, 128, 129, 127, 127, 127, 125, 126, 126, 128, 130, 129, 129, 131, 128, 123, 123, 124, 128, 133, 132, 125, 121, 125, 133, 133, 123, 122, 132, 131, 121, 127, 131, 122, 128, 136, 122, 123, 137, 125, 118, 135, 133, 118, 127, 137, 126, 119, 128, 136, 133, 125, 119, 122, 134, 138, 130, 121, 120, 124, 125, 128, 135, 137, 133, 129, 128, 125, 121, 121, 123, 125, 127, 129, 129, 130, 133, 132, 129, 131, 127, 125, 127, 125, 124, 123, 122, 123, 125, 128, 129, 132, 133, 133, 134, 131, 127, 123, 118, 117, 123, 132, 137, 139, 129, 115, 119, 136, 139, 126, 115, 122, 137, 131, 115, 128, 138, 120, 123, 140, 122, 120, 143, 127, 115, 138, 131, 112, 130, 139, 118, 116, 138, 139, 117, 111, 129, 144, 141, 124, 112, 116, 134, 149, 141, 131, 129, 112, 103, 116, 129, 131, 135, 141, 145, 145, 139, 129, 121, 116, 117, 116, 108, 110, 124, 129, 129, 136, 138, 133, 144, 149, 132, 128, 132, 117, 109, 116, 107, 101, 117, 134, 146, 152, 149, 148, 132, 98, 86, 112, 150, 159, 124, 95, 115, 159, 156, 97, 95, 161, 143, 89, 142, 166, 89, 122, 177, 93, 97, 174, 112, 90, 171, 141, 80, 139, 178, 119, 89, 138, 170, 139, 102, 100, 124, 151, 155, 125, 93, 97, 118, 131, 153, 165, 153, 132, 113, 106, 103, 104, 110, 114, 122, 133, 146, 154, 146, 144, 149, 139, 123, 125, 121, 104, 111, 113, 94, 114, 137, 122, 131, 158, 150, 141, 152, 142, 116, 94, 90, 102, 110, 122, 150, 169, 161, 125, 98, 119, 160, 149, 95, 100, 166, 165, 95, 103, 162, 105, 62, 155, 145, 82, 168, 161, 77, 162, 182, 82, 125, 169, 91, 88, 158, 143, 87, 100, 143, 154, 136, 106, 107, 153, 184, 168, 129, 99, 90, 92, 96, 118, 156, 177, 163, 138, 114, 90, 98, 129, 129, 102, 93, 131, 156, 127, 130, 171, 149, 112, 150, 146, 95, 136, 135, 63, 111, 163, 102, 103, 176, 163, 119, 141, 162, 122, 71, 81, 128, 163, 168, 132, 98, 87, 106, 159, 175, 120, 75, 120, 164, 110, 100, 174, 151, 116, 193, 143, 68, 169, 123, 66, 160, 94, 74, 165, 98, 92, 191, 138, 83, 168, 195, 118, 88, 125, 152, 136, 95, 68, 91, 139, 164, 167, 156, 136, 125, 122, 105, 107, 144, 174, 157, 122, 96, 91, 115, 128, 106, 95, 139, 157, 121, 133, 169, 124, 122, 176, 110, 76, 149, 117, 74, 130, 140, 99, 144, 185, 149, 142, 152, 140, 87, 66, 90, 149, 188, 148, 84, 70, 132, 190, 163, 89, 120, 161, 91, 83, 172, 126, 71, 165, 134, 121, 211, 91, 123, 167, 74, 154, 125, 90, 166, 119, 63, 176, 145, 68, 145, 186, 135, 96, 123, 139, 151, 122, 70, 75, 123, 164, 166, 145, 130, 98, 89, 85, 115, 166, 183, 155, 131, 143, 165, 124, 77, 111, 127, 93, 98, 172, 118, 118, 180, 123, 138, 167, 102, 105, 157, 76, 81, 158, 97, 118, 188, 159, 117, 113, 135, 110, 109, 147, 164, 141, 97, 137, 151, 109, 87, 160, 195, 75, 136, 140, 15, 154, 131, 93, 171, 86, 172, 157, 111, 162, 95, 153, 102, 77, 178, 57, 118, 179, 74, 157, 172, 102, 138, 216, 167, 80, 109, 150, 131, 99, 75, 82, 119, 172, 177, 141, 114, 86, 116, 132, 124, 123, 134, 173, 139, 107, 123, 149, 89, 88, 160, 82, 133, 199, 121, 155, 174, 122, 174, 110, 59, 126, 77, 71, 158, 149, 133, 161, 141, 76, 93, 168, 188, 117, 55, 94, 184, 157, 77, 122, 138, 91, 166, 185, 71, 212, 96, 144, 124, 112, 148, 70, 172, 73, 155, 79, 171, 110, 149, 130, 90, 179, 68, 176, 60, 114, 185, 79, 113, 196, 144, 99, 117, 165, 160, 93, 83, 123, 201, 200, 141, 93, 66, 105, 150, 136, 112, 122, 164, 130, 89, 130, 119, 74, 157, 141, 104, 187, 103, 129, 140, 93, 148, 66, 147, 124, 152, 187, 104, 183, 105, 63, 160, 136, 137, 149, 84, 69, 153, 172, 88, 104, 151, 86, 90, 228, 86, 153, 123, 98, 159, 89, 173, 121, 140, 106, 108, 140, 121, 126, 131, 168, 138, 147, 158, 125, 145, 94, 145, 57, 133, 111, 57, 216, 90, 113, 181, 172, 97, 93, 122, 155, 132, 106, 107, 138, 146, 127, 142, 104, 91, 109, 187, 171, 130, 158, 151, 75, 156, 77, 102, 128, 102, 162, 95, 158, 106, 153, 72, 106, 128, 141, 174, 142, 189, 56, 118, 66, 128, 211, 97, 100, 144, 164, 146, 137, 155, 155, 27, 160, 172, 89, 167, 62, 113, 97, 143, 152, 133, 139, 89, 124, 114, 149, 126, 173, 128, 105, 117, 137, 103, 130, 127, 113, 164, 95, 216, 100, 168, 172, 50, 185, 81, 69, 158, 170, 112, 62, 88, 159, 184, 127, 72, 92, 172, 181, 107, 102, 145, 70, 151, 132, 100, 181, 117, 153, 119, 126, 136, 121, 131, 143, 167, 117, 121, 110, 94, 98, 115, 173, 134, 153, 55, 94, 162, 137, 193, 40, 123, 203, 94, 63, 231, 107, 90, 157, 93, 194, 135, 161, 105, 97, 130, 163, 147, 96, 133, 111, 100, 104, 140, 108, 160, 127, 126, 140, 112, 120, 100, 144, 102, 145, 114, 195, 102, 143, 134, 34, 214, 94, 140, 200, 142, 66, 68, 168, 219, 98, 48, 128, 156, 103, 163, 141, 44, 144, 97, 145, 140, 148, 146, 119, 108, 86, 127, 119, 154, 160, 151, 134, 116, 102, 136, 151, 154, 153, 105, 84, 98, 183, 134, 95, 116, 130, 184, 28, 151, 150, 98, 157, 86, 184, 106, 110, 119, 129, 167, 134, 137, 113, 116, 128, 166, 141, 136, 149, 91, 109, 116, 143, 107, 140, 157, 117, 111, 96, 131, 112, 126, 100, 180, 101, 145, 133, 25, 198, 138, 109, 180, 130, 89, 129, 156, 168, 121, 116, 72, 140, 186, 93, 166, 88, 97, 139, 119, 143, 127, 145, 112, 96, 99, 133, 148, 157, 145, 111, 100, 119, 153, 166, 161, 94, 89, 115, 202, 134, 98, 108, 182, 120, 53, 240, 34, 148, 173, 83, 103, 119, 155, 82, 141, 115, 135, 150, 152, 91, 116, 124, 145, 179, 124, 102, 132, 107, 134, 125, 148, 152, 137, 119, 108, 112, 101, 134, 118, 164, 102, 148, 43, 154, 135, 121, 224, 71, 71, 185, 197, 47, 106, 200, 120, 105, 145, 65, 188, 177, 131, 77, 81, 148, 148, 143, 131, 116, 88, 99, 119, 161, 154, 136, 95, 95, 120, 162, 168, 156, 110, 81, 137, 194, 90, 92, 148, 183, 59, 191, 124, 52, 208, 36, 145, 161, 133, 76, 130, 155, 118, 108, 98, 158, 151, 137, 117, 85, 150, 153, 147, 137, 102, 123, 118, 144, 122, 157, 131, 129, 109, 117, 98, 136, 145, 147, 104, 111, 100, 129, 187, 79, 166, 89, 142, 189, 71, 103, 174, 135, 125, 93, 126, 187, 121, 126, 81, 122, 173, 143, 115, 104, 103, 107, 142, 155, 134, 115, 86, 116, 169, 151, 137, 90, 104, 162, 172, 123, 68, 159, 168, 69, 126, 191, 84, 146, 147, 81, 139, 145, 110, 107, 142, 85, 129, 163, 124, 116, 105, 125, 170, 136, 125, 107, 110, 158, 147, 138, 121, 101, 130, 131, 133, 142, 141, 112, 89, 130, 125, 160, 120, 107, 97, 141, 110, 169, 137, 71, 186, 93, 159, 143, 103, 122, 191, 112, 38, 174, 176, 141, 73, 105, 144, 167, 139, 86, 87, 122, 156, 159, 131, 75, 101, 132, 170, 167, 125, 90, 88, 155, 174, 153, 88, 107, 163, 123, 95, 178, 127, 69, 197, 64, 121, 156, 109, 168, 76, 129, 167, 91, 99, 181, 109, 101, 138, 152, 139, 106, 100, 146, 174, 125, 107, 110, 120, 141, 153, 128, 114, 92, 129, 139, 148, 122, 124, 113, 107, 148, 156, 133, 68, 151, 141, 159, 70, 119, 255, 8, 184, 177, 56, 134, 120, 181, 73, 100, 163, 147, 142, 99, 89, 141, 148, 156, 138, 73, 100, 159, 154, 136, 100, 112, 125, 158, 144, 100, 97, 137, 176, 111, 95, 158, 123, 78, 205, 65, 142, 120, 132, 141, 90, 198, 59, 176, 123, 88, 161, 130, 75, 153, 182, 101, 81, 147, 153, 120, 129, 120, 121, 117, 158, 138, 127, 92, 118, 156, 146, 132, 121, 110, 118, 127, 160, 142, 82, 115, 184, 113, 128, 78, 191, 131, 24, 235, 78, 106, 174, 158, 82, 107, 170, 118, 135, 110, 90, 157, 183, 96, 96, 117, 139, 172, 128, 91, 99, 145, 143, 136, 128, 68, 153, 176, 130, 77, 109, 165, 143, 110, 169, 73, 98, 211, 99, 139, 112, 109, 157, 96, 103, 176, 96, 122, 162, 94, 119, 170, 108, 117, 159, 128, 138, 118, 109, 132, 173, 135, 114, 76, 128, 174, 145, 101, 95, 141, 121, 156, 129, 98, 92, 145, 161, 125, 112, 120, 182, 68, 174, 151, 46, 227, 108, 37, 186, 167, 78, 97, 141, 177, 109, 50, 136, 186, 125, 102, 93, 132, 145, 154, 153, 96, 87, 128, 183, 155, 106, 87, 150, 167, 137, 65, 141, 177, 83, 88, 181, 81, 142, 167, 50, 148, 107, 191, 69, 132, 165, 91, 168, 126, 123, 153, 122, 82, 180, 161, 112, 90, 142, 133, 155, 103, 91, 137, 138, 134, 115, 123, 91, 146, 164, 117, 118, 123, 113, 165, 150, 98, 98, 185, 129, 133, 73, 195, 132, 32, 236, 28, 116, 181, 134, 70, 121, 190, 112, 104, 101, 160, 150, 124, 98, 119, 149, 152, 137, 125, 96, 111, 156, 154, 121, 87, 98, 153, 146, 119, 101, 154, 141, 84, 112, 180, 102, 124, 173, 74, 176, 137, 119, 141, 103, 155, 110, 138, 161, 81, 140, 138, 106, 105, 156, 131, 99, 119, 131, 155, 129, 112, 114, 128, 154, 151, 109, 113, 109, 174, 148, 125, 92, 108, 143, 157, 119, 103, 107, 147, 122, 85, 171, 107, 119, 140, 104, 144, 154, 74, 165, 153, 114, 124, 136, 141, 149, 114, 80, 146, 146, 152, 116, 92, 88, 155, 156, 145, 91, 105, 126, 123, 172, 130, 101, 105, 173, 153, 91, 134, 175, 89, 131, 167, 62, 170, 121, 98, 167, 99, 136, 120, 115, 142, 112, 117, 152, 121, 113, 143, 135, 111, 137, 140, 140, 128, 109, 118, 139, 158, 117, 96, 115, 137, 146, 122, 107, 119, 119, 146, 119, 131, 114, 130, 133, 135, 118, 117, 186, 64, 185, 131, 63, 208, 123, 95, 106, 159, 147, 86, 106, 134, 151, 127, 107, 123, 122, 121, 166, 159, 83, 99, 141, 161, 158, 124, 111, 102, 142, 174, 134, 95, 107, 137, 150, 109, 110, 154, 89, 126, 166, 72, 147, 145, 110, 132, 102, 167, 105, 120, 192, 98, 125, 144, 121, 126, 124, 131, 132, 108, 114, 138, 143, 125, 111, 104, 128, 153, 122, 127, 100, 124, 146, 149, 122, 132, 103, 136, 163, 129, 111, 107, 177, 94, 125, 137, 108, 142, 154, 64, 138, 175, 99, 106, 118, 179, 119, 117, 103, 126, 160, 141, 119, 126, 110, 129, 144, 141, 139, 108, 103, 119, 156, 140, 136, 85, 111, 154, 154, 106, 104, 136, 144, 105, 155, 138, 74, 153, 139, 134, 121, 137, 112, 140, 119, 120, 146, 110, 113, 141, 139, 104, 126, 134, 146, 121, 114, 113, 142, 155, 134, 114, 113, 123, 142, 143, 137, 127, 97, 133, 130, 139, 142, 92, 120, 107, 172, 106, 111, 172, 93, 129, 139, 122, 105, 186, 115, 90, 133, 156, 147, 119, 118, 101, 141, 151, 134, 126, 113, 86, 135, 142, 152, 127, 107, 116, 115, 135, 154, 132, 115, 111, 123, 141, 148, 130, 99, 137, 156, 126, 99, 149, 121, 113, 155, 106, 128, 146, 105, 121, 148, 98, 132, 156, 109, 119, 122, 141, 128, 128, 119, 129, 140, 122, 133, 117, 114, 142, 145, 124, 117, 119, 136, 121, 143, 125, 125, 120, 121, 149, 128, 133, 82, 175, 150, 78, 144, 139, 119, 108, 177, 108, 103, 137, 118, 155, 122, 120, 104, 123, 157, 142, 115, 117, 118, 122, 123, 143, 150, 128, 125, 101, 122, 138, 151, 139, 118, 101, 96, 146, 156, 125, 103, 103, 164, 148, 89, 128, 150, 109, 135, 139, 105, 135, 143, 123, 101, 163, 143, 114, 118, 139, 137, 113, 123, 121, 139, 121, 144, 110, 101, 134, 147, 138, 124, 128, 126, 113, 129, 133, 144, 138, 119, 122, 112, 156, 125, 150, 121, 86, 166, 136, 95, 110, 165, 130, 84, 134, 114, 143, 134, 104, 127, 108, 166, 145, 116, 129, 110, 116, 129, 152, 145, 123, 115, 128, 127, 128, 126, 132, 138, 131, 119, 104, 112, 129, 141, 127, 108, 124, 146, 135, 114, 110, 169, 110, 126, 158, 90, 170, 117, 124, 154, 109, 123, 133, 147, 135, 130, 106, 113, 129, 149, 126, 111, 110, 119, 132, 141, 135, 134, 125, 102, 120, 140, 160, 120, 141, 108, 121, 112, 137, 172, 97, 122, 120, 129, 136, 134, 113, 113, 127, 114, 152, 138, 92, 128, 102, 153, 152, 111, 139, 110, 112, 122, 144, 151, 143, 127, 117, 115, 132, 118, 131, 143, 140, 131, 119, 111, 117, 131, 132, 139, 127, 113, 121, 153, 120, 117, 102, 160, 135, 86, 189, 103, 115, 159, 116, 129, 109, 140, 150, 131, 110, 114, 140, 140, 130, 124, 108, 114, 127, 143, 143, 125, 137, 101, 125, 119, 136, 129, 130, 134, 102, 138, 97, 149, 151, 114, 139, 116, 109, 146, 160, 106, 87, 143, 146, 132, 120, 128, 95, 125, 159, 121, 137, 121, 128, 116, 117, 122, 146, 126, 128, 135, 130, 111, 116, 134, 121, 146, 140, 138, 134, 130, 99, 116, 149, 138, 129, 131, 105, 132, 140, 134, 117, 112, 175, 112, 96, 164, 109, 121, 131, 126, 162, 103, 117, 125, 123, 150, 138, 115, 111, 123, 125, 139, 144, 130, 116, 124, 113, 123, 124, 144, 137, 124, 143, 83, 141, 102, 122, 176, 99, 138, 132, 101, 117, 154, 154, 103, 88, 154, 153, 128, 119, 117, 104, 131, 148, 120, 144, 120, 131, 125, 122, 127, 121, 141, 132, 142, 132, 126, 108, 116, 120, 129, 139, 137, 146, 132, 118, 121, 119, 125, 155, 140, 136, 93, 129, 139, 122, 139, 111, 134, 134, 101, 156, 120, 131, 151, 86, 130, 105, 151, 126, 131, 124, 118, 121, 118, 146, 126, 138, 125, 133, 111, 124, 114, 132, 125, 150, 129, 122, 141, 86, 154, 119, 96, 156, 135, 99, 119, 144, 139, 125, 123, 120, 118, 170, 132, 96, 128, 133, 119, 152, 135, 109, 160, 112, 111, 129, 129, 133, 135, 144, 137, 134, 113, 132, 120, 106, 118, 132, 132, 143, 125, 133, 124, 100, 132, 126, 156, 137, 119, 113, 115, 178, 133, 81, 123, 147, 115, 102, 157, 108, 137, 141, 101, 144, 126, 148, 120, 120, 113, 124, 125, 114, 137, 127, 146, 119, 122, 125, 119, 132, 101, 155, 123, 141, 151, 95, 157, 108, 101, 153, 141, 120, 129, 133, 131, 123, 117, 131, 137, 126, 157, 131, 102, 113, 136, 118, 125, 170, 105, 144, 122, 121, 121, 120, 127, 113, 129, 145, 146, 114, 127, 129, 130, 105, 125, 109, 151, 139, 144, 133, 108, 131, 102, 147, 131, 125, 128, 98, 144, 167, 104, 105, 124, 137, 117, 154, 91, 127, 143, 117, 153, 116, 136, 117, 136, 111, 132, 131, 137, 133, 137, 119, 122, 119, 135, 118, 124, 137, 117, 164, 92, 153, 140, 96, 119, 137, 140, 110, 145, 138, 121, 111, 89, 150, 148, 122, 133, 127, 134, 107, 125, 146, 114, 150, 146, 109, 135, 111, 125, 123, 116, 136, 121, 128, 140, 141, 138, 127, 125, 105, 124, 128, 137, 120, 152, 127, 114, 124, 109, 149, 128, 128, 112, 108, 129, 164, 118, 121, 130, 123, 123, 162, 102, 120, 133, 116, 143, 122, 159, 110, 122, 117, 125, 121, 131, 116, 154, 127, 137, 137, 123, 123, 102, 144, 99, 148, 132, 120, 157, 135, 90, 124, 138, 119, 112, 138, 145, 141, 125, 102, 127, 128, 129, 128, 146, 139, 116, 117, 135, 101, 138, 135, 117, 146, 135, 142, 118, 117, 126, 116, 117, 132, 131, 131, 143, 132, 128, 131, 106, 110, 126, 125, 140, 122, 147, 127, 102, 138, 146, 128, 88, 142, 158, 125, 104, 140, 130, 131, 144, 96, 134, 126, 128, 135, 127, 135, 122, 118, 124, 116, 135, 129, 139, 139, 130, 128, 129, 124, 119, 133, 102, 144, 121, 130, 158, 120, 116, 133, 128, 105, 116, 152, 143, 137, 107, 91, 144, 148, 137, 115, 132, 121, 115, 108, 133, 133, 142, 138, 113, 138, 123, 123, 117, 129, 119, 135, 129, 135, 137, 126, 120, 126, 118, 114, 134, 124, 146, 118, 141, 124, 104, 146, 130, 126, 144, 119, 134, 129, 115, 137, 138, 112, 125, 141, 109, 161, 125, 115, 125, 123, 134, 125, 140, 134, 130, 134, 105, 126, 125, 120, 136, 116, 138, 127, 150, 108, 130, 134, 96, 142, 128, 104, 134, 153, 126, 111, 135, 131, 124, 131, 113, 127, 131, 129, 143, 135, 113, 111, 122, 121, 134, 151, 120, 138, 124, 127, 121, 117, 127, 124, 136, 124, 139, 135, 125, 130, 125, 117, 117, 127, 136, 134, 138, 122, 136, 112, 121, 140, 131, 129, 120, 122, 137, 131, 116, 138, 136, 108, 140, 136, 115, 147, 110, 126, 123, 140, 124, 126, 154, 126, 111, 116, 124, 125, 127, 137, 134, 131, 130, 111, 137, 105, 132, 131, 119, 140, 131, 127, 135, 142, 112, 109, 129, 140, 129, 134, 120, 114, 134, 137, 117, 119, 133, 137, 122, 128, 128, 114, 143, 127, 128, 126, 127, 131, 123, 131, 126, 127, 126, 134, 127, 126, 126, 125, 124, 128, 125, 137, 126, 127, 129, 119, 138, 120, 123, 134, 132, 120, 129, 138, 126, 121, 125, 130, 136, 130, 124, 119, 124, 129, 127, 130, 132, 133, 126, 130, 119, 122, 126, 125, 133, 134, 133, 130, 127, 126, 123, 121, 121, 128, 130, 138, 137, 124, 129, 120, 123, 125, 124, 138, 125, 128, 124, 124, 138, 130, 116, 121, 136, 129, 119, 133, 130, 116, 139, 122, 126, 116, 133, 134, 122, 137, 118, 120, 127, 133, 128, 131, 132, 124, 120, 133, 128, 140, 124, 132, 124, 123, 141, 120, 129, 137, 130, 111, 131, 131, 127, 125, 126, 131, 126, 125, 130, 132, 125, 123, 131, 131, 129, 121, 127, 127, 126, 132, 127, 133, 121, 122, 126, 123, 132, 137, 121, 123, 125, 126, 126, 125, 129, 132, 127, 123, 126, 125, 135, 129, 129, 126, 123, 128, 135, 126, 121, 130, 135, 128, 122, 126, 128, 129, 129, 124, 126, 131, 127, 134, 132, 124, 128, 128, 126, 130, 127, 128, 130, 134, 126, 121, 130, 129, 126, 126, 122, 123, 134, 130, 122, 136, 127, 123, 127, 125, 129, 128, 128, 131, 125, 124, 127, 128, 128, 123, 134, 133, 124, 121, 126, 127, 130, 127, 126, 130, 125, 122, 128, 128, 130, 132, 123, 133, 121, 127, 129, 128, 130, 128, 129, 127, 124, 125, 133, 123, 128, 124, 130, 133, 125, 126, 127, 130, 129, 125, 126, 132, 126, 130, 130, 129, 130, 125, 129, 128, 125, 131, 129, 123, 131, 124, 126, 129, 125, 127, 130, 125, 126, 127, 127, 128, 122, 133, 129, 127, 124, 126, 128, 128, 127, 128, 131, 124, 132, 125, 125, 127, 123, 125, 130, 134, 123, 127, 128, 124, 129, 132, 131, 122, 131, 130, 126, 127, 129, 137, 120, 126, 131, 126, 129, 125, 130, 124, 128, 135, 126, 124, 126, 129, 127, 127, 126, 124, 127, 129, 132, 130, 125, 124, 125, 131, 131, 126, 125, 127, 128, 133, 125, 124, 125, 124, 129, 128, 127, 124, 130, 128, 128, 124, 125, 126, 129, 128, 127, 131, 125, 129, 128, 129, 128, 127, 126, 132, 123, 128, 132, 128, 131, 126, 126, 128, 129, 130, 127, 126, 127, 128, 132, 125, 125, 126, 131, 131, 125, 124, 126, 127, 129, 129, 129, 119, 129, 132, 124, 127, 123, 132, 126, 129, 127, 127, 128, 131, 129, 126, 128, 128, 123, 124, 132, 127, 129, 126, 130, 126, 128, 130, 123, 128, 126, 130, 132, 128, 128, 124, 127, 129, 126, 127, 129, 129, 128, 126, 129, 127, 125, 127, 125, 130, 130, 127, 124, 126, 126, 127, 129, 128, 129, 128, 128, 124, 126, 130, 131, 134, 128, 126, 127, 127, 127, 128, 126, 129, 130, 126, 127, 128, 126, 125, 127, 125, 129, 129, 129, 129, 128, 125, 127, 133, 125, 126, 128, 126,   
};

void setup() {
  // put your setup code here, to run once:
  startPlayback(sample, sizeof(sample));
}

void loop() {
  // put your main code here, to run repeatedly:

}
