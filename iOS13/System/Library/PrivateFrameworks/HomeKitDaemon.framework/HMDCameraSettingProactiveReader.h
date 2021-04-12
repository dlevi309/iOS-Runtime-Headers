/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSettingProactiveReaderDelegate;
@class NSObject, NSSet, NSString, HMDAccessory, HMFMessage;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDCameraSettingProactiveReaderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSSet* _streamControlMessageHandlers;
	NSString* _logID;
	HMDAccessory* _accessory;
	HMFMessage* _pendingMessage;
	NSString* _sessionID;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) id<HMDCameraSettingProactiveReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue;                               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) NSSet * streamControlMessageHandlers;                                     //@synthesize streamControlMessageHandlers=_streamControlMessageHandlers - In the implementation block
@property (readonly) NSString * logID;                                                         //@synthesize logID=_logID - In the implementation block
@property (__weak,readonly) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (retain) HMFMessage * pendingMessage;                                                //@synthesize pendingMessage=_pendingMessage - In the implementation block
@property (readonly) NSString * sessionID;                                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraSettingProactiveReaderDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSString *)sessionID;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(void)handleMessage:(id)arg1 ;
-(NSString *)logID;
-(HMFMessage *)pendingMessage;
-(void)setPendingMessage:(HMFMessage *)arg1 ;
-(void)_callDidCompleteReadDelegateCallback;
-(NSSet *)streamControlMessageHandlers;
-(void)_handleStreamStatusMultireadResponse:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 message:(id)arg5 streamMessageHandlers:(id)arg6 logID:(id)arg7 ;
-(BOOL)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg1 ;
-(void)readSetting;
@end

