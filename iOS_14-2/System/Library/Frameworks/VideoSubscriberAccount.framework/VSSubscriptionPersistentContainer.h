/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSOperationQueue, NSPersistentStoreCoordinator, VSOptional, NSString, NSURL;

@interface VSSubscriptionPersistentContainer : NSObject {

	BOOL _didSetupPersistence;
	BOOL _skipMigration;
	NSOperationQueue* _migrationQueue;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	VSOptional* _viewContext;
	NSString* _persistentStoreType;
	NSURL* _persistentStoreURL;
	NSURL* _subscriptionsPropertyListURL;

}

@property (nonatomic,retain) NSOperationQueue * migrationQueue;                                      //@synthesize migrationQueue=_migrationQueue - In the implementation block
@property (assign,nonatomic) BOOL didSetupPersistence;                                               //@synthesize didSetupPersistence=_didSetupPersistence - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) VSOptional * viewContext;                                               //@synthesize viewContext=_viewContext - In the implementation block
@property (assign,nonatomic) BOOL skipMigration;                                                     //@synthesize skipMigration=_skipMigration - In the implementation block
@property (nonatomic,copy) NSString * persistentStoreType;                                           //@synthesize persistentStoreType=_persistentStoreType - In the implementation block
@property (nonatomic,copy) NSURL * persistentStoreURL;                                               //@synthesize persistentStoreURL=_persistentStoreURL - In the implementation block
@property (nonatomic,copy) NSURL * subscriptionsPropertyListURL;                                     //@synthesize subscriptionsPropertyListURL=_subscriptionsPropertyListURL - In the implementation block
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)init;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSOperationQueue *)migrationQueue;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setViewContext:(VSOptional *)arg1 ;
-(void)setMigrationQueue:(NSOperationQueue *)arg1 ;
-(NSURL *)persistentStoreURL;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(VSOptional *)viewContext;
-(BOOL)didSetupPersistence;
-(NSURL *)subscriptionsPropertyListURL;
-(NSString *)persistentStoreType;
-(BOOL)skipMigration;
-(void)setDidSetupPersistence:(BOOL)arg1 ;
-(BOOL)_setupPersistenceIfNeeded:(id*)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 andWait:(BOOL)arg2 ;
-(void)_removePersistentStore;
-(void)setSkipMigration:(BOOL)arg1 ;
-(void)setPersistentStoreType:(NSString *)arg1 ;
-(void)setPersistentStoreURL:(NSURL *)arg1 ;
-(void)setSubscriptionsPropertyListURL:(NSURL *)arg1 ;
@end

