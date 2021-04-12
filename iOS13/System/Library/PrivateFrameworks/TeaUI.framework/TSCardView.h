/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface TSCardView : UIView <UIGestureRecognizerDelegate> {

	 onTap;
	 onCloseTap;
	 expandAccessibilityActionHandler;
	 expandAccessibilityAction;
	 collapseAccessibilityActionHandler;
	 collapseAccessibilityAction;
	 contentView;
	 clippingView;
	 grabberView;
	 contentOverlayButtonView;
	 barView;
	 titleView;
	 layout;
	 isFullscreen;

}

@property (copy,nonatomic) NSString * accessibilityLabel; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)expandCard:(id)arg1 ;
-(BOOL)collapseCard:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)toggleExpansion;
@end

