/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUInteractiveTileTrackerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class PUTilingView, PUTileHider, PUTileController;

@interface PUInteractiveTileTracker : NSObject {

	SCD_Struct_PU16 _delegateFlags;
	BOOL _shouldEnd;
	BOOL _shouldFinish;
	PUTilingView* _tilingView;
	id<PUInteractiveTileTrackerDelegate> _delegate;
	double _progress;
	long long __state;
	PUTileHider* __tileHider;
	PUTileController* _trackedTileController;
	PUDisplayVelocity _currentVelocity;

}

@property (assign,setter=_setState:,nonatomic) long long _state;                                //@synthesize _state=__state - In the implementation block
@property (setter=_setTileHider:,nonatomic,retain) PUTileHider * _tileHider;                    //@synthesize _tileHider=__tileHider - In the implementation block
@property (assign,nonatomic) double progress;                                                   //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL shouldEnd;                                                    //@synthesize shouldEnd=_shouldEnd - In the implementation block
@property (assign,nonatomic) BOOL shouldFinish;                                                 //@synthesize shouldFinish=_shouldFinish - In the implementation block
@property (assign,nonatomic) PUDisplayVelocity currentVelocity;                                 //@synthesize currentVelocity=_currentVelocity - In the implementation block
@property (nonatomic,readonly) PUTileController * trackedTileController;                        //@synthesize trackedTileController=_trackedTileController - In the implementation block
@property (nonatomic,readonly) PUTilingView * tilingView;                                       //@synthesize tilingView=_tilingView - In the implementation block
@property (assign,nonatomic,__weak) id<PUInteractiveTileTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(BOOL)shouldEnd;
-(double)progress;
-(id)init;
-(id<PUInteractiveTileTrackerDelegate>)delegate;
-(BOOL)shouldFinish;
-(id)initWithTilingView:(id)arg1 ;
-(void)updateGestureRecognizerTracking;
-(void)startTileControllerTracking;
-(void)updateTileControllerTracking;
-(void)stopTileControllerTracking;
-(void)completeTracking;
-(void)configureTileReattachmentContext:(id)arg1 ;
-(id)tileControllerToTrack;
-(void)setShouldEnd:(BOOL)arg1 ;
-(void)_updateTrackedTileController;
-(void)_setTrackedTileController:(id)arg1 ;
-(void)setShouldFinish:(BOOL)arg1 ;
-(void)setCurrentVelocity:(PUDisplayVelocity)arg1 ;
-(PUTileHider *)_tileHider;
-(void)_setTileHider:(id)arg1 ;
-(PUTileController *)trackedTileController;
-(PUTilingView *)tilingView;
-(void)setDelegate:(id<PUInteractiveTileTrackerDelegate>)arg1 ;
-(void)update;
-(PUDisplayVelocity)currentVelocity;
-(void)setProgress:(double)arg1 ;
@end

