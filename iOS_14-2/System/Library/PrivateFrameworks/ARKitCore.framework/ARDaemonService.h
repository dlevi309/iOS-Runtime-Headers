/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARServiceType.h>
#import <ARKitCore/ARDaemonServiceBaseProtocol.h>

@protocol OS_os_transaction, ARDaemonServiceDataSource, ARDaemonServiceDelegate;
@class NSString, NSXPCConnection, NSObject;

@interface ARDaemonService : NSObject <ARServiceType, ARDaemonServiceBaseProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _active;
	int _clientProcessIdentifier;
	NSString* _clientBundleIdentifier;
	NSString* _clientProcessName;
	id<ARDaemonServiceDataSource> _dataSource;
	id<ARDaemonServiceDelegate> _delegate;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                  //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleIdentifier;                          //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,readonly) int clientProcessIdentifier;                                //@synthesize clientProcessIdentifier=_clientProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * clientProcessName;                               //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (assign,nonatomic,__weak) id<ARDaemonServiceDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<ARDaemonServiceDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(BOOL)isUnique;
+(id)serviceName;
-(NSString *)clientBundleIdentifier;
-(void)suspend;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(id<ARDaemonServiceDelegate>)delegate;
-(NSString *)clientProcessName;
-(BOOL)isActive;
-(id<ARDaemonServiceDataSource>)dataSource;
-(int)clientProcessIdentifier;
-(void)setDelegate:(id<ARDaemonServiceDelegate>)arg1 ;
-(void)setDataSource:(id<ARDaemonServiceDataSource>)arg1 ;
-(void)invalidate;
-(void)invalidationHandler;
-(void)resume;
-(void)interruptionHandler;
-(id)initWithConnection:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 ;
-(void)startService:(/*^block*/id)arg1 ;
-(void)clearAlgorithmObservers;
@end

