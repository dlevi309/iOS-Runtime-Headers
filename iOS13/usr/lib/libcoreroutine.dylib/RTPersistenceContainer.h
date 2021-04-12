/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSArray, NSString, NSObject, NSPersistentStoreCoordinator;

@interface RTPersistenceContainer : NSObject {

	NSArray* _configurations;
	BOOL _serveContexts;
	BOOL _setupFailed;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _contextRequestsQueue;
	NSPersistentStoreCoordinator* _coordinator;

}

@property (retain) NSObject*<OS_dispatch_queue> contextRequestsQueue;              //@synthesize contextRequestsQueue=_contextRequestsQueue - In the implementation block
@property (assign) BOOL serveContexts;                                             //@synthesize serveContexts=_serveContexts - In the implementation block
@property (assign) BOOL setupFailed;                                               //@synthesize setupFailed=_setupFailed - In the implementation block
@property (retain) NSPersistentStoreCoordinator * coordinator;                     //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (readonly) BOOL storesNeedSetup; 
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)coordinator;
-(id)persistenceContext;
-(id)_persistenceContext;
-(id)persistenceContextWithOptions:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 model:(id)arg2 configurations:(id)arg3 ;
-(BOOL)_validateConfigurations:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)contextRequestsQueue;
-(void)setContextRequestsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServeContexts:(BOOL)arg1 ;
-(BOOL)storesNeedSetup;
-(void)setSetupFailed:(BOOL)arg1 ;
-(BOOL)setupFailed;
-(BOOL)serveContexts;
-(void)suspendPersistenceStores;
-(void)resumePersistenceStores;
-(id)tearDownPersistenceStack;
-(void)setupPersistenceStores;
-(BOOL)updateContainerConfigurations:(id)arg1 ;
-(void)persistenceContextWithHandler:(/*^block*/id)arg1 ;
-(id)waitForPersistenceContext;
@end

