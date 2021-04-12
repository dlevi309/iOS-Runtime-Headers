/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVMutableScheduledAudioParameters, NSString, AVAudioMixEffectParameters;

@interface AVAudioMixInputParametersInternal : NSObject {

	int trackID;
	AVMutableScheduledAudioParameters* scheduledAudioParameters;
	NSString* audioTimePitchAlgorithm;
	opaqueMTAudioProcessingTapRef tap;
	AVAudioMixEffectParameters* effectParameters;

}
@end

