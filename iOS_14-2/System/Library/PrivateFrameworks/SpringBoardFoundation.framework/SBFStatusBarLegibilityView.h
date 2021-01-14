/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, UIView, UIImageView, NSString;

@interface SBFStatusBarLegibilityView : UIView <SBUILegibility> {

	BOOL _forceLegibilityGradientHidden;
	_UILegibilitySettings* _legibilitySettings;
	UIView* _statusBarGradientView;
	UIImageView* _leftCornerView;
	UIImageView* _rightCornerView;

}

@property (nonatomic,retain) UIView * statusBarGradientView;                          //@synthesize statusBarGradientView=_statusBarGradientView - In the implementation block
@property (nonatomic,retain) UIImageView * leftCornerView;                            //@synthesize leftCornerView=_leftCornerView - In the implementation block
@property (nonatomic,retain) UIImageView * rightCornerView;                           //@synthesize rightCornerView=_rightCornerView - In the implementation block
@property (assign,nonatomic) BOOL forceLegibilityGradientHidden;                      //@synthesize forceLegibilityGradientHidden=_forceLegibilityGradientHidden - In the implementation block
@property (assign,nonatomic) double strength; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statusBarGradientView;
+(id)gradientViewWithOpacities:(const double*)arg1 locations:(id)arg2 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)setRightCornerView:(UIImageView *)arg1 ;
-(UIView *)statusBarGradientView;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setLeftCornerView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)_configureAsPhone;
-(_UILegibilitySettings *)legibilitySettings;
-(UIImageView *)leftCornerView;
-(UIImageView *)rightCornerView;
-(void)setForceLegibilityGradientHidden:(BOOL)arg1 ;
-(BOOL)forceLegibilityGradientHidden;
-(void)setStatusBarGradientView:(UIView *)arg1 ;
-(void)_configureWithLegibilitySettings:(id)arg1 forceLegibilityGradientHidden:(BOOL)arg2 ;
-(void)_configureAsPad;
@end

