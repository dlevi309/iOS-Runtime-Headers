/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIKeyboardMenuView *)menu;
-(int)mode;
-(void)setBlurView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)blurView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)keyRect;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
-(double)pointerOffset;
-(NSArray *)gradientColors;
-(void)setPointerOffset:(double)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
@end

