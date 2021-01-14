/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPAVRoutingController *)routingController;
-(MPAVRoute *)pendingPickedRoute;
-(BOOL)hasPendingRoutes;
-(NSSet *)pendingPickedRoutes;
-(void)cancelInProgressSelectionForRoute:(id)arg1 ;
-(void)addPendingRoutes:(id)arg1 ;
-(void)pickedRouteDidChange;
-(void)removePendingRoutes:(id)arg1 withError:(BOOL)arg2 ;
-(BOOL)routeIsPendingPick:(id)arg1 ;
-(void)_enqueue:(id)arg1 ;
-(id)initWithRoutingController:(id)arg1 ;
-(void)_dequeueSelectionWhenPossible;
-(void)_processSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enqueueSelectionOperation:(long long)arg1 forRoutes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasPendingPickedRoutes;
-(void)_dequeue;
-(void)removeAllPendingRoutes;
-(void)removePendingRoutes:(id)arg1 ;
@end

