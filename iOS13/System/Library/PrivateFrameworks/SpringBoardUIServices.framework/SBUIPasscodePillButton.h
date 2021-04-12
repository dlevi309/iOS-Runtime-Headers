/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIView, CABackdropLayer, NSString, UIFont;

@interface SBUIPasscodePillButton : UIControl {

	UILabel* _titleLabel;
	UIView* _pillView;
	UIView* _backdropView;
	CABackdropLayer* _backdropLayer;
	double _unhighlightedAlpha;
	double _highlightedAlpha;

}

@property (assign,nonatomic) double unhighlightedAlpha;              //@synthesize unhighlightedAlpha=_unhighlightedAlpha - In the implementation block
@property (assign,nonatomic) double highlightedAlpha;                //@synthesize highlightedAlpha=_highlightedAlpha - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIFont * font; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)unhighlightedAlpha;
-(double)highlightedAlpha;
-(void)setUnhighlightedAlpha:(double)arg1 ;
-(void)setHighlightedAlpha:(double)arg1 ;
@end

