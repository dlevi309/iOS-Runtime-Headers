/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/VoiceTriggerNotificationInterface.h>

@protocol VoiceTriggerNotificationInterface;
@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface> {

	id<VoiceTriggerNotificationInterface> _target;

}

@property (assign,nonatomic) id<VoiceTriggerNotificationInterface> target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<VoiceTriggerNotificationInterface>)arg1 ;
-(id<VoiceTriggerNotificationInterface>)target;
-(void)voiceTriggerNotification:(id)arg1 ;
-(void)speakerStateChangedNotification:(id)arg1 ;
-(void)speakerMuteStateChangedNotification:(BOOL)arg1 ;
-(void)siriClientRecordStateChangedNotification:(BOOL)arg1 recordingCount:(unsigned long long)arg2 ;
@end

