/*
    KPLIB Civilian Preset Script Component

    File: script_component.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2018-12-07
    Last Update: 2018-12-07
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
        Contains all preprocessor commands for the civilian preset processing.
*/

// Generates a KPLIB preset variable
#define KPLIB_PRST_VAR(VARIABLE)\
    "KPLIB_preset_" + VARIABLE + "C"

// Gets the value of a KPLIB preset variable
#define KPLIB_PRST_GETVAR(VARIABLE)\
    missionnamespace getVariable [KPLIB_PRST_VAR(VARIABLE), nil]

// Sets the value of a KPLIB preset variable
#define KPLIB_PRST_SETVAR(VARIABLE,CLASS)\
    missionnamespace setVariable [KPLIB_PRST_VAR(VARIABLE), CLASS]

// Creates a KPLIB preset array
#define KPLIB_PRST_CAT_BEGIN(ARRAYNAME)\
    missionnamespace setVariable [KPLIB_PRST_VAR(ARRAYNAME), []];

// Adds a classname to a preset array with resource costs
#define KPLIB_PRST_CAT_ADD(ARRAYNAME, CLASSNAMESTRING)\
    (KPLIB_PRST_GETVAR(ARRAYNAME)) pushBack CLASSNAMESTRING
