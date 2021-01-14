/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISiriContent <AFUISiriRemoteViewHosting>
@property (assign,nonatomic) long long siriSessionState; 
@property (assign,nonatomic) long long mode; 
@optional
-(void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(/*^block*/id)arg3 unlockCompletionHandler:(/*^block*/id)arg4;
-(void)setVoiceActivationMaskViewVisible:(BOOL)arg1;
-(void)setAuxiliaryViewsHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setSiriContentDelegate:(id)arg1;
-(void)setContentViewsAlpha:(double)arg1;

@required
-(long long)mode;
-(void)setMode:(long long)arg1;
-(long long)siriSessionState;
-(void)setSiriSessionState:(long long)arg1;

@end

