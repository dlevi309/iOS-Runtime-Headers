/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSURL, NSPersistentContainer;

@interface CNContactMetadataPersistentStoreManager : NSObject {

	NSURL* _storeLocation;
	NSPersistentContainer* _container;

}

@property (nonatomic,readonly) NSURL * storeLocation;                          //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
+(id)currentManagedObjectModel;
+(id)defaultStoreLocation;
+(id)createPersistentContainer;
+(id)createModel;
+(id)os_log;
-(id)persistentStoreCoordinator;
-(id)init;
-(id)initWithStoreLocation:(id)arg1 ;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(BOOL)createStoreDirectoryIfNeeded:(id*)arg1 ;
-(NSURL *)storeLocation;
-(id)createManagedObjectContext;
-(id)storeDescription;
-(BOOL)performWorkWithManagedObjectContext:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSPersistentContainer *)container;
@end

