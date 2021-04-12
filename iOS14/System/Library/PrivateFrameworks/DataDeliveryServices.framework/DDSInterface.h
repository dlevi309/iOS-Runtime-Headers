/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSManaging.h>
#import <libobjc.A.dylib/DDSManagingDelegate.h>

@protocol DDSManagingDelegate, DDSManaging, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate> {

	id<DDSManagingDelegate> _delegate;
	id<DDSManaging> _serverOverride;
	NSXPCConnection* _remoteServer;
	DDSInterface* _sharedInstance;
	id<DDSManagingDelegate> _mDelegate;
	NSObject*<OS_dispatch_queue> _connectionUsageQueue;

}

@property (nonatomic,retain) id<DDSManaging> serverOverride;                                   //@synthesize serverOverride=_serverOverride - In the implementation block
@property (nonatomic,retain) NSXPCConnection * remoteServer;                                   //@synthesize remoteServer=_remoteServer - In the implementation block
@property (nonatomic,readonly) DDSInterface * sharedInstance;                                  //@synthesize sharedInstance=_sharedInstance - In the implementation block
@property (nonatomic,retain) id<DDSManagingDelegate> mDelegate;                                //@synthesize mDelegate=_mDelegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionUsageQueue;              //@synthesize connectionUsageQueue=_connectionUsageQueue - In the implementation block
@property (nonatomic,retain) id<DDSManagingDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
+(unsigned long long)xpcConnectionOptionsForServer;
-(DDSInterface *)sharedInstance;
-(id)init;
-(id<DDSManagingDelegate>)delegate;
-(id)syncServiceObjectProxy;
-(id<DDSManaging>)serverOverride;
-(void)setDelegate:(id<DDSManagingDelegate>)arg1 ;
-(void)triggerUpdate;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(NSXPCConnection *)remoteServer;
-(void)setServerOverride:(id<DDSManaging>)arg1 ;
-(id)server;
-(id<DDSManagingDelegate>)mDelegate;
-(void)triggerDump;
-(void)setRemoteServer:(NSXPCConnection *)arg1 ;
-(id)syncServer;
-(void)setMDelegate:(id<DDSManagingDelegate>)arg1 ;
-(void)removeAssertionWithID:(id)arg1 ;
-(id)serviceObjectProxy;
-(void)createConnectionIfNecessary;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)connectionUsageQueue;
-(void)teardownXPCConnection;
-(void)dealloc;
@end

