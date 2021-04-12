/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol CRKCardViewControllerDelegate <CRFeedbackListener,CRCommandHandling>
@optional
-(void)cardViewControllerDidLoad:(id)arg1;
-(void)cardViewControllerBoundsDidChange:(id)arg1;
-(void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
-(void)cardViewController:(id)arg1 didFailToLoadCard:(id)arg2;
-(CGSize*)cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2;
-(id)baseCardForCardViewController:(id)arg1;
-(BOOL)canPerformReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
-(unsigned long long)navigationIndexOfCardViewController:(id)arg1;
-(void)presentViewController:(id)arg1 forCardViewController:(id)arg2;
-(void)cardViewController:(id)arg1 willDismissViewController:(id)arg2;
-(BOOL)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)performRequestUserConfirmationCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)performBeganEditingCommand:(id)arg1 forCardViewController:(id)arg2;
-(BOOL)cardViewController:(id)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)arg2;
-(void)cardViewController:(id)arg1 requestCardSectionViewSourceForCard:(id)arg2 reply:(/*^block*/id)arg3;

@end

