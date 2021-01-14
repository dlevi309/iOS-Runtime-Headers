/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, TBPersistenceRemoteStoreServer;

@interface TBPersistenceManager : NSObject {

	NSManagedObjectContext* _persistenceContext;
	NSPersistentStoreCoordinator* _persistenceCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	TBPersistenceRemoteStoreServer* _remoteStoreServer;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                          //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * persistenceContext;                        //@synthesize persistenceContext=_persistenceContext - In the implementation block
@property (nonatomic,retain) TBPersistenceRemoteStoreServer * remoteStoreServer;                 //@synthesize remoteStoreServer=_remoteStoreServer - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
+(BOOL)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setPersistenceContext:(NSManagedObjectContext *)arg1 ;
-(void)setPersistenceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)persistenceContext;
-(id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(NSPersistentStoreCoordinator *)persistenceCoordinator;
-(void)addPersistentStorage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(TBPersistenceRemoteStoreServer *)remoteStoreServer;
-(void)setRemoteStoreServer:(TBPersistenceRemoteStoreServer *)arg1 ;
@end

