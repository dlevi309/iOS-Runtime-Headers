/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIScrollView;


@protocol _UIRefreshControlHosting <NSObject>
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding; 
@property (__weak,readonly) UIScrollView * scrollView; 
@required
-(void)incrementInsetHeight:(double)arg1;
-(void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
-(BOOL)refreshControlInsetsAffectScrollViewRubberBanding;
-(UIScrollView *)scrollView;
-(void)decrementInsetHeight:(double)arg1;

@end

