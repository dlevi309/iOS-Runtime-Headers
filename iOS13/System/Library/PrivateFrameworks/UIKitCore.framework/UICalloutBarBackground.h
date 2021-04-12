/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIImageView;

@interface UICalloutBarBackground : UIView {

	UIVisualEffectView* _blurView;
	UIImageView* _selectionTintView;
	CGRect _highlightRect;

}

@property (assign,nonatomic) CGRect highlightRect;              //@synthesize highlightRect=_highlightRect - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(CGRect)highlightRect;
-(void)setHighlightRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forFrame:(CGRect)arg2 ;
@end

