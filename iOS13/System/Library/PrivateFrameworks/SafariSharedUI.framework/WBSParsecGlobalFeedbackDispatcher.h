/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>
@optional
-(void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2;
-(void)sendAppLaunchFeedback;
-(void)sendAppQuitFeedback;
-(void)sendAppLostFocusFeedback;
-(void)sendNewWindowFeedback;
-(void)sendNewTabFeedback;
-(void)sendWindowCloseByKeyboardFeedback;
-(void)sendWindowCloseByMouseFeedback;
-(void)sendWindowMiniaturizeByKeyboardFeedback;
-(void)sendWindowMiniaturizeByMouseFeedback;
-(void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(BOOL)arg1;

@required
-(void)sendCrowdsourcedAutoFillFeedback:(id)arg1 forQueryID:(long long)arg2;

@end

