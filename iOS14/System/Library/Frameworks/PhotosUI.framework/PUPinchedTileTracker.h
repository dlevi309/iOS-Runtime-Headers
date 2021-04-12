/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUInteractiveTileTracker.h>

@class UIPinchGestureRecognizer, PUChangeDirectionValueFilter, PUPinchTracker, PUTileLayoutInfo, PUVelocityFilter;

@interface PUPinchedTileTracker : PUInteractiveTileTracker {

	SCD_Struct_PU16 _delegateFlags;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	long long _direction;
	PUChangeDirectionValueFilter* __pinchGestureRecognizerScaleDirectionValueFilter;
	PUPinchTracker* __pinchTracker;
	double __pinchProgress;
	PUTileLayoutInfo* __initialLayoutInfo;
	PUTileLayoutInfo* __targetLayoutInfo;
	PUVelocityFilter* __horizontalVelocityFilter;
	PUVelocityFilter* __verticalVelocityFilter;
	PUVelocityFilter* __angularVelocityFilter;

}

@property (setter=_setPinchGestureRecognizerScaleDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _pinchGestureRecognizerScaleDirectionValueFilter;              //@synthesize _pinchGestureRecognizerScaleDirectionValueFilter=__pinchGestureRecognizerScaleDirectionValueFilter - In the implementation block
@property (setter=_setPinchTracker:,nonatomic,retain) PUPinchTracker * _pinchTracker;                                                                                                  //@synthesize _pinchTracker=__pinchTracker - In the implementation block
@property (assign,setter=_setPinchProgress:,nonatomic) double _pinchProgress;                                                                                                          //@synthesize _pinchProgress=__pinchProgress - In the implementation block
@property (setter=_setInitialLayoutInfo:,nonatomic,retain) PUTileLayoutInfo * _initialLayoutInfo;                                                                                      //@synthesize _initialLayoutInfo=__initialLayoutInfo - In the implementation block
@property (setter=_setTargetLayoutInfo:,nonatomic,retain) PUTileLayoutInfo * _targetLayoutInfo;                                                                                        //@synthesize _targetLayoutInfo=__targetLayoutInfo - In the implementation block
@property (setter=_setHorizontalVelocityFilter:,nonatomic,retain) PUVelocityFilter * _horizontalVelocityFilter;                                                                        //@synthesize _horizontalVelocityFilter=__horizontalVelocityFilter - In the implementation block
@property (setter=_setVerticalVelocityFilter:,nonatomic,retain) PUVelocityFilter * _verticalVelocityFilter;                                                                            //@synthesize _verticalVelocityFilter=__verticalVelocityFilter - In the implementation block
@property (setter=_setAngularVelocityFilter:,nonatomic,retain) PUVelocityFilter * _angularVelocityFilter;                                                                              //@synthesize _angularVelocityFilter=__angularVelocityFilter - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                                                                      //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) long long direction;                                                                                                                                    //@synthesize direction=_direction - In the implementation block
-(long long)direction;
-(id)initWithPinchGestureRecognizer:(id)arg1 tilingView:(id)arg2 direction:(long long)arg3 ;
-(id)initWithTilingView:(id)arg1 ;
-(void)updateGestureRecognizerTracking;
-(void)startTileControllerTracking;
-(void)updateTileControllerTracking;
-(void)completeTracking;
-(void)configureTileReattachmentContext:(id)arg1 ;
-(id)tileControllerToTrack;
-(void)setDelegate:(id)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(PUPinchTracker *)_pinchTracker;
-(void)_updateTargetLayoutInfoIfNeeded;
-(PUChangeDirectionValueFilter *)_pinchGestureRecognizerScaleDirectionValueFilter;
-(void)_setPinchGestureRecognizerScaleDirectionValueFilter:(id)arg1 ;
-(void)_setPinchTracker:(id)arg1 ;
-(double)_pinchProgress;
-(void)_setPinchProgress:(double)arg1 ;
-(PUTileLayoutInfo *)_initialLayoutInfo;
-(void)_setInitialLayoutInfo:(id)arg1 ;
-(PUTileLayoutInfo *)_targetLayoutInfo;
-(void)_setTargetLayoutInfo:(id)arg1 ;
-(PUVelocityFilter *)_horizontalVelocityFilter;
-(void)_setHorizontalVelocityFilter:(id)arg1 ;
-(PUVelocityFilter *)_verticalVelocityFilter;
-(void)_setVerticalVelocityFilter:(id)arg1 ;
-(PUVelocityFilter *)_angularVelocityFilter;
-(void)_setAngularVelocityFilter:(id)arg1 ;
@end

