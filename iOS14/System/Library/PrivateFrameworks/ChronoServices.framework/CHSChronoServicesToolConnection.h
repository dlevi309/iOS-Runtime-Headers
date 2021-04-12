/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <libobjc.A.dylib/CHSChronoToolServiceClient.h>
#import <libobjc.A.dylib/CHSChronoToolServiceServer.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, BSServiceConnection, NSObject, NSString;

@interface CHSChronoServicesToolConnection : NSObject <CHSChronoToolServiceClient, CHSChronoToolServiceServer> {

	NSMutableSet* _clients;
	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,retain) NSMutableSet * clients;                                 //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addClient:(id)arg1 ;
-(NSMutableSet *)clients;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(id)init;
-(oneway void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)disableWakeBudgetWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)widgetsWithTimelines:(/*^block*/id)arg1 ;
-(oneway void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)resetCaches:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)resetWakeBudgetWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)listStateCaptureIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)fetchStateWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)fetchStateForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)timelineForWidgetKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeClient:(id)arg1 ;
-(void)setCallOutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_remoteTarget;
-(BSServiceConnection *)connection;
-(void)_queue_addClient:(id)arg1 ;
-(void)_invalidateConnection;
-(void)_queue_removeClient:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_createConnection;
@end

