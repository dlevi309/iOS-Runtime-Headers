/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, MRAVRoutingDiscoverySession, NSArray, NSSet, NSString, NSMutableArray, MRAVEndpoint;

@interface MRAVReconnaissanceSession : NSObject {

	double _timeoutTimerTimeout;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _localMatchingDevicesFound;
	BOOL _useWeakMatching;
	BOOL _returnPartialResults;
	BOOL _waitForCompleteClusters;
	BOOL _searchInProgress;
	BOOL _shouldWaitForUnanimousEndpoints;
	MRAVRoutingDiscoverySession* _discoverySession;
	NSArray* _matchingLogicalDeviceIDs;
	NSSet* _matchingOutputDeviceUIDsSet;
	NSString* _matchingOutputDeviceGroupID;
	id _discoverySessionCallbackToken;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _callbackSyncQueue;
	NSMutableDictionary* _matchingDevicesFound;
	NSMutableArray* _matchingEndpointsFound;
	MRAVEndpoint* _unanimousEndpoint;
	NSArray* _availableOutputDevices;
	NSArray* _availableEndpoints;
	unsigned long long _updatesReceived;
	NSArray* _lastProcessedOutputDevices;
	NSArray* _lastProcessedEndpoints;
	unsigned long long _expectedLogicalDevices;

}

@property (nonatomic,readonly) NSArray * matchingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSString * matchingOutputDeviceGroupID; 
@property (nonatomic,readonly) unsigned endpointFeatures; 
@property (nonatomic,readonly) MRAVRoutingDiscoverySession * discoverySession; 
@property (assign,nonatomic) BOOL useWeakMatching;                                          //@synthesize useWeakMatching=_useWeakMatching - In the implementation block
@property (assign,nonatomic) BOOL returnPartialResults;                                     //@synthesize returnPartialResults=_returnPartialResults - In the implementation block
@property (assign,nonatomic) BOOL waitForCompleteClusters;                                  //@synthesize waitForCompleteClusters=_waitForCompleteClusters - In the implementation block
@property (nonatomic,copy) NSArray * matchingLogicalDeviceIDs;                              //@synthesize matchingLogicalDeviceIDs=_matchingLogicalDeviceIDs - In the implementation block
-(void)cancelSearch;
-(void)setMatchingLogicalDeviceIDs:(NSArray *)arg1 ;
-(MRAVRoutingDiscoverySession *)discoverySession;
-(id)initWithOutputDeviceUIDs:(id)arg1 outputDeviceGroupID:(id)arg2 features:(unsigned)arg3 ;
-(void)beginSearchWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)useWeakMatching;
-(void)beginSearchWithTimeout:(double)arg1 mapCompletion:(/*^block*/id)arg2 ;
-(BOOL)waitForCompleteClusters;
-(NSArray *)matchingOutputDeviceUIDs;
-(NSString *)matchingOutputDeviceGroupID;
-(void)setUseWeakMatching:(BOOL)arg1 ;
-(BOOL)returnPartialResults;
-(void)setWaitForCompleteClusters:(BOOL)arg1 ;
-(NSArray *)matchingLogicalDeviceIDs;
-(void)beginSearchWithTimeout:(double)arg1 endpointsCompletion:(/*^block*/id)arg2 ;
-(unsigned)endpointFeatures;
-(void)setReturnPartialResults:(BOOL)arg1 ;
-(void)dealloc;
@end

