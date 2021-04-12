/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSString, AVScheduledAudioParameters, AVWeakReference, NSError;

@interface AVSampleBufferAudioRendererInternal : NSObject {

	NSString* audioOutputDeviceUniqueID;
	NSString* audioTimePitchAlgorithm;
	SCD_Struct_AV38* mediaDataRequester;
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

