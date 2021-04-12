/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIVisualEffectView;

@interface NotesBarBackgroundView : UIView {

	BOOL _hasBlur;
	UIColor* _color;
	UIVisualEffectView* _blurView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL hasBlur;                               //@synthesize hasBlur=_hasBlur - In the implementation block
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)color;
-(void)commonInit;
-(void)setColor:(UIColor *)arg1 ;
-(void)_setOverrideUserInterfaceStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasBlur;
-(void)updateColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHasBlur:(BOOL)arg1 ;
@end

