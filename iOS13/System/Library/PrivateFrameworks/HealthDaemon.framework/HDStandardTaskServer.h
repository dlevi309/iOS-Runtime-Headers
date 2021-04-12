/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDTaskServer.h>
#import <libobjc.A.dylib/HKUnitTestingTaskServerInterface.h>

@protocol HDTaskServerDelegate;
@class NSUUID, HDProfile, HDHealthStoreClient, NSString;

@interface HDStandardTaskServer : NSObject <HDTaskServer, HKUnitTestingTaskServerInterface> {

	NSUUID* _taskUUID;
	HDProfile* _profile;
	HDHealthStoreClient* _client;
	id<HDTaskServerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSUUID * taskUUID;                                //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                            //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                          //@synthesize client=_client - In the implementation block
@property (nonatomic,__weak,readonly) id<HDTaskServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id<HDTaskServerDelegate>)delegate;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(HDHealthStoreClient *)client;
-(id)exportedInterface;
-(HDProfile *)profile;
-(NSUUID *)taskUUID;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)remote_unitTesting_createTaskServerNoOpWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
@end

