/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setMaskView:(UIImageView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)maskView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setXView:(UIImageView *)arg1 ;
-(UIImageView *)xView;
@end

