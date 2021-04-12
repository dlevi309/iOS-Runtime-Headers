/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/


@protocol CRKCardSectionViewControllerDelegate <CRFeedbackListener>
@optional
-(BOOL)canPerformCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg1;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
-(void)cardSectionViewControllerBoundsDidChange:(id)arg1;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
-(void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
-(CGSize*)boundingSizeForCardSectionViewController:(id)arg1;

@end

