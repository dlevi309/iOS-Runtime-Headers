/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIPinchGestureRecognizer.h>

@class PUValueFilter;

@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer {

	CGPoint _initialTouchLocations[2];
	CGPoint _latestTouchLocations[2];
	BOOL _initialTouchLocationsSet;
	BOOL __touchesNeedUpdate;
	double _rotationHysteresisDegrees;
	PUValueFilter* __rotationFilter;
	CGRect _initialPinchRect;

}

@property (assign,setter=_setTouchesNeedUpdate:,nonatomic) BOOL _touchesNeedUpdate;                   //@synthesize _touchesNeedUpdate=__touchesNeedUpdate - In the implementation block
@property (setter=_setRotationFilter:,nonatomic,retain) PUValueFilter * _rotationFilter;              //@synthesize _rotationFilter=__rotationFilter - In the implementation block
@property (assign,nonatomic) double rotationHysteresisDegrees;                                        //@synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees - In the implementation block
@property (assign,nonatomic) CGRect initialPinchRect;                                                 //@synthesize initialPinchRect=_initialPinchRect - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(PUValueFilter *)_rotationFilter;
-(void)_setTouchesNeedUpdate:(BOOL)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)adjustedRotationVelocityInView:(id)arg1 ;
-(double)rotationHysteresisDegrees;
-(void)_updateIfNeeded;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)adjustedInitialCenterInView:(id)arg1 ;
-(CGRect)initialPinchRect;
-(void)setRotationHysteresisDegrees:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)adjustedScaleInView:(id)arg1 ;
-(CGPoint)adjustedTranslationInView:(id)arg1 ;
-(CGPoint)adjustedTranslationVelocityInView:(id)arg1 ;
-(void)reset;
-(double)adjustedScaleVelocityInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_setRotationFilter:(id)arg1 ;
-(BOOL)_touchesNeedUpdate;
-(double)adjustedRotationInView:(id)arg1 ;
-(void)setInitialPinchRect:(CGRect)arg1 ;
@end

