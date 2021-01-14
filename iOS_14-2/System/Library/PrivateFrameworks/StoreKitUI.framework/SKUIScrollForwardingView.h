/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView;

@interface SKUIScrollForwardingView : UIView {

	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
@end

