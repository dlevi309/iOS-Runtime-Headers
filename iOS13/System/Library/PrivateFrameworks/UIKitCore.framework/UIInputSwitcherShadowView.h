/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

@interface UIInputSwitcherShadowView : UIView {

	int m_mode;
	double m_pointerOffset;
	NSArray* m_gradientColors;
	UIKeyboardMenuView* _menu;
	_UIBackdropView* _blurView;
	CGRect _keyRect;

}

@property (assign,nonatomic) int mode; 
@property (assign,nonatomic) UIKeyboardMenuView * menu;               //@synthesize menu=_menu - In the implementation block
@property (nonatomic,retain) _UIBackdropView * blurView;              //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic) CGRect keyRect;                          //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) double pointerOffset; 
@property (nonatomic,retain) NSArray * gradientColors; 
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIKeyboardMenuView *)menu;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(void)setBlurView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)blurView;
-(CGRect)keyRect;
-(NSArray *)gradientColors;
-(double)pointerOffset;
-(void)setPointerOffset:(double)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
@end

