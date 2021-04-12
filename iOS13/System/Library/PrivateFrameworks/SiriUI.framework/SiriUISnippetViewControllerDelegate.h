/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol SiriUISnippetViewControllerDelegate <SiriUIAceObjectViewControllerDelegate>
@optional
-(void)siriSnippetViewControllerRequestsPinning:(id)arg1;
-(unsigned long long)navigationIndexOfSnippetViewController:(id)arg1;
-(double)boundingWidthForSnippetViewController:(id)arg1;
-(unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;
-(id)siriEnabledAppListForSiriViewController:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 setTypeToSiriViewHidden:(BOOL)arg2;

@required
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3;
-(void)siriSnippetViewControllerViewDidLoad:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;
-(BOOL)siriSnippetViewControllerIsVisible:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2;
-(void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

