/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUInteractiveDismissalController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUPinchedTileTrackerDelegate.h>

@class UIPinchGestureRecognizer, PUChangeDirectionValueFilter, PUPinchedTileTracker, NSString;

@interface PUInteractivePinchDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PUPinchedTileTrackerDelegate> {

	BOOL _handlingPinchGestureRecognizer;
	UIPinchGestureRecognizer* __pinchGestureRecognizer;
	PUChangeDirectionValueFilter* __scaleDirectionValueFilter;
	PUPinchedTileTracker* __pinchedTileTracker;

}

@property (setter=_setPinchGestureRecognizer:,nonatomic,retain) UIPinchGestureRecognizer * _pinchGestureRecognizer;                                                //@synthesize _pinchGestureRecognizer=__pinchGestureRecognizer - In the implementation block
@property (assign,setter=_setHandlingPinchGestureRecognizer:,getter=_isHandlingPinchGestureRecognizer,nonatomic) BOOL handlingPinchGestureRecognizer;              //@synthesize handlingPinchGestureRecognizer=_handlingPinchGestureRecognizer - In the implementation block
@property (setter=_setScaleDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _scaleDirectionValueFilter;                                      //@synthesize _scaleDirectionValueFilter=__scaleDirectionValueFilter - In the implementation block
@property (setter=_setPinchedTileTracker:,nonatomic,retain) PUPinchedTileTracker * _pinchedTileTracker;                                                            //@synthesize _pinchedTileTracker=__pinchedTileTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_isHandlingPinchGestureRecognizer;
-(void)_handlePinchGestureRecognizer:(id)arg1 ;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(void)_setPinchGestureRecognizer:(id)arg1 ;
-(PUPinchedTileTracker *)_pinchedTileTracker;
-(void)_setHandlingPinchGestureRecognizer:(BOOL)arg1 ;
-(void)_setScaleDirectionValueFilter:(id)arg1 ;
-(UIPinchGestureRecognizer *)_pinchGestureRecognizer;
-(PUChangeDirectionValueFilter *)_scaleDirectionValueFilter;
-(id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForInitialLayoutInfo:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_setPinchedTileTracker:(id)arg1 ;
-(void)dealloc;
@end

