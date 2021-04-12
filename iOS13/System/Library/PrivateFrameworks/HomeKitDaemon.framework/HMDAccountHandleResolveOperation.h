/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class HMDAccountHandle, IDSService, HMDIDSMessageContext, NSMutableArray, NSString;

@interface HMDAccountHandleResolveOperation : HMFOperation <HMFLogging, IDSServiceDelegate> {

	HMDAccountHandle* _handle;
	IDSService* _service;
	HMDIDSMessageContext* _messageContext;
	NSMutableArray* _resolveBlocks;

}

@property (readonly) IDSService * service;                                       //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) HMDIDSMessageContext * messageContext;              //@synthesize messageContext=_messageContext - In the implementation block
@property (readonly) NSMutableArray * resolveBlocks;                             //@synthesize resolveBlocks=_resolveBlocks - In the implementation block
@property (copy,readonly) HMDAccountHandle * handle;                             //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)timeout;
+(id)logCategory;
-(id)init;
-(HMDAccountHandle *)handle;
-(void)main;
-(IDSService *)service;
-(id)initWithHandle:(id)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(NSMutableArray *)resolveBlocks;
-(HMDIDSMessageContext *)messageContext;
-(void)setMessageContext:(HMDIDSMessageContext *)arg1 ;
-(void)addResolveBlock:(/*^block*/id)arg1 ;
@end

