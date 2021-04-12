/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/


@protocol SearchUIFeedbackDelegate <SFFeedbackListener>
@optional
-(void)presentViewController:(id)arg1;
-(void)willDismissViewController:(id)arg1;
-(void)updateViewControllerTitle:(id)arg1;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1;

@end

