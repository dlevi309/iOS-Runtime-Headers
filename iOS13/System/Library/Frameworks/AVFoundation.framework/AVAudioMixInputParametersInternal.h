/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVMutableScheduledAudioParameters, NSString, AVAudioMixEffectParameters;

@interface AVAudioMixInputParametersInternal : NSObject {

	int trackID;
	AVMutableScheduledAudioParameters* scheduledAudioParameters;
	NSString* audioTimePitchAlgorithm;
	opaqueMTAudioProcessingTapRef tap;
	AVAudioMixEffectParameters* effectParameters;

}
@end

