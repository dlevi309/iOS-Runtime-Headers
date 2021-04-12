/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@protocol UIKBKeyViewContentView;
@class UIView, UIKBBackdropView;

@interface UIKBViewBackedKeyView : UIKBKeyView {

	UIView*<UIKBKeyViewContentView> _contentView;
	UIKBBackdropView* _backdropView;

}

@property (nonatomic,retain) UIKBBackdropView * backdropView;                          //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView*<UIKBKeyViewContentView> contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIView*<UIKBKeyViewContentView>)contentView;
-(void)setContentView:(UIView*<UIKBKeyViewContentView>)arg1 ;
-(void)layoutSubviews;
-(UIKBBackdropView *)backdropView;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)setDrawFrame:(CGRect)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)renderFlagsForTraits:(id)arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

