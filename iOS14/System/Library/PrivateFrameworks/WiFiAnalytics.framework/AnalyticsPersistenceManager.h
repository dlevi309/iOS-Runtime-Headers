/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class NSPersistentStoreCoordinator, NSManagedObjectModel, NSManagedObjectContext, NSXPCStoreServer;

@interface AnalyticsPersistenceManager : NSObject {

	NSPersistentStoreCoordinator* _persistenceCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _persistenceContext;
	NSXPCStoreServer* _xpcStoreServer;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                          //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * persistenceContext;                        //@synthesize persistenceContext=_persistenceContext - In the implementation block
@property (nonatomic,retain) NSXPCStoreServer * xpcStoreServer;                                  //@synthesize xpcStoreServer=_xpcStoreServer - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
+(BOOL)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2 ;
-(NSXPCStoreServer *)xpcStoreServer;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setPersistenceContext:(NSManagedObjectContext *)arg1 ;
-(void)setPersistenceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setXpcStoreServer:(NSXPCStoreServer *)arg1 ;
-(NSManagedObjectContext *)persistenceContext;
-(id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(NSPersistentStoreCoordinator *)persistenceCoordinator;
@end

