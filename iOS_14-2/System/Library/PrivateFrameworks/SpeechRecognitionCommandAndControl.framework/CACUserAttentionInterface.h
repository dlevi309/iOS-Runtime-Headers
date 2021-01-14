/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <libobjc.A.dylib/CACUserAttentionControllerDelegate.h>

@class CACUserAttentionController;

@interface CACUserAttentionInterface : NSObject <CACUserAttentionControllerDelegate> {

	BOOL _isAttentionAwarenessInterrupted;
	CACUserAttentionController* _userAttentionController;

}

@property (setter=_setUserAttentionController:,getter=_userAttentionController,nonatomic,retain) CACUserAttentionController * userAttentionController;              //@synthesize userAttentionController=_userAttentionController - In the implementation block
@property (assign,nonatomic) BOOL isAttentionAwarenessInterrupted;                                                                                                  //@synthesize isAttentionAwarenessInterrupted=_isAttentionAwarenessInterrupted - In the implementation block
+(id)sharedManager;
-(void)stopUserAttentionControllerIfNeeded;
-(void)startUserAttentionControllerIfNeededForTypes:(unsigned long long)arg1 ;
-(void)userAttentionController:(id)arg1 didLoseAttentionWithEvent:(long long)arg2 ;
-(void)userAttentionController:(id)arg1 didGainAttentionWithEvent:(long long)arg2 ;
-(void)userAttentionControllerAttentionAwarenessInterrupted:(id)arg1 ;
-(void)userAttentionControllerAttentionAwarenessInterruptionEnded:(id)arg1 ;
-(id)_userAttentionController;
-(void)_setUserAttentionController:(id)arg1 ;
-(void)cancelDelayedUserAttentionControllerStop;
-(BOOL)isAttentionAwarenessInterrupted;
-(void)setIsAttentionAwarenessInterrupted:(BOOL)arg1 ;
-(void)startUserAttentionControllerIfNeeded;
-(void)stopUserAttentionControllerIfNeededAfterDelay:(double)arg1 ;
@end

