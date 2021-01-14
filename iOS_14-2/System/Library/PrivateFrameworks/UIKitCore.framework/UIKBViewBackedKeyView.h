/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIKBBackdropView *)backdropView;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)renderFlagsForTraits:(id)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(UIView*<UIKBKeyViewContentView>)arg1 ;
-(void)setDrawFrame:(CGRect)arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)setRenderConfig:(id)arg1 ;
-(UIView*<UIKBKeyViewContentView>)contentView;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

