/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/


@protocol CRKCardSectionViewControllerDelegate <CRFeedbackListener>
@optional
-(void)cardSectionViewControllerBoundsDidChange:(id)arg1;
-(CGSize*)boundingSizeForCardSectionViewController:(id)arg1;
-(BOOL)canPerformCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg1;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
-(void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;

@end

