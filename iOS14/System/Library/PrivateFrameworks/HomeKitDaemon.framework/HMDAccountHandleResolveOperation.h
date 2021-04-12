/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)logCategory;
+(double)timeout;
-(id)initWithHandle:(id)arg1 ;
-(HMDAccountHandle *)handle;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)initWithTimeout:(double)arg1 ;
-(void)main;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(HMDIDSMessageContext *)messageContext;
-(void)setMessageContext:(HMDIDSMessageContext *)arg1 ;
-(IDSService *)service;
-(NSMutableArray *)resolveBlocks;
-(void)addResolveBlock:(/*^block*/id)arg1 ;
@end

