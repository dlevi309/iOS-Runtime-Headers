/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIQueuingScrollViewDelegate <NSObject>
@required
-(void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
-(void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
-(void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
-(void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
-(void)queuingScrollViewDidFinishScrolling:(id)arg1;
-(BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
-(void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2;

@end

