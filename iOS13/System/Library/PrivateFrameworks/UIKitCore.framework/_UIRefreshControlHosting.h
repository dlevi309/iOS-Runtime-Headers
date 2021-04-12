/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIScrollView;


@protocol _UIRefreshControlHosting <NSObject>
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding; 
@property (__weak,readonly) UIScrollView * scrollView; 
@required
-(UIScrollView *)scrollView;
-(BOOL)refreshControlInsetsAffectScrollViewRubberBanding;
-(void)incrementInsetHeight:(double)arg1;
-(void)decrementInsetHeight:(double)arg1;
-(void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;

@end

