/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)pressed;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)highlighted;
-(id)_newMotionEffectsGroupForHighlightedAction;
-(CATransform3D)_enlargedTransformForSize:(CGSize)arg1 pressed:(BOOL)arg2 ;
-(void)setHighlightTransformTargetView:(UIView *)arg1 ;
-(id)initWithHighlightTransformTargetView:(id)arg1 ;
-(void)_applyHighlightTransform;
-(UIView *)highlightTransformTargetView;
-(void)_removeMotionEffects;
-(void)_insertMotionEffects;
-(void)setHighlighted:(BOOL)arg1 ;
@end

