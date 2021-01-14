/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUInteractiveTileTracker.h>

@class UIPanGestureRecognizer, PUTileController, PHSwipeDownTracker, PUTileLayoutInfo;

@interface PUSwipedDownTileTracker : PUInteractiveTileTracker {

	UIPanGestureRecognizer* _panGestureRecognizer;
	PUTileController* _designatedTileController;
	PHSwipeDownTracker* __swipeDownTracker;
	PUTileLayoutInfo* __trackedTileLayoutInfo;

}

@property (setter=_setSwipeDownTracker:,nonatomic,retain) PHSwipeDownTracker * _swipeDownTracker;                      //@synthesize _swipeDownTracker=__swipeDownTracker - In the implementation block
@property (setter=_setTrackedTileLayoutInfo:,nonatomic,retain) PUTileLayoutInfo * _trackedTileLayoutInfo;              //@synthesize _trackedTileLayoutInfo=__trackedTileLayoutInfo - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                          //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) PUTileController * designatedTileController;                                              //@synthesize designatedTileController=_designatedTileController - In the implementation block
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(PUTileController *)designatedTileController;
-(id)initWithTilingView:(id)arg1 ;
-(void)setDesignatedTileController:(PUTileController *)arg1 ;
-(id)initWithPanGestureRecognizer:(id)arg1 tilingView:(id)arg2 ;
-(void)updateGestureRecognizerTracking;
-(void)startTileControllerTracking;
-(void)updateTileControllerTracking;
-(void)completeTracking;
-(id)tileControllerToTrack;
-(void)_setSwipeDownTracker:(id)arg1 ;
-(PUTileLayoutInfo *)_trackedTileLayoutInfo;
-(void)_setTrackedTileLayoutInfo:(id)arg1 ;
-(PHSwipeDownTracker *)_swipeDownTracker;
@end

