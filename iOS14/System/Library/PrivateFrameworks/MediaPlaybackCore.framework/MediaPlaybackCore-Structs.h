/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	float field6;
	float field7;
	BOOL field8;
	BOOL field9;
} SCD_Struct_MP0;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_MP1;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	long long field4;
	long long field5;
	long long field6;
	long long field7;
	long long field8;
} SCD_Struct_MP2;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned identifiers : 1;
	unsigned bookmarkTime : 1;
	unsigned shouldRememberBookmarkTime : 1;
	unsigned hasBeenPlayed : 1;
	unsigned startTime : 1;
	unsigned stopTime : 1;
	unsigned storeUbiquitousIdentifier : 1;
	unsigned userPlayCount : 1;
} SCD_Struct_MP4;

typedef struct {
	unsigned initialized : 1;
	unsigned trackNumber : 1;
	unsigned trackCount : 1;
	SCD_Struct_MP4 playbackPosition;
} SCD_Struct_MP5;

typedef struct {
	unsigned initialized : 1;
	unsigned beats1 : 1;
	unsigned name : 1;
	unsigned editorNotes : 1;
	unsigned shortEditorNotes : 1;
	unsigned explicit;
	unsigned artwork : 1;
	unsigned allowsItemLiking : 1;
	unsigned attributionLabel : 1;
	unsigned type : 1;
	unsigned subtype : 1;
	unsigned subscriptionRequired : 1;
	unsigned providerUniversalLink : 1;
	unsigned providerBundleIdentifier : 1;
} SCD_Struct_MP6;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
} SCD_Struct_MP7;

typedef struct {
	long long reverseCount;
	long long forwardCount;
} SCD_Struct_MP8;

typedef struct {
	unsigned long long flags;
	unsigned long long machAbsoluteTime;
	unsigned long long rawNanoSeconds;
	unsigned long long timebase;
	double userSecondsSinceReferenceDate;
} SCD_Struct_MP9;

typedef struct {
	unsigned dataSourcePlaceholderItemForLoadingAdditionalItemsInSection : 1;
	unsigned dataSourceSupplementalPlaybackContextWithReason : 1;
	unsigned dataSourceSupplementalPlaybackContextBehavior : 1;
	unsigned dataSourceCanSkipItem : 1;
	unsigned dataSourceFirstItemIntersectingIdentifierSet : 1;
	unsigned dataSourceItemDidBeginPlayback : 1;
	unsigned dataSourceShouldRequestAdditionalItemsWhenReachingTailOfSection : 1;
	unsigned dataSourcePrefetchThresholdForSection : 1;
	unsigned dataSourceShouldUsePlaceholderForItemInSection : 1;
	unsigned dataSourceSectionShouldShuffleExcludeItem : 1;
	unsigned dataSourceUpdatedPlaybackContext : 1;
} SCD_Struct_MP10;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _MRSystemAppPlaybackQueue* MRSystemAppPlaybackQueueRef;

typedef struct {
	double snapshotTime;
	double startTime;
	double endTime;
	double duration;
	double elapsedDuration;
	float rate;
	float defaultRate;
	BOOL isLiveContent;
	BOOL isLoading;
} SCD_Struct_MP13;

typedef struct DSPSplitComplex {
	float realp;
	float imagp;
} DSPSplitComplex;

typedef struct opaqueMTAudioProcessingTap* opaqueMTAudioProcessingTapRef;

typedef struct OpaqueFFTSetup* OpaqueFFTSetupRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_MP17;

typedef struct {
	SCD_Struct_MP1 field1;
	7 field2;
	SCD_Struct_MP1 field3;
	7 field4;
} SCD_Struct_MP18;

typedef struct MSVSignedRange {
	long long location;
	long long length;
} MSVSignedRange;

typedef struct {
	unsigned containerType : 1;
} SCD_Struct_MP20;

typedef struct {
	unsigned cloudID : 1;
	unsigned delegateInfoID : 1;
	unsigned storeAdamID : 1;
} SCD_Struct_MP21;

typedef struct {
	unsigned accountID : 1;
	unsigned delegateInfoID : 1;
	unsigned systemReleaseType : 1;
	unsigned privateListeningEnabled : 1;
} SCD_Struct_MP22;

typedef struct {
	unsigned mediaType : 1;
	unsigned excludeFromShuffle : 1;
} SCD_Struct_MP23;

typedef struct {
	unsigned cloudID : 1;
	unsigned delegateInfoID : 1;
	unsigned purchaseHistoryID : 1;
	unsigned storeAdamID : 1;
	unsigned storeSubscriptionAdamID : 1;
} SCD_Struct_MP24;

