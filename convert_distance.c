double convert_distance(double distance, char* unit) {
    if (strcmp(unit, "km") == 0) {
        return distance * 111.12;
    } else if (strcmp(unit, "miles") == 0) {
        return distance * 69.046766881413;
    } else if (strcmp(unit, "nm") == 0) {
        return distance * 60;
    } else {
        printf("Invalid unit. Supported units are 'km', 'miles', and 'nm'.\n");
        exit(1);
    }
}
