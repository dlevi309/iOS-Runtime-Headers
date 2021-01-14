/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXInitialHysteresisNumberFilter, PXChangeDirectionNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject {

	BOOL _didHandleInitialPinch;
	PXInitialHysteresisNumberFilter* _initialDirectionFilter;
	PXChangeDirectionNumberFilter* _scaleDirectionFilter;
	double _lastDirection;
	BOOL _isTrackingPinch;

}

@property (nonatomic,readonly) BOOL isTrackingPinch;              //@synthesize isTrackingPinch=_isTrackingPinch - In the implementation block
-(id)init;
-(void)filterPinchGestureWithScale:(double)arg1 initialPinchHandler:(/*^block*/id)arg2 subsequentDirectionChangeHandler:(/*^block*/id)arg3 ;
-(void)reset;
-(BOOL)isTrackingPinch;
@end

