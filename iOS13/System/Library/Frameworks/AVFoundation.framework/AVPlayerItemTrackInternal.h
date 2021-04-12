/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSDictionary;

@interface AVPlayerItemTrackInternal : NSObject {

	AVWeakReference* weakReferenceToPlayerItem;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	BOOL figPlaybackItemIsReadyForInspection;
	AVAsset* asset;
	int trackID;
	NSString* videoFieldMode;
	NSDictionary* loudnessInfo;
	NSDictionary* videoEnhancementFilterOptions;
	BOOL enabled;
	BOOL enabledWasSet;
	BOOL disableColorMatching;
	BOOL disableColorMatchingWasSet;
	long long activeHapticChannelIndex;
	BOOL activeHapticChannelIndexWasSet;
	float hapticVolume;
	BOOL hapticVolumeWasSet;

}
@end

