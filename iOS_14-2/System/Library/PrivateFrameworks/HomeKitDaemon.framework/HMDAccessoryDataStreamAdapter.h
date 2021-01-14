/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamBulkSendListener.h>

@protocol HMDAccessoryDataStreamAdapterDelegate, OS_dispatch_queue, HMDDataStreamBulkSendSession;
@class HMDHAPAccessory, NSObject, NSString;

@interface HMDAccessoryDataStreamAdapter : HMFObject <HMFLogging, HMDDataStreamBulkSendListener> {

	BOOL _transportReady;
	BOOL _didBulkSendFail;
	BOOL _didBulkSendComplete;
	id<HMDAccessoryDataStreamAdapterDelegate> _delegate;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _fileType;
	NSString* _reason;
	id<HMDDataStreamBulkSendSession> _currentBulkSendSession;
	/*^block*/id _pendingOpenSessionCallback;

}

@property (getter=isSessionOpenInProgress,readonly) BOOL sessionOpenInProgress; 
@property (getter=isBulkSendActive,readonly) BOOL bulkSendActive; 
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;                  //@synthesize currentBulkSendSession=_currentBulkSendSession - In the implementation block
@property (copy) id pendingOpenSessionCallback;                                              //@synthesize pendingOpenSessionCallback=_pendingOpenSessionCallback - In the implementation block
@property (assign) BOOL transportReady;                                                      //@synthesize transportReady=_transportReady - In the implementation block
@property (assign) BOOL didBulkSendFail;                                                     //@synthesize didBulkSendFail=_didBulkSendFail - In the implementation block
@property (assign) BOOL didBulkSendComplete;                                                 //@synthesize didBulkSendComplete=_didBulkSendComplete - In the implementation block
@property (__weak) id<HMDAccessoryDataStreamAdapterDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSString * fileType;                                               //@synthesize fileType=_fileType - In the implementation block
@property (readonly) NSString * reason;                                                      //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDAccessoryDataStreamAdapterDelegate>)delegate;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(void)setDelegate:(id<HMDAccessoryDataStreamAdapterDelegate>)arg1 ;
-(void)shutDown;
-(id)attributeDescriptions;
-(NSString *)reason;
-(void)readData;
-(void)dealloc;
-(NSString *)fileType;
-(void)_openSession;
-(id<HMDDataStreamBulkSendSession>)currentBulkSendSession;
-(BOOL)isSessionOpenInProgress;
-(void)setCurrentBulkSendSession:(id<HMDDataStreamBulkSendSession>)arg1 ;
-(void)accessoryDidCloseDataStream:(id)arg1 ;
-(BOOL)transportReady;
-(BOOL)didBulkSendFail;
-(BOOL)didBulkSendComplete;
-(id)pendingOpenSessionCallback;
-(void)_callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2 ;
-(void)setTransportReady:(BOOL)arg1 ;
-(void)_setUpTransport;
-(void)setPendingOpenSessionCallback:(id)arg1 ;
-(void)_bulkSendDidFail;
-(BOOL)_handleFrame:(id)arg1 ;
-(void)_bulkSendDidComplete;
-(void)callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)isBulkSendActive;
-(void)setDidBulkSendFail:(BOOL)arg1 ;
-(void)setDidBulkSendComplete:(BOOL)arg1 ;
-(void)_handleAccessoryDidClose;
-(void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2 ;
-(void)accessoryDidStartListening:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 fileType:(id)arg3 reason:(id)arg4 ;
-(void)setUpWithCallback:(/*^block*/id)arg1 ;
@end

