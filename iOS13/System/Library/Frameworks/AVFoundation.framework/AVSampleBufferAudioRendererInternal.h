/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVScheduledAudioParameters, AVWeakReference, NSError;

@interface AVSampleBufferAudioRendererInternal : NSObject {

	NSString* audioOutputDeviceUniqueID;
	NSString* audioTimePitchAlgorithm;
	SCD_Struct_AV46* mediaDataRequester;
	float rate;
	float volume;
	BOOL muted;
	AVScheduledAudioParameters* scheduledAudioParameters;
	OpaqueCMTimebaseRef readOnlyControlTimebase;
	AVWeakReference* weakReferenceToSynchronizer;
	AVWeakReference* weakReferenceToSelf;
	long long status;
	NSError* error;
	OpaqueFigSampleBufferAudioRendererRef figAudioRenderer;

}
@end

