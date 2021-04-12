/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSObject*<OS_dispatch_queue> _queue;
	DDSInterface* _sharedInstance;
	id<DDSManagingDelegate> _mDelegate;

}

@property (nonatomic,retain) id<DDSManaging> serverOverride;                    //@synthesize serverOverride=_serverOverride - In the implementation block
@property (nonatomic,retain) NSXPCConnection * remoteServer;                    //@synthesize remoteServer=_remoteServer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) DDSInterface * sharedInstance;                   //@synthesize sharedInstance=_sharedInstance - In the implementation block
@property (nonatomic,retain) id<DDSManagingDelegate> mDelegate;                 //@synthesize mDelegate=_mDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDSManagingDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(id)interface;
+(unsigned long long)xpcConnectionOptionsForServer;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(DDSInterface *)sharedInstance;
-(id<DDSManagingDelegate>)delegate;
-(void)setDelegate:(id<DDSManagingDelegate>)arg1 ;
-(id)server;
-(NSXPCConnection *)remoteServer;
-(void)setRemoteServer:(NSXPCConnection *)arg1 ;
-(void)createConnectionIfNecessary;
-(id<DDSManagingDelegate>)mDelegate;
-(void)didUpdateAssetsWithType:(id)arg1 ;
-(id)syncServer;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(void)removeAssertionWithID:(id)arg1 ;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_assertionClientDispatchQueue;
-(void)teardownXPCConnection;
-(id<DDSManaging>)serverOverride;
-(id)serviceObjectProxy;
-(id)syncServiceObjectProxy;
-(void)setServerOverride:(id<DDSManaging>)arg1 ;
-(void)setMDelegate:(id<DDSManagingDelegate>)arg1 ;
@end

