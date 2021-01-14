/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class PGBackdropView, UIView, UIImageView;

@interface PGStashView : UIView {

	PGBackdropView* _backdropView;
	UIView* _lightTintView;
	UIView* _darkTintView;
	UIImageView* _leftChevron;
	UIImageView* _rightChevron;
	BOOL _chevronsHidden;
	BOOL _isChevronShownLeft;
	double _blurProgress;
	double _stashedTabWidth;

}

@property (assign,nonatomic) double blurProgress;                 //@synthesize blurProgress=_blurProgress - In the implementation block
@property (assign,nonatomic) double stashedTabWidth;              //@synthesize stashedTabWidth=_stashedTabWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)blurProgress;
-(void)layoutSubviews;
-(void)setBlurProgress:(double)arg1 ;
-(void)setStashedTabWidth:(double)arg1 ;
-(void)setChevronHidden:(BOOL)arg1 left:(BOOL)arg2 ;
-(void)resetChevronState;
-(void)layoutStashChevrons;
-(double)stashedTabWidth;
@end

