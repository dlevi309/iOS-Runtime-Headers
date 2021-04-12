/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamBulkSendListener.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, NSString;

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMFLogging, HMDDataStreamBulkSendListener> {

	BOOL _hasRegisteredBulkSendListener;
	BOOL _canSendBulkSendSessionOpenRequest;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	/*^block*/id _pendingStartSessionCallback;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (assign) BOOL hasRegisteredBulkSendListener;                                       //@synthesize hasRegisteredBulkSendListener=_hasRegisteredBulkSendListener - In the implementation block
@property (assign) BOOL canSendBulkSendSessionOpenRequest;                                   //@synthesize canSendBulkSendSessionOpenRequest=_canSendBulkSendSessionOpenRequest - In the implementation block
@property (copy) id pendingStartSessionCallback;                                             //@synthesize pendingStartSessionCallback=_pendingStartSessionCallback - In the implementation block
@property (getter=isSessionOpenInProgress,readonly) BOOL sessionOpenInProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)shutDown;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(BOOL)isSessionOpenInProgress;
-(void)openNewSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)accessoryDidCloseDataStream:(id)arg1 ;
-(void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2 ;
-(void)accessoryDidStartListening:(id)arg1 ;
-(void)handleAccessoryDoesSupportBulkSendDataStream:(id)arg1 ;
-(void)_registerAsBulkSendListener;
-(BOOL)hasRegisteredBulkSendListener;
-(void)setHasRegisteredBulkSendListener:(BOOL)arg1 ;
-(void)setCanSendBulkSendSessionOpenRequest:(BOOL)arg1 ;
-(id)pendingStartSessionCallback;
-(void)_startBulkSendSession;
-(void)_callPendingStartSessionCallbackWithSession:(id)arg1 error:(id)arg2 ;
-(void)setPendingStartSessionCallback:(id)arg1 ;
-(BOOL)canSendBulkSendSessionOpenRequest;
-(void)callPendingStartSessionCallback:(id)arg1 error:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 ;
@end

