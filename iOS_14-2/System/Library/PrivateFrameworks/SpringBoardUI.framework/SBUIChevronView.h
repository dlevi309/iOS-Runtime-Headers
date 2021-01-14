/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFVibrantView.h>

@class _SBFVibrantSettings, UIView, UIColor, NSString;

@interface SBUIChevronView : UIView <_SBFVibrantView> {

	UIView* _leftGrabberView;
	UIView* _rightGrabberView;
	double _animationDuration;
	long long _state;
	UIColor* _color;
	double _alphaComponent;
	_SBFVibrantSettings* _vibrantSettings;
	UIView* _tintView;
	UIView* _backgroundView;
	BOOL _unified;
	UIView* _alphaContainerView;

}

@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIColor * color;                                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;              //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)animationDuration;
-(BOOL)_setUnified:(BOOL)arg1 ;
-(CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(BOOL)arg3 ;
-(BOOL)_setState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2 ;
-(UIColor *)color;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)_layoutGrabberView:(id)arg1 forState:(long long)arg2 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(void)configureForLightStyle;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setAnimationDuration:(double)arg1 ;
@end

