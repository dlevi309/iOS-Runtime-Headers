/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol WFDialogAlertPresenter <NSObject>
@property (assign,nonatomic,__weak) id<WFDialogAlertPresenterDelegate> delegate; 
@property (nonatomic,readonly) BOOL alertIsActive; 
@required
-(id<WFDialogAlertPresenterDelegate>)delegate;
-(BOOL)alertIsActive;
-(void)setDelegate:(id)arg1;
-(void)deactivateAlert;
-(void)activateAlert;

@end

