/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

@class NSManagedObjectContext, NSPersistentStore;


@protocol STPersistenceControllerProtocol <NSObject>
@property (nonatomic,readonly) NSManagedObjectContext * viewContext; 
@property (nonatomic,readonly) BOOL hasStoreLoaded; 
@property (readonly) NSPersistentStore * localStore; 
@property (readonly) NSPersistentStore * cloudStore; 
@required
-(NSPersistentStore *)localStore;
-(void)performBackgroundTask:(/*^block*/id)arg1;
-(NSPersistentStore *)cloudStore;
-(id)newBackgroundContext;
-(NSManagedObjectContext *)viewContext;
-(void)performBackgroundTaskAndWait:(/*^block*/id)arg1;
-(id)localPersistentStoreMetadataValueForKey:(id)arg1;
-(void)setLocalPersistentStoreValue:(id)arg1 forKey:(id)arg2;
-(BOOL)hasStoreLoaded;

@end

