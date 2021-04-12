/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDXPCListenerDelegate.h>

@protocol HDTaskServerDelegate, HDTaskServer;
@class NSUUID, HKTaskConfiguration, HKHealthStoreConfiguration, HDProfile, HDXPCListener, NSXPCListenerEndpoint, NSString;

@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate> {

	Class _taskServerClass;
	NSUUID* _taskUUID;
	HKTaskConfiguration* _taskConfiguration;
	HKHealthStoreConfiguration* _healthStoreConfiguration;
	HDProfile* _profile;
	id<HDTaskServerDelegate> _delegate;
	id<HDTaskServer> _taskServer;
	HDXPCListener* _listener;

}

@property (nonatomic,retain) HDXPCListener * listener;                                                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) Class taskServerClass;                                                   //@synthesize taskServerClass=_taskServerClass - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * taskUUID;                                                  //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy,readonly) HKTaskConfiguration * taskConfiguration;                            //@synthesize taskConfiguration=_taskConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HKHealthStoreConfiguration * healthStoreConfiguration;              //@synthesize healthStoreConfiguration=_healthStoreConfiguration - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) id<HDTaskServerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<HDTaskServer> taskServer;                                      //@synthesize taskServer=_taskServer - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<HDTaskServerDelegate>)delegate;
-(HDXPCListener *)listener;
-(void)setListener:(HDXPCListener *)arg1 ;
-(HDProfile *)profile;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(NSUUID *)taskUUID;
-(HKTaskConfiguration *)taskConfiguration;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3 ;
-(id<HDTaskServer>)taskServer;
-(id)initWithTaskServerClass:(Class)arg1 taskConfiguration:(id)arg2 healthStoreConfiguration:(id)arg3 taskUUID:(id)arg4 profile:(id)arg5 connectionQueue:(id)arg6 delegate:(id)arg7 ;
-(Class)taskServerClass;
-(HKHealthStoreConfiguration *)healthStoreConfiguration;
@end

