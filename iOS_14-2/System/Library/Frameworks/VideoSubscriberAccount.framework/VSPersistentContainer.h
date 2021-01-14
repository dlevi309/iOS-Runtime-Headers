/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)legacyDirectoryURL;
+(id)directoryURL;
-(NSPersistentContainer *)persistentContainer;
-(long long)modelVersion;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(void)setViewContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithModelVersion:(long long)arg1 ;
-(id)insertDeveloperIdentityProviderInContext:(id)arg1 ;
-(id)developerIdentityProviderFetchRequest;
-(void)migrateContainerIfNecessary;
-(NSManagedObjectContext *)viewContext;
@end

