/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

@class NSManagedObjectContext, NSPersistentStore;


@protocol STPersistenceControllerProtocol <NSObject>
@property (nonatomic,readonly) NSManagedObjectContext * viewContext; 
@property (nonatomic,readonly) BOOL hasStoreLoaded; 
@property (readonly) NSPersistentStore * localStore; 
@property (readonly) NSPersistentStore * cloudStore; 
@required
-(id)newBackgroundContext;
-(NSManagedObjectContext *)viewContext;
-(void)performBackgroundTask:(/*^block*/id)arg1;
-(NSPersistentStore *)localStore;
-(NSPersistentStore *)cloudStore;
-(void)performBackgroundTaskAndWait:(/*^block*/id)arg1;
-(id)localPersistentStoreMetadataValueForKey:(id)arg1;
-(void)setLocalPersistentStoreValue:(id)arg1 forKey:(id)arg2;
-(BOOL)hasStoreLoaded;

@end

