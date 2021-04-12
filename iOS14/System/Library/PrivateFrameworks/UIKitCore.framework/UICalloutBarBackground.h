/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)highlightRect;
-(void)setHighlightRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forFrame:(CGRect)arg2 ;
-(void)layoutSubviews;
@end

