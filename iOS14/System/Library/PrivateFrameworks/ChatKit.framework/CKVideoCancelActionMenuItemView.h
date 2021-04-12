/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKActionMenuItemView.h>

@class UIVisualEffectView, UIImageView, NSString;

@interface CKVideoCancelActionMenuItemView : UIView <CKActionMenuItemView> {

	BOOL _highlighted;
	UIVisualEffectView* _blurView;
	UIImageView* _maskView;
	UIImageView* _xView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;                      //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * maskView;                             //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UIImageView * xView;                                //@synthesize xView=_xView - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(UIImageView *)xView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)maskView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setXView:(UIImageView *)arg1 ;
-(BOOL)isHighlighted;
-(void)setMaskView:(UIImageView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

