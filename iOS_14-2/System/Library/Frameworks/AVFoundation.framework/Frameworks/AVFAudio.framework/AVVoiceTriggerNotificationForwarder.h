/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/VoiceTriggerNotificationInterface.h>

@protocol VoiceTriggerNotificationInterface;
@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface> {

	id<VoiceTriggerNotificationInterface> _target;

}

@property (assign,nonatomic) id<VoiceTriggerNotificationInterface> target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<VoiceTriggerNotificationInterface>)arg1 ;
-(void)speakerStateChangedNotification:(id)arg1 ;
-(void)speakerMuteStateChangedNotification:(BOOL)arg1 ;
-(void)siriClientRecordStateChangedNotification:(BOOL)arg1 recordingCount:(unsigned long long)arg2 ;
-(void)voiceTriggerNotification:(id)arg1 ;
-(id<VoiceTriggerNotificationInterface>)target;
@end

