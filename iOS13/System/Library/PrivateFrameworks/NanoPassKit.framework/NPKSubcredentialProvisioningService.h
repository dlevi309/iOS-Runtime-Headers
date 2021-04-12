/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, IDSService, NSString;

@interface NPKSubcredentialProvisioningService : NSObject <IDSServiceDelegate> {

	NSObject*<OS_dispatch_queue> _subcredentialProvisioningQueue;
	IDSService* _subcredentialService;

}

@property (nonatomic,retain) IDSService * subcredentialService;                                          //@synthesize subcredentialService=_subcredentialService - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> subcredentialProvisioningQueue;              //@synthesize subcredentialProvisioningQueue=_subcredentialProvisioningQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)_sendOptions;
-(NSObject*<OS_dispatch_queue>)subcredentialProvisioningQueue;
-(id)sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3 ;
-(void)_setUpSubcredentialProvisioningQueue;
-(void)_setUpSubcredentialProvisioningService;
-(id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3 ;
-(IDSService *)subcredentialService;
-(void)registerProtobufActionsForService:(id)arg1 ;
-(id)sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 ;
-(void)setSubcredentialService:(IDSService *)arg1 ;
@end

