/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDXPCListenerDelegate.h>

@protocol HDTaskServer, HDTaskServerEndpointDelegate, HDTaskServerDelegate;
@class NSUUID, HKTaskConfiguration, HKHealthStoreConfiguration, HDProfile, HDXPCListener, NSXPCListenerEndpoint, NSString;

@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate> {

	Class _taskServerClass;
	NSUUID* _taskUUID;
	HKTaskConfiguration* _taskConfiguration;
	HKHealthStoreConfiguration* _healthStoreConfiguration;
	HDProfile* _profile;
	id<HDTaskServer> _taskServer;
	id<HDTaskServerEndpointDelegate> _delegate;
	id<HDTaskServerDelegate> _taskServerDelegate;
	HDXPCListener* _listener;

}

@property (nonatomic,retain) HDXPCListener * listener;                                                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) Class taskServerClass;                                                   //@synthesize taskServerClass=_taskServerClass - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * taskUUID;                                                  //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy,readonly) HKTaskConfiguration * taskConfiguration;                            //@synthesize taskConfiguration=_taskConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HKHealthStoreConfiguration * healthStoreConfiguration;              //@synthesize healthStoreConfiguration=_healthStoreConfiguration - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (nonatomic,__weak,readonly) HDProfile * profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) id<HDTaskServer> taskServer;                                      //@synthesize taskServer=_taskServer - In the implementation block
@property (assign,nonatomic,__weak) id<HDTaskServerEndpointDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HDTaskServerDelegate> taskServerDelegate;                        //@synthesize taskServerDelegate=_taskServerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)taskUUID;
-(id<HDTaskServerEndpointDelegate>)delegate;
-(id<HDTaskServer>)taskServer;
-(void)setDelegate:(id<HDTaskServerEndpointDelegate>)arg1 ;
-(void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3 ;
-(HDXPCListener *)listener;
-(void)setTaskServerDelegate:(id<HDTaskServerDelegate>)arg1 ;
-(HDProfile *)profile;
-(void)setListener:(HDXPCListener *)arg1 ;
-(HKHealthStoreConfiguration *)healthStoreConfiguration;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)invalidate;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(HKTaskConfiguration *)taskConfiguration;
-(id)initWithTaskServerClass:(Class)arg1 taskConfiguration:(id)arg2 healthStoreConfiguration:(id)arg3 taskUUID:(id)arg4 profile:(id)arg5 connectionQueue:(id)arg6 ;
-(void)resume;
-(void)connectionInvalidatedForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3 ;
-(Class)taskServerClass;
-(void)dealloc;
-(id<HDTaskServerDelegate>)taskServerDelegate;
@end

