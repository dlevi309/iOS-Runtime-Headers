/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherSelectionExtraView : UIView {

	double m_pointerOffset;
	unsigned long long _roundedCorners;
	UIKeyboardMenuView* _menu;
	CGRect _keyRect;

}

@property (assign,nonatomic) double pointerOffset; 
@property (assign,nonatomic) CGRect keyRect;                                 //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;              //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;                      //@synthesize menu=_menu - In the implementation block
-(UIKeyboardMenuView *)menu;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)keyRect;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(unsigned long long)roundedCorners;
-(void)setKeyRect:(CGRect)arg1 ;
-(double)pointerOffset;
-(void)setPointerOffset:(double)arg1 ;
@end

