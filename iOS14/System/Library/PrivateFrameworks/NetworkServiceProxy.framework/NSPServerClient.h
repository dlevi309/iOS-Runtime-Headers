/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSPServerCommands.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString;

@interface NSPServerClient : NSObject <NSPServerCommands> {

	os_unfair_lock_s lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)getConnection;
-(void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4 ;
-(void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAppRuleForLabel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchCurrentConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshWaldoNowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reportUsage:(id)arg1 fromClient:(id)arg2 ;
-(void)setTestLatencyMap:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

