/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDUserCloudShareControllerDelegate, OS_dispatch_queue;
@class NSObject, NSHashTable, NSMutableDictionary, NSMutableArray, HMFTimer, NSString;

@interface HMDUserCloudShareController : NSObject <HMFTimerDelegate, HMFLogging> {

	id<HMDUserCloudShareControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSHashTable* _connectedClients;
	NSMutableDictionary* _containerIdToBundleIdMap;
	NSMutableArray* _pendingRequests;
	double _pendingRequestTimeoutInterval;
	HMFTimer* _pendingRequestTimer;

}

@property (__weak) id<HMDUserCloudShareControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * connectedClients;                            //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerIdToBundleIdMap;              //@synthesize containerIdToBundleIdMap=_containerIdToBundleIdMap - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                          //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) double pendingRequestTimeoutInterval;                      //@synthesize pendingRequestTimeoutInterval=_pendingRequestTimeoutInterval - In the implementation block
@property (nonatomic,retain) HMFTimer * pendingRequestTimer;                              //@synthesize pendingRequestTimer=_pendingRequestTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDUserCloudShareControllerDelegate>)delegate;
-(void)setDelegate:(id<HMDUserCloudShareControllerDelegate>)arg1 ;
-(void)configure;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSMutableArray *)pendingRequests;
-(void)timerDidFire:(id)arg1 ;
-(NSHashTable *)connectedClients;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 pendingRequestTimeoutInterval:(double)arg3 ;
-(void)registerWithXpcClient:(id)arg1 containerIDs:(id)arg2 ;
-(void)handleShareForRemoteClientRequest:(id)arg1 home:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deregisterXpcClient:(id)arg1 ;
-(void)invalidateXpcClient:(id)arg1 ;
-(NSMutableDictionary *)containerIdToBundleIdMap;
-(HMFTimer *)pendingRequestTimer;
-(double)pendingRequestTimeoutInterval;
-(void)setPendingRequestTimer:(HMFTimer *)arg1 ;
-(void)_startTimerIfNeeded;
-(void)_sendShareRequest:(id)arg1 toConnection:(id)arg2 ;
-(void)_removeTimerIfNotNeeded;
-(id)_connectionForContainerID:(id)arg1 ;
-(void)_addRequestToPending:(id)arg1 ;
-(void)_handleShareForRemoteClientRequest:(id)arg1 ;
-(void)_handlePendingRequestTimeouts;
-(void)_resumeRequestsForContainerID:(id)arg1 connection:(id)arg2 ;
-(void)_registerWithXpcClient:(id)arg1 containerIDs:(id)arg2 ;
-(void)setContainerIdToBundleIdMap:(NSMutableDictionary *)arg1 ;
-(void)_deregisterXpcClient:(id)arg1 ;
-(void)_invalidateXpcClient:(id)arg1 ;
@end

