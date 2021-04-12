/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIWebOverflowScrollView, CALayer, UIView;

@interface UIWebOverflowScrollViewInfo : NSObject {

	UIWebOverflowScrollView* _scrollView;
	CALayer* _scrollViewLayer;
	UIView* _oldSuperview;

}

@property (nonatomic,retain) UIWebOverflowScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * oldSuperview;                             //@synthesize oldSuperview=_oldSuperview - In the implementation block
-(id)initWithScrollView:(id)arg1 ;
-(UIView *)oldSuperview;
-(void)setOldSuperview:(UIView *)arg1 ;
-(void)setScrollView:(UIWebOverflowScrollView *)arg1 ;
-(UIWebOverflowScrollView *)scrollView;
-(void)dealloc;
@end

