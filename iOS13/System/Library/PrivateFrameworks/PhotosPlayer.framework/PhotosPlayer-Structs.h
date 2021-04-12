/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IS0;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IS1;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct {
	BOOL videoPlayer;
	BOOL videoPlayerVolume;
	BOOL contentFromPlayerItem;
	BOOL willPlayToEndObserver;
	BOOL willPlayToPhotoObserver;
	BOOL status;
} SCD_Struct_IS5;

typedef struct {
	BOOL didChangeWithAnimationDuration;
} SCD_Struct_IS6;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	BOOL cacheSize;
	BOOL frameCache;
} SCD_Struct_IS9;

typedef struct {
	SCD_Struct_IS1 start;
	SCD_Struct_IS1 duration;
} SCD_Struct_IS10;

typedef struct {
	BOOL playbackStateDidChange;
	BOOL interactingDidChange;
	BOOL gestureRecognizerDidChange;
} SCD_Struct_IS11;

typedef struct {
	BOOL playerItemLoadingTarget;
	BOOL playerPlayerItem;
	BOOL playerView;
	BOOL playerMuted;
	BOOL status;
	BOOL readyForDisplay;
	BOOL playbackState;
} SCD_Struct_IS12;

