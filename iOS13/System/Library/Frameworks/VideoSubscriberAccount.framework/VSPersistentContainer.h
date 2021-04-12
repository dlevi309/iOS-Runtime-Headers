/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject {

	long long _modelVersion;
	NSManagedObjectContext* _viewContext;
	NSPersistentContainer* _persistentContainer;

}

@property (nonatomic,retain) NSManagedObjectContext * viewContext;                     //@synthesize viewContext=_viewContext - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,readonly) long long modelVersion;                                 //@synthesize modelVersion=_modelVersion - In the implementation block
+(id)directoryURL;
+(id)legacyDirectoryURL;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)viewContext;
-(long long)modelVersion;
-(NSPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(void)migrateContainerIfNecessary;
-(id)initWithModelVersion:(long long)arg1 ;
-(id)insertDeveloperIdentityProviderInContext:(id)arg1 ;
-(id)developerIdentityProviderFetchRequest;
-(void)setViewContext:(NSManagedObjectContext *)arg1 ;
@end

