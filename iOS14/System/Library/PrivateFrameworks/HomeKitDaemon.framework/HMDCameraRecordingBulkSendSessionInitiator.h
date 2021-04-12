/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamBulkSendListener.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, NSString;

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMFLogging, HMDDataStreamBulkSendListener> {

	BOOL _hasRegisteredBulkSendListener;
	BOOL _canOpenBulkSendSession;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	/*^block*/id _pendingOpenSessionCallback;
	NSString* _pendingOpenSessionReason;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (assign) BOOL hasRegisteredBulkSendListener;                                       //@synthesize hasRegisteredBulkSendListener=_hasRegisteredBulkSendListener - In the implementation block
@property (assign) BOOL canOpenBulkSendSession;                                              //@synthesize canOpenBulkSendSession=_canOpenBulkSendSession - In the implementation block
@property (copy) id pendingOpenSessionCallback;                                              //@synthesize pendingOpenSessionCallback=_pendingOpenSessionCallback - In the implementation block
@property (copy) NSString * pendingOpenSessionReason;                                        //@synthesize pendingOpenSessionReason=_pendingOpenSessionReason - In the implementation block
@property (getter=isSessionOpenInProgress,readonly) BOOL sessionOpenInProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(void)shutDown;
-(void)dealloc;
-(BOOL)isSessionOpenInProgress;
-(void)openNewSessionWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accessoryDidCloseDataStream:(id)arg1 ;
-(id)pendingOpenSessionCallback;
-(void)_callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2 ;
-(void)setPendingOpenSessionCallback:(id)arg1 ;
-(void)callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2 ;
-(void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2 ;
-(void)accessoryDidStartListening:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 ;
-(void)handleAccessoryDoesSupportBulkSendDataStream:(id)arg1 ;
-(void)_registerAsBulkSendListener;
-(BOOL)hasRegisteredBulkSendListener;
-(void)setHasRegisteredBulkSendListener:(BOOL)arg1 ;
-(void)setCanOpenBulkSendSession:(BOOL)arg1 ;
-(NSString *)pendingOpenSessionReason;
-(void)_openBulkSendSessionWithReason:(id)arg1 ;
-(void)setPendingOpenSessionReason:(NSString *)arg1 ;
-(BOOL)canOpenBulkSendSession;
@end

