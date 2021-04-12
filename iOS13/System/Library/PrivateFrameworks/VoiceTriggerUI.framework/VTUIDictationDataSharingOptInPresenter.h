/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@protocol VTUIDictationDataSharingOptInPresentationDelegate;
@interface VTUIDictationDataSharingOptInPresenter : NSObject {

	id<VTUIDictationDataSharingOptInPresentationDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<VTUIDictationDataSharingOptInPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id)dataSharingOptInView;
-(void)setPresentationDelegate:(id<VTUIDictationDataSharingOptInPresentationDelegate>)arg1 ;
-(id<VTUIDictationDataSharingOptInPresentationDelegate>)presentationDelegate;
-(void)_optInButtonTapped;
-(void)_optOutButtonTapped;
-(void)_learnMoreButtonTapped;
-(id)dataSharingOptInAlertController;
-(id)dataSharingReminderAlertController;
-(id)dictationDataSharingOptInAlertViewModel;
-(id)dictationDataSharingOptInReminderViewModel;
@end

