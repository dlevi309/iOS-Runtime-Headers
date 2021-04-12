/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class VTSiriPHash;

@interface VTSiriNotifications : NSObject {

	CFNotificationCenterRef _center;
	VTSiriPHash* _hasher;

}
-(id)init;
-(void)broadcastAudioPayload:(id)arg1 numSamples:(unsigned long long)arg2 superVectorScore:(double)arg3 absoluteTime:(unsigned long long)arg4 ;
@end

