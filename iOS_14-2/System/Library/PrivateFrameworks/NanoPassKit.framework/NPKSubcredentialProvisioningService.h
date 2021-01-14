/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, IDSService, NSString;

@interface NPKSubcredentialProvisioningService : NSObject <IDSServiceDelegate> {

	NSObject*<OS_dispatch_queue> _subcredentialProvisioningQueue;
	NSMutableDictionary* _outstandingRequests;
	IDSService* _subcredentialService;

}

@property (nonatomic,retain) IDSService * subcredentialService;                                          //@synthesize subcredentialService=_subcredentialService - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> subcredentialProvisioningQueue;              //@synthesize subcredentialProvisioningQueue=_subcredentialProvisioningQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingRequests;                                  //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)init;
-(id)_sendOptions;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(NSMutableDictionary *)outstandingRequests;
-(BOOL)isPairedDeviceConnected;
-(NSObject*<OS_dispatch_queue>)subcredentialProvisioningQueue;
-(id)sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3 ;
-(void)trackOutstandingRequestWithMessageIdentifier:(id)arg1 completionHandler:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)registerProtobufActionsForService:(id)arg1 ;
-(void)_setUpSubcredentialProvisioningQueue;
-(void)_setUpSubcredentialProvisioningService;
-(id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3 ;
-(void)_trackOutstandingRequestWithMessageIdentifier:(id)arg1 completionHandler:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(IDSService *)subcredentialService;
-(id)sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 ;
-(void)setSubcredentialService:(IDSService *)arg1 ;
@end

