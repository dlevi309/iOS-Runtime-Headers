/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIMotionEffectGroup, UIView;

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {

	UIMotionEffectGroup* _installedHighlightedActionMotionEffectsGroup;
	BOOL _highlighted;
	BOOL _pressed;
	UIView* _highlightTransformTargetView;

}

@property (assign,nonatomic,__weak) UIView * highlightTransformTargetView;              //@synthesize highlightTransformTargetView=_highlightTransformTargetView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL pressed;                                              //@synthesize pressed=_pressed - In the implementation block
-(id)initWithHighlightTransformTargetView:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)_applyHighlightTransform;
-(CATransform3D)_enlargedTransformForSize:(CGSize)arg1 pressed:(BOOL)arg2 ;
-(void)_removeMotionEffects;
-(void)_insertMotionEffects;
-(id)_newMotionEffectsGroupForHighlightedAction;
-(UIView *)highlightTransformTargetView;
-(void)setHighlightTransformTargetView:(UIView *)arg1 ;
-(BOOL)highlighted;
-(BOOL)pressed;
@end

