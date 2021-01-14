/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIHyperExtender, _UIHyperregion;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject;

@interface _UIHyperInteractor : NSObject {

	double* __unconstrainedPoint;
	double* __translation;
	double* __translatedUnconstrainedPoint;
	double* __lastTranslatedUnconstrainedPoint;
	double* __velocity;
	double* __projectedPoint;
	double* __closestPoint;
	BOOL __boundaryCrossedByLastTranslation;
	BOOL __rubberBanding;
	double* __unconstrainedVector;
	double* __extentVector;
	double __extent;
	double* __unconstrainedExtentVector;
	double __unconstrainedExtent;
	double __constrainedFraction;
	double* __constrainedPoint;
	double* __constrainedVelocity;
	SCD_Struct_UI20 _clean;
	NSObject*<_UIHyperExtender> __extender;
	unsigned long long __dimensions;
	NSObject*<_UIHyperregion> __region;
	double __decelerationRate;
	double __rubberBandCoefficient;

}

@property (nonatomic,readonly) const double* _lastTranslatedUnconstrainedPoint;                                                //@synthesize _lastTranslatedUnconstrainedPoint=__lastTranslatedUnconstrainedPoint - In the implementation block
@property (nonatomic,readonly) const double* _unconstrainedVector; 
@property (nonatomic,readonly) const double* _unconstrainedExtentVector; 
@property (nonatomic,readonly) double _constrainedFraction; 
@property (nonatomic,readonly) const double* _extentVector; 
@property (nonatomic,readonly) double _unconstrainedExtent; 
@property (nonatomic,readonly) double _extent; 
@property (nonatomic,readonly) unsigned long long _dimensions;                                                                 //@synthesize _dimensions=__dimensions - In the implementation block
@property (setter=_setRegion:,nonatomic,retain) NSObject*<_UIHyperregion> _region;                                             //@synthesize _region=__region - In the implementation block
@property (setter=_setExtender:,nonatomic,retain) NSObject*<_UIHyperExtender> _extender;                                       //@synthesize _extender=__extender - In the implementation block
@property (assign,setter=_setDecelerationRate:,nonatomic) double _decelerationRate;                                            //@synthesize _decelerationRate=__decelerationRate - In the implementation block
@property (assign,setter=_setRubberBandCoefficient:,nonatomic) double _rubberBandCoefficient;                                  //@synthesize _rubberBandCoefficient=__rubberBandCoefficient - In the implementation block
@property (nonatomic,readonly) const double* _unconstrainedPoint; 
@property (nonatomic,readonly) const double* _translation;                                                                     //@synthesize _translation=__translation - In the implementation block
@property (nonatomic,readonly) const double* _velocity; 
@property (nonatomic,readonly) const double* _translatedUnconstrainedPoint; 
@property (nonatomic,readonly) const double* _projectedPoint; 
@property (nonatomic,readonly) const double* _closestPoint; 
@property (getter=_isBoundaryCrossedByLastTranslation,nonatomic,readonly) BOOL _boundaryCrossedByLastTranslation; 
@property (getter=_isRubberBanding,nonatomic,readonly) BOOL _rubberBanding; 
@property (nonatomic,readonly) const double* _constrainedPoint; 
@property (nonatomic,readonly) const double* _constrainedVelocity; 
-(const double*)_velocity;
-(void)_mutateUnconstrainedPoint:(/*^block*/id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setRubberBandCoefficient:(double)arg1 ;
-(void)_commitTranslation;
-(unsigned long long)_dimensions;
-(void)_copyUnconstrainedPoint:(const double*)arg1 ;
-(const double*)_constrainedVelocity;
-(const double*)_translatedUnconstrainedPoint;
-(const double*)_unconstrainedPoint;
-(void)_mutateVelocity:(/*^block*/id)arg1 ;
-(void)_setRegion:(id)arg1 ;
-(const double*)_unconstrainedExtentVector;
-(const double*)_unconstrainedVector;
-(void)_unconstrainedPoint:(double*)arg1 forConstrainedPoint:(const double*)arg2 ;
-(void)_mutateTranslation:(/*^block*/id)arg1 ;
-(const double*)_closestPoint;
-(const double*)_constrainedPoint;
-(id)description;
-(NSObject*<_UIHyperregion>)_region;
-(const double*)_projectedPoint;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(const double*)_lastTranslatedUnconstrainedPoint;
-(NSObject*<_UIHyperExtender>)_extender;
-(BOOL)_isRubberBanding;
-(double)_rubberBandCoefficient;
-(double)_constrainedFraction;
-(void)_copyVelocity:(const double*)arg1 ;
-(const double*)_translation;
-(double)_decelerationRate;
-(const double*)_extentVector;
-(double)_unconstrainedExtent;
-(BOOL)_isBoundaryCrossedByLastTranslation;
-(double)_extent;
-(void)_copyTranslation:(const double*)arg1 ;
-(void)_setDecelerationRate:(double)arg1 ;
-(void)dealloc;
-(void)_setExtender:(id)arg1 ;
@end

