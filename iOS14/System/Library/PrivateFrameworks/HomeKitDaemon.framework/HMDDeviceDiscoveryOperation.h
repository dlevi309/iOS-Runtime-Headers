/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDIDSSendMessageOperation, NSMutableSet, IDSService, HMDAccount, NSSet, NSString;

@interface HMDDeviceDiscoveryOperation : HMFOperation <IDSServiceDelegate> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	HMDIDSSendMessageOperation* _operation;
	NSMutableSet* _devices;
	IDSService* _service;
	HMDAccount* _account;
	/*^block*/id _discoveryBlock;

}

@property (readonly) IDSService * service;                          //@synthesize service=_service - In the implementation block
@property (readonly) HMDAccount * account;                          //@synthesize account=_account - In the implementation block
@property (copy,readonly) NSSet * devices; 
@property (copy) id discoveryBlock;                                 //@synthesize discoveryBlock=_discoveryBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(double)timeout;
-(void)setQualityOfService:(long long)arg1 ;
-(HMDAccount *)account;
-(NSSet *)devices;
-(void)cancelWithError:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)main;
-(id)initWithAccount:(id)arg1 ;
-(IDSService *)service;
-(id)initWithAccount:(id)arg1 timeout:(double)arg2 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 timeout:(double)arg3 ;
-(id)discoveryBlock;
-(void)setDiscoveryBlock:(id)arg1 ;
@end

