/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerPinchTransitionSettings : PXSettings {

	BOOL _allowPinchTransitions;
	double _transitionDuration;
	double _backgroundScale;
	double _backgroundParallax;
	double _shadowOpacity;
	double _shadowRadius;
	double _dimmingWhite;
	double _dimmingOpacity;

}

@property (assign,nonatomic) BOOL allowPinchTransitions;              //@synthesize allowPinchTransitions=_allowPinchTransitions - In the implementation block
@property (assign,nonatomic) double transitionDuration;               //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double backgroundScale;                  //@synthesize backgroundScale=_backgroundScale - In the implementation block
@property (assign,nonatomic) double backgroundParallax;               //@synthesize backgroundParallax=_backgroundParallax - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                    //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowRadius;                     //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double dimmingWhite;                     //@synthesize dimmingWhite=_dimmingWhite - In the implementation block
@property (assign,nonatomic) double dimmingOpacity;                   //@synthesize dimmingOpacity=_dimmingOpacity - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setTransitionDuration:(double)arg1 ;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setBackgroundScale:(double)arg1 ;
-(double)shadowRadius;
-(void)setBackgroundParallax:(double)arg1 ;
-(double)transitionDuration;
-(double)shadowOpacity;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)backgroundParallax;
-(double)dimmingWhite;
-(BOOL)allowPinchTransitions;
-(void)setDimmingWhite:(double)arg1 ;
-(double)dimmingOpacity;
-(double)backgroundScale;
-(void)setAllowPinchTransitions:(BOOL)arg1 ;
-(void)setDimmingOpacity:(double)arg1 ;
@end

