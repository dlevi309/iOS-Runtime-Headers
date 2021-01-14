/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue, SBAVSystemControllerDataProviding;
@class NSObject, NSNotificationCenter, NSHashTable, AVOutputContext, NSMutableDictionary, BSAtomicSignal, NSString, NSDictionary, NSArray;

@interface SBAVSystemControllerCache : NSObject {

	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSNotificationCenter* _notificationCenter;
	/*^block*/id _dataProviderInitializer;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _queue_observers;
	AVOutputContext* _queue_outputContext;
	id<SBAVSystemControllerDataProviding> _queue_dataProvider;
	NSMutableDictionary* _notificationToHandlerMap;
	NSMutableDictionary* _notificationToBackgroundQueryCancellationSignalMap;
	BOOL _queue_initialized;
	BSAtomicSignal* _queue_serverDeathSignal;
	BOOL _queue_fullyMuted;
	float _queue_volumeLimit;
	BOOL _queue_volumeLimitEnforced;
	NSString* _queue_activeAudioRoute;
	NSDictionary* _queue_activeAudioRouteInfo;
	NSArray* _queue_pickableRoutes;
	NSArray* _queue_activeOutputDevices;
	BOOL _outputContextSupportsMultipleOutputDevices;
	BOOL _queue_airplayDisplayActive;
	NSObject*<OS_dispatch_queue> _backgroundQueryQueue;

}

@property (getter=isFullyMuted,nonatomic,readonly) BOOL fullyMuted; 
@property (nonatomic,readonly) float volumeLimit; 
@property (getter=isVolumeLimitEnforced,nonatomic,readonly) BOOL volumeLimitEnforced; 
@property (nonatomic,copy,readonly) NSString * activeAudioRoute; 
@property (nonatomic,copy,readonly) NSDictionary * activeAudioRouteInfo; 
@property (nonatomic,copy,readonly) NSArray * pickableRoutes; 
@property (nonatomic,copy,readonly) NSArray * activeOutputDevices; 
@property (getter=isAirplayDisplayActive,nonatomic,readonly) BOOL airplayDisplayActive; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)_queue_updateAirplayDisplayActiveFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(NSString *)activeAudioRoute;
-(BOOL)isAirplayDisplayActive;
-(void)_queue_updateFullyMutedFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isFullyMuted;
-(void)_queue_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_serverDied:(id)arg1 ;
-(NSArray *)pickableRoutes;
-(id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)arg1 ;
-(void)_queue_updateActiveOutputDevicesFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(NSDictionary *)activeAudioRouteInfo;
-(void)_receiveUpdatedValueFromNotification:(id)arg1 ;
-(void)_queue_updateActiveAudioRouteFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_signalBackgroundQueryCancellationForNotification:(id)arg1 ;
-(void)_queue_rebuildCache;
-(float)volumeLimit;
-(id)initWithCallOutQueue:(id)arg1 notificationCenter:(id)arg2 dataProviderInitializer:(/*^block*/id)arg3 ;
-(void)_queue_updateVolumeLimitFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(NSArray *)activeOutputDevices;
-(BOOL)isVolumeLimitEnforced;
-(id)_queryActiveOutputDevicesFromContext:(id)arg1 ;
-(void)_queue_updatePickableRoutesFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchPickableRoutesWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_updateVolumeLimitEnforcedFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
@end

