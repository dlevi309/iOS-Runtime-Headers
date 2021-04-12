/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, MRAVRoutingDiscoverySession, NSArray, NSSet, NSString, NSMutableArray, MRAVEndpoint;

@interface MRAVReconnaissanceSession : NSObject {

	double _timeoutTimerTimeout;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _localMatchingDevicesFound;
	BOOL _useWeakMatching;
	BOOL _returnPartialResults;
	BOOL _searchInProgress;
	BOOL _shouldWaitForUnanimousEndpoints;
	unsigned _endpointFeatures;
	MRAVRoutingDiscoverySession* _discoverySession;
	NSArray* _matchingLogicalDeviceIDs;
	NSSet* _matchingOutputDeviceUIDsSet;
	NSString* _matchingOutputDeviceGroupID;
	id _discoverySessionCallbackToken;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _callbackSyncQueue;
	NSMutableSet* _matchingDevicesFound;
	NSMutableArray* _matchingEndpointsFound;
	MRAVEndpoint* _unanimousEndpoint;
	NSArray* _availableOutputDevices;
	NSArray* _availableEndpoints;
	unsigned long long _updatesReceived;
	NSArray* _lastProcessedOutputDevices;
	NSArray* _lastProcessedEndpoints;

}

@property (nonatomic,retain) NSSet * matchingOutputDeviceUIDsSet;                         //@synthesize matchingOutputDeviceUIDsSet=_matchingOutputDeviceUIDsSet - In the implementation block
@property (nonatomic,retain) NSString * matchingOutputDeviceGroupID;                      //@synthesize matchingOutputDeviceGroupID=_matchingOutputDeviceGroupID - In the implementation block
@property (nonatomic,retain) MRAVRoutingDiscoverySession * discoverySession;              //@synthesize discoverySession=_discoverySession - In the implementation block
@property (nonatomic,retain) id discoverySessionCallbackToken;                            //@synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken - In the implementation block
@property (nonatomic,copy) id callback;                                                   //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;                  //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackSyncQueue;              //@synthesize callbackSyncQueue=_callbackSyncQueue - In the implementation block
@property (assign,nonatomic) BOOL searchInProgress;                                       //@synthesize searchInProgress=_searchInProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldWaitForUnanimousEndpoints;                        //@synthesize shouldWaitForUnanimousEndpoints=_shouldWaitForUnanimousEndpoints - In the implementation block
@property (nonatomic,retain) NSMutableSet * matchingDevicesFound;                         //@synthesize matchingDevicesFound=_matchingDevicesFound - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchingEndpointsFound;                     //@synthesize matchingEndpointsFound=_matchingEndpointsFound - In the implementation block
@property (nonatomic,retain) MRAVEndpoint * unanimousEndpoint;                            //@synthesize unanimousEndpoint=_unanimousEndpoint - In the implementation block
@property (nonatomic,retain) NSArray * availableOutputDevices;                            //@synthesize availableOutputDevices=_availableOutputDevices - In the implementation block
@property (nonatomic,retain) NSArray * availableEndpoints;                                //@synthesize availableEndpoints=_availableEndpoints - In the implementation block
@property (assign,nonatomic) unsigned long long updatesReceived;                          //@synthesize updatesReceived=_updatesReceived - In the implementation block
@property (nonatomic,retain) NSArray * lastProcessedOutputDevices;                        //@synthesize lastProcessedOutputDevices=_lastProcessedOutputDevices - In the implementation block
@property (nonatomic,retain) NSArray * lastProcessedEndpoints;                            //@synthesize lastProcessedEndpoints=_lastProcessedEndpoints - In the implementation block
@property (nonatomic,readonly) NSArray * matchingOutputDeviceUIDs; 
@property (nonatomic,readonly) unsigned endpointFeatures;                                 //@synthesize endpointFeatures=_endpointFeatures - In the implementation block
@property (assign,nonatomic) BOOL useWeakMatching;                                        //@synthesize useWeakMatching=_useWeakMatching - In the implementation block
@property (assign,nonatomic) BOOL returnPartialResults;                                   //@synthesize returnPartialResults=_returnPartialResults - In the implementation block
@property (nonatomic,copy) NSArray * matchingLogicalDeviceIDs;                            //@synthesize matchingLogicalDeviceIDs=_matchingLogicalDeviceIDs - In the implementation block
-(void)dealloc;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(NSArray *)availableOutputDevices;
-(void)cancelSearch;
-(void)setSearchInProgress:(BOOL)arg1 ;
-(BOOL)searchInProgress;
-(id)initWithOutputDeviceUIDs:(id)arg1 outputDeviceGroupID:(id)arg2 features:(unsigned)arg3 ;
-(void)beginSearchWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMatchingLogicalDeviceIDs:(NSArray *)arg1 ;
-(unsigned)endpointFeatures;
-(NSArray *)availableEndpoints;
-(MRAVRoutingDiscoverySession *)discoverySession;
-(void)setReturnPartialResults:(BOOL)arg1 ;
-(void)_onQueue_timeoutTimerFired;
-(void)_discoverySessionEndpointsChangedCallback:(id)arg1 ;
-(void)_discoverySessionOutputDevicesChangedCallback:(id)arg1 ;
-(void)_onQueue_cancelSearch;
-(void)beginSearchWithTimeout:(double)arg1 endpointsCompletion:(/*^block*/id)arg2 ;
-(void)setUnanimousEndpoint:(MRAVEndpoint *)arg1 ;
-(void)_processSearchLoop;
-(void)_onQueue_updateCachedOutputDevices:(id)arg1 endpoints:(id)arg2 ;
-(MRAVEndpoint *)unanimousEndpoint;
-(BOOL)shouldWaitForUnanimousEndpoints;
-(void)_onQueue_concludeSearch;
-(void)_onQueue_endSearch;
-(NSArray *)matchingOutputDeviceUIDs;
-(NSString *)matchingOutputDeviceGroupID;
-(void)setDiscoverySession:(MRAVRoutingDiscoverySession *)arg1 ;
-(BOOL)useWeakMatching;
-(void)setUseWeakMatching:(BOOL)arg1 ;
-(BOOL)returnPartialResults;
-(NSArray *)matchingLogicalDeviceIDs;
-(NSSet *)matchingOutputDeviceUIDsSet;
-(void)setMatchingOutputDeviceUIDsSet:(NSSet *)arg1 ;
-(void)setMatchingOutputDeviceGroupID:(NSString *)arg1 ;
-(id)discoverySessionCallbackToken;
-(void)setDiscoverySessionCallbackToken:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackSyncQueue;
-(void)setCallbackSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setShouldWaitForUnanimousEndpoints:(BOOL)arg1 ;
-(NSMutableSet *)matchingDevicesFound;
-(void)setMatchingDevicesFound:(NSMutableSet *)arg1 ;
-(NSMutableArray *)matchingEndpointsFound;
-(void)setMatchingEndpointsFound:(NSMutableArray *)arg1 ;
-(void)setAvailableOutputDevices:(NSArray *)arg1 ;
-(void)setAvailableEndpoints:(NSArray *)arg1 ;
-(unsigned long long)updatesReceived;
-(void)setUpdatesReceived:(unsigned long long)arg1 ;
-(NSArray *)lastProcessedOutputDevices;
-(void)setLastProcessedOutputDevices:(NSArray *)arg1 ;
-(NSArray *)lastProcessedEndpoints;
-(void)setLastProcessedEndpoints:(NSArray *)arg1 ;
@end

