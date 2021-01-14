/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol SearchUIFeedbackDelegate <SFFeedbackListener>
@optional
-(void)willDismissViewController:(id)arg1;
-(void)presentViewController:(id)arg1;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1;
-(void)updateViewControllerTitle:(id)arg1;

@end

