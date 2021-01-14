/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>
@optional
-(void)sendNewWindowFeedback;
-(void)sendWindowMiniaturizeByMouseFeedback;
-(void)sendAppLaunchFeedback;
-(void)sendWindowCloseByMouseFeedback;
-(void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(BOOL)arg1;
-(void)sendWindowMiniaturizeByKeyboardFeedback;
-(void)sendAppLostFocusFeedback;
-(void)sendNewTabFeedback;
-(void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2;
-(void)sendWindowCloseByKeyboardFeedback;
-(void)sendAppQuitFeedback;

@required
-(void)sendCrowdsourcedAutoFillFeedback:(id)arg1 forQueryID:(long long)arg2;

@end

