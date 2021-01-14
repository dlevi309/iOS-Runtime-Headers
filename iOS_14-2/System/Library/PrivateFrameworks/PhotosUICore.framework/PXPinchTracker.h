/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutablePinchTracker.h>

@class PXNumberFilter, PXChangeDirectionNumberFilter, NSString;

@interface PXPinchTracker : PXObservable <PXMutablePinchTracker> {

	SCD_Struct_PX59 _needsUpdateFlags;
	BOOL _didSetInitialValues;
	CGPoint _initialCenter;
	CGSize _initialSize;
	CGAffineTransform _initialTransform;
	CGAffineTransform _initialTransformInverse;
	CGPoint _initialPinchCenter;
	double _initialPinchDistance;
	double _initialPinchAngle;
	CGPoint _initialPinchOrigin;
	PXNumberFilter* _pinchRotationFilter;
	PXNumberFilter* _horizontalVelocityFilter;
	PXNumberFilter* _verticalVelocityFilter;
	PXNumberFilter* _scaleVelocityFilter;
	PXNumberFilter* _rotationalVelocityFilter;
	PXChangeDirectionNumberFilter* _scaleDirectionFilter;
	BOOL _shouldResize;
	double _time;
	double _scale;
	long long _scaleDirection;
	double _rotationHysteris;
	double _scaleHysteresis;
	CGPoint _pinchLocation1;
	CGPoint _pinchLocation2;
	CGPoint _center;
	CGSize _size;
	PXDisplayVelocity _velocity;
	CGAffineTransform _transform;

}

@property (assign,setter=_setCenter:,nonatomic) CGPoint center;                                //@synthesize center=_center - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,setter=_setTransform:,nonatomic) CGAffineTransform transform;                //@synthesize transform=_transform - In the implementation block
@property (assign,setter=_setVelocity:,nonatomic) PXDisplayVelocity velocity;                  //@synthesize velocity=_velocity - In the implementation block
@property (assign,setter=_setScale:,nonatomic) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (assign,setter=_setScaleDirection:,nonatomic) long long scaleDirection;              //@synthesize scaleDirection=_scaleDirection - In the implementation block
@property (nonatomic,readonly) double rotationHysteris;                                        //@synthesize rotationHysteris=_rotationHysteris - In the implementation block
@property (nonatomic,readonly) double scaleHysteresis;                                         //@synthesize scaleHysteresis=_scaleHysteresis - In the implementation block
@property (nonatomic,readonly) BOOL shouldResize;                                              //@synthesize shouldResize=_shouldResize - In the implementation block
@property (assign,nonatomic) CGPoint pinchLocation1;                                           //@synthesize pinchLocation1=_pinchLocation1 - In the implementation block
@property (assign,nonatomic) CGPoint pinchLocation2;                                           //@synthesize pinchLocation2=_pinchLocation2 - In the implementation block
@property (assign,nonatomic) double time;                                                      //@synthesize time=_time - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setSize:(CGSize)arg1 ;
-(double)time;
-(void)_setTransform:(CGAffineTransform)arg1 ;
-(void)setTime:(double)arg1 ;
-(CGPoint)center;
-(PXDisplayVelocity)velocity;
-(id)init;
-(CGSize)size;
-(void)didPerformChanges;
-(double)scale;
-(void)_updateIfNeeded;
-(CGAffineTransform)transform;
-(void)_setScale:(double)arg1 ;
-(CGPoint)pinchLocation1;
-(CGPoint)pinchLocation2;
-(void)_setScaleDirection:(long long)arg1 ;
-(void)_invalidateInitialValues;
-(double)scaleHysteresis;
-(void)_updateInitialValuesIfNeeded;
-(void)_invalidateGeometry;
-(void)_updateGeometryIfNeeded;
-(double)rotationHysteris;
-(BOOL)shouldResize;
-(BOOL)_needsUpdate;
-(void)_setCenter:(CGPoint)arg1 ;
-(id)mutableChangeObject;
-(long long)scaleDirection;
-(void)setPinchLocation2:(CGPoint)arg1 ;
-(void)setPinchLocation1:(CGPoint)arg1 ;
-(id)initWithCenter:(CGPoint)arg1 size:(CGSize)arg2 transform:(CGAffineTransform)arg3 ;
-(void)_setVelocity:(PXDisplayVelocity)arg1 ;
-(void)_setNeedsUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_transformPinchLocation1:(CGPoint)arg1 location2:(CGPoint)arg2 intoCenter:(CGPoint*)arg3 distance:(double*)arg4 angle:(double*)arg5 ;
@end

