/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class _UIBackdropView;

@interface TPButton : UIButton {

	int _color;
	_UIBackdropView* _backdropView;
	BOOL _blursBackground;
	BOOL _roundsCorners;
	BOOL _usesOverlayBlendingForContents;

}

@property (assign,nonatomic) BOOL blursBackground;                             //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) BOOL roundsCorners;                               //@synthesize roundsCorners=_roundsCorners - In the implementation block
@property (assign,nonatomic) BOOL usesOverlayBlendingForContents;              //@synthesize usesOverlayBlendingForContents=_usesOverlayBlendingForContents - In the implementation block
+(double)defaultHeight;
+(double)defaultHeightForColor:(int)arg1 ;
+(id)defaultStandardFont;
+(double)defaultWidthForSideButton;
+(double)defaultWidthForCenterButton;
+(double)maxWidthForCenterButton;
-(void)setButtonColor:(int)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)blursBackground;
-(int)buttonColor;
-(BOOL)roundsCorners;
-(void)setBlursBackground:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setRoundsCorners:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(CGRect)arg4 ;
-(void)setUsesOverlayBlendingForContents:(BOOL)arg1 ;
-(void)_animationWillBegin;
-(void)_animationDidEnd;
-(void)setPlusSeparatedTitle:(id)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2 ;
-(void)setTitleImagePadding:(double)arg1 ;
-(void)setIconVerticalOffset:(double)arg1 ;
-(void)setTitleVerticalOffset:(double)arg1 ;
-(void)setDisabledButtonColor:(int)arg1 ;
-(BOOL)usesOverlayBlendingForContents;
@end

