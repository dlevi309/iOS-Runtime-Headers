/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned engagementType : 1;
} SCD_Struct_AT1;

typedef struct {
	unsigned dateEngaged : 1;
	unsigned engagementType : 1;
	unsigned eventDate : 1;
	unsigned eventType : 1;
	unsigned executableType : 1;
} SCD_Struct_AT2;

typedef struct {
	unsigned pageIndex : 1;
	unsigned isSuggestionInAddWidgetSheet : 1;
	unsigned isWidgetInTodayView : 1;
} SCD_Struct_AT3;

typedef struct {
	unsigned now : 1;
	unsigned doNotDisturb : 1;
	unsigned telephonyCapability : 1;
	unsigned airDropCapability : 1;
	unsigned airplaneMode : 1;
	unsigned coreRoutineCapability : 1;
	unsigned greenTeaDeviceCapability : 1;
	unsigned internalBuild : 1;
	unsigned lockScreen : 1;
} SCD_Struct_AT4;

typedef struct {
	unsigned searchEngagedActionType : 1;
	unsigned didSearchDuringSession : 1;
} SCD_Struct_AT5;

typedef struct {
	unsigned bundleIndex : 1;
	unsigned categoryID : 1;
	unsigned categoryIndex : 1;
	unsigned date : 1;
	unsigned eventType : 1;
	unsigned searchQueryLength : 1;
	unsigned searchTab : 1;
} SCD_Struct_AT6;

typedef struct {
	unsigned date : 1;
	unsigned stackKind : 1;
	unsigned stackLocation : 1;
	unsigned widgetSize : 1;
} SCD_Struct_AT7;

typedef struct {
	unsigned long long lastEventTimestamp;
} SCD_Struct_AT8;

typedef struct {
	SCD_Struct_AT8 resultsDidBecomeVisible;
	SCD_Struct_AT8 didStartSearch;
	SCD_Struct_AT8 searchViewDidAppear;
	SCD_Struct_AT8 searchViewDidDisappear;
	SCD_Struct_AT8 didEngageResult;
	SCD_Struct_AT8 didEngageCardSection;
} SCD_Struct_AT9;

typedef struct {
	unsigned captureType : 1;
	unsigned iconLocation : 1;
	unsigned appLibraryEnabled : 1;
	unsigned appPredictionPanelEnabled : 1;
	unsigned appPredictionPanelTodayEnabled : 1;
	unsigned spotlightEnabled : 1;
	unsigned suggestionsWidgetEnabled : 1;
	unsigned suggestionsWidgetTodayEnabled : 1;
} SCD_Struct_AT10;

