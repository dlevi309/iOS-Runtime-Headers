/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@protocol VTUIDictationDataSharingOptInPresentationDelegate;
@interface VTUIDictationDataSharingOptInPresenter : NSObject {

	id<VTUIDictationDataSharingOptInPresentationDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<VTUIDictationDataSharingOptInPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id)dataSharingOptInView;
-(id<VTUIDictationDataSharingOptInPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<VTUIDictationDataSharingOptInPresentationDelegate>)arg1 ;
-(void)_optInButtonTapped;
-(void)_optOutButtonTapped;
-(void)_learnMoreButtonTapped;
-(id)dataSharingOptInAlertController;
-(id)dataSharingReminderAlertController;
-(id)dictationDataSharingOptInAlertViewModel;
-(id)dictationDataSharingOptInReminderViewModel;
@end

