/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MPAVRoutingControllerSelection, NSMutableSet, MSVTimer, NSMapTable, MPAVRoutingController, NSSet, MPAVRoute;

@interface MPAVRoutingControllerSelectionQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _selectionsEnqueued;
	MPAVRoutingControllerSelection* _selectionInProgress;
	NSMutableSet* _pendingRoutes;
	MSVTimer* _selectionInProgressTimer;
	NSMapTable* _pendingSelectionTimers;
	BOOL _hasPendingPickedRoutes;
	MPAVRoutingController* _routingController;

}

@property (nonatomic,__weak,readonly) MPAVRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingPickedRoutes;                                   //@synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes - In the implementation block
@property (nonatomic,readonly) NSSet * pendingPickedRoutes; 
@property (nonatomic,readonly) MPAVRoute * pendingPickedRoute; 
-(void)_dequeue;
-(MPAVRoutingController *)routingController;
-(BOOL)hasPendingPickedRoutes;
-(MPAVRoute *)pendingPickedRoute;
-(NSSet *)pendingPickedRoutes;
-(BOOL)routeIsPendingPick:(id)arg1 ;
-(void)removePendingRoute:(id)arg1 ;
-(void)addPendingRoute:(id)arg1 ;
-(void)cancelInProgressSelectionForRoute:(id)arg1 ;
-(void)pickedRouteDidChange;
-(void)enqueueSelectionOperation:(long long)arg1 forRoute:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasPendingRoutes;
-(id)initWithRoutingController:(id)arg1 ;
-(void)removeAllPendingRoutes;
-(void)removePendingRoute:(id)arg1 withError:(BOOL)arg2 ;
-(void)_enqueue:(id)arg1 ;
-(void)_dequeueSelectionWhenPossible;
-(void)_processSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

