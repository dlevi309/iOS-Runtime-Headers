/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(double)unhighlightedAlpha;
-(double)highlightedAlpha;
-(void)setUnhighlightedAlpha:(double)arg1 ;
-(void)setHighlightedAlpha:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)title;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
@end

