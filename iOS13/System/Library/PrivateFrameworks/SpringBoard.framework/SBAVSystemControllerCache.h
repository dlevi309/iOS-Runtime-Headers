/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	int _queue_recordingPID;
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
@property (nonatomic,readonly) int recordingPID; 
@property (nonatomic,copy,readonly) NSString * activeAudioRoute; 
@property (nonatomic,copy,readonly) NSDictionary * activeAudioRouteInfo; 
@property (nonatomic,copy,readonly) NSArray * pickableRoutes; 
@property (nonatomic,copy,readonly) NSArray * activeOutputDevices; 
@property (getter=isAirplayDisplayActive,nonatomic,readonly) BOOL airplayDisplayActive; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)_queue_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(int)recordingPID;
-(BOOL)isVolumeLimitEnforced;
-(float)volumeLimit;
-(BOOL)isFullyMuted;
-(NSArray *)activeOutputDevices;
-(NSString *)activeAudioRoute;
-(NSDictionary *)activeAudioRouteInfo;
-(BOOL)isAirplayDisplayActive;
-(void)_queue_updateFullyMutedFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_updateVolumeLimitFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_updateVolumeLimitEnforcedFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_updateRecordingPIDFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_updateActiveOutputDevicesFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_updateActiveAudioRouteFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_updatePickableRoutesFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_updateAirplayDisplayActiveFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(/*^block*/id)arg3 cancelBackgroundQueriesBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_serverDied:(id)arg1 ;
-(void)_receiveUpdatedValueFromNotification:(id)arg1 ;
-(void)_queue_rebuildCache;
-(id)initWithCallOutQueue:(id)arg1 notificationCenter:(id)arg2 dataProviderInitializer:(/*^block*/id)arg3 ;
-(id)_queryActiveOutputDevicesFromContext:(id)arg1 ;
-(id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)arg1 ;
-(void)_queue_signalBackgroundQueryCancellationForNotification:(id)arg1 ;
-(NSArray *)pickableRoutes;
-(void)fetchPickableRoutesWithCompletion:(/*^block*/id)arg1 ;
@end

