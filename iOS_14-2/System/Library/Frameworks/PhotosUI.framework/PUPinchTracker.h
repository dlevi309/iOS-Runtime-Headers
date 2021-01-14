/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PUValueFilter;

@interface PUPinchTracker : NSObject {

	CGPoint _initialCenter;
	CGSize _initialSize;
	CGAffineTransform _initialTransform;
	CGAffineTransform _initialTransformInverse;
	BOOL _didSetInitialPinchValues;
	CGPoint _initialPinchCenter;
	double _initialPinchDistance;
	double _initialPinchAngle;
	CGPoint _initialPinchOrigin;
	PUValueFilter* _pinchRotationValueFilter;
	BOOL _allowTrackingOutside;
	/*^block*/id _updateHandler;
	double _rotationHysteresisDegrees;

}

@property (nonatomic,copy) id updateHandler;                                //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,nonatomic) BOOL allowTrackingOutside;                     //@synthesize allowTrackingOutside=_allowTrackingOutside - In the implementation block
@property (assign,nonatomic) double rotationHysteresisDegrees;              //@synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees - In the implementation block
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(double)rotationHysteresisDegrees;
-(void)setRotationHysteresisDegrees:(double)arg1 ;
-(id)initWithInitialCenter:(CGPoint)arg1 initialSize:(CGSize)arg2 initialTransform:(CGAffineTransform)arg3 ;
-(void)setPinchLocation1:(CGPoint)arg1 location2:(CGPoint)arg2 ;
-(void)_transformPinchLocation1:(CGPoint)arg1 location2:(CGPoint)arg2 intoCenter:(CGPoint*)arg3 distance:(double*)arg4 angle:(double*)arg5 ;
-(BOOL)allowTrackingOutside;
-(void)setAllowTrackingOutside:(BOOL)arg1 ;
@end

