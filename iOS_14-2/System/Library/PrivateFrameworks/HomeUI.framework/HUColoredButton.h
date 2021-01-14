/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface HUColoredButton : UIButton {

	BOOL _backgroundColorFollowsTintColor;
	double _highlightedAlpha;
	double _highlightedTextAlpha;

}

@property (assign,nonatomic) double highlightedAlpha;                           //@synthesize highlightedAlpha=_highlightedAlpha - In the implementation block
@property (assign,nonatomic) double highlightedTextAlpha;                       //@synthesize highlightedTextAlpha=_highlightedTextAlpha - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL backgroundColorFollowsTintColor;              //@synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)highlightedAlpha;
-(void)setHighlightedAlpha:(double)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3 ;
-(void)setHighlightedTextAlpha:(double)arg1 ;
-(double)highlightedTextAlpha;
-(BOOL)backgroundColorFollowsTintColor;
-(void)setBackgroundColorFollowsTintColor:(BOOL)arg1 ;
@end

