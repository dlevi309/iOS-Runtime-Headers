/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSettingProactiveReaderDelegate;
@class NSString, NSObject, NSSet, HMDAccessory, HMFMessage;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging> {

	NSString* _logIdentifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDCameraSettingProactiveReaderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSSet* _streamControlMessageHandlers;
	HMDAccessory* _accessory;
	HMFMessage* _pendingMessage;
	NSString* _sessionID;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) id<HMDCameraSettingProactiveReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue;                               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) NSSet * streamControlMessageHandlers;                                     //@synthesize streamControlMessageHandlers=_streamControlMessageHandlers - In the implementation block
@property (readonly) NSString * logIdentifier;                                                 //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (__weak,readonly) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (retain) HMFMessage * pendingMessage;                                                //@synthesize pendingMessage=_pendingMessage - In the implementation block
@property (readonly) NSString * sessionID;                                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)sessionID;
-(void)handleMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDCameraSettingProactiveReaderDelegate>)delegate;
-(HMDAccessory *)accessory;
-(NSString *)logIdentifier;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(HMFMessage *)pendingMessage;
-(void)setPendingMessage:(HMFMessage *)arg1 ;
-(void)_callDidCompleteReadDelegateCallback;
-(NSSet *)streamControlMessageHandlers;
-(void)_handleStreamStatusMultireadResponse:(id)arg1 ;
-(id)_availableStreamControlMessageHandlersForReadResponses:(id)arg1 ;
-(id)_inUseStreamControlMessageHandlersForReadResponses:(id)arg1 ;
-(id)_streamingStatusForResponse:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 message:(id)arg5 streamMessageHandlers:(id)arg6 logID:(id)arg7 ;
-(BOOL)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg1 ;
-(void)readSetting;
@end

