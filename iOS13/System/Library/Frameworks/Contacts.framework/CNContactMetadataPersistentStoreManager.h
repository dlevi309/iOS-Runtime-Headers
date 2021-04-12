/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSURL, NSPersistentContainer;

@interface CNContactMetadataPersistentStoreManager : NSObject {

	NSURL* _storeLocation;
	NSPersistentContainer* _container;

}

@property (nonatomic,readonly) NSURL * storeLocation;                          //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
+(id)os_log;
+(id)createModel;
+(id)currentManagedObjectModel;
+(id)defaultStoreLocation;
+(id)createPersistentContainer;
-(id)init;
-(NSPersistentContainer *)container;
-(id)persistentStoreCoordinator;
-(void)performWorkWithManagedObjectContext:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithStoreLocation:(id)arg1 ;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(id)createManagedObjectContext;
-(BOOL)createStoreDirectoryIfNeeded:(id*)arg1 ;
-(NSURL *)storeLocation;
-(id)storeDescription;
@end

