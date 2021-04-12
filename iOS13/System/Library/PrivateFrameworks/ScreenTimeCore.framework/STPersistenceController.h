/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <libobjc.A.dylib/STPersistenceControllerProtocol.h>

@protocol OS_dispatch_queue;
@class NSManagedObjectContext, NSPersistentStore, NSObject, NSPersistentContainer, NSMutableDictionary, NSString;

@interface STPersistenceController : NSObject <STPersistenceControllerProtocol> {

	NSObject* _lastPersistentHistoryTokenByStoreIdentifierLock;
	NSPersistentContainer* _persistentContainer;
	NSMutableDictionary* _lastPersistentHistoryTokenByStoreIdentifier;
	NSObject*<OS_dispatch_queue> _coreDataQueue;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * lastPersistentHistoryTokenByStoreIdentifier;              //@synthesize lastPersistentHistoryTokenByStoreIdentifier=_lastPersistentHistoryTokenByStoreIdentifier - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * persistentContainer;                                           //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> coreDataQueue;                                            //@synthesize coreDataQueue=_coreDataQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectContext * viewContext; 
@property (nonatomic,readonly) BOOL hasStoreLoaded; 
@property (readonly) NSPersistentStore * localStore; 
@property (readonly) NSPersistentStore * cloudStore; 
-(id)init;
-(id)newBackgroundContext;
-(NSManagedObjectContext *)viewContext;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(NSPersistentStore *)localStore;
-(NSPersistentStore *)cloudStore;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(void)_remotePersistentStoreDidChange:(id)arg1 ;
-(void)_persistentStoreCoordinatorStoresDidChange:(id)arg1 ;
-(id)initWithPersistentContainer:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)coreDataQueue;
-(void)performBackgroundTaskAndWait:(/*^block*/id)arg1 ;
-(void)_logAboutMissingStoreName:(id)arg1 ;
-(NSMutableDictionary *)lastPersistentHistoryTokenByStoreIdentifier;
-(id)persistentHistoryTokenForStore:(id)arg1 ;
-(void)savePersistentHistoryToken:(id)arg1 forStore:(id)arg2 ;
-(id)localPersistentStoreMetadataValueForKey:(id)arg1 ;
-(void)setLocalPersistentStoreValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasStoreLoaded;
-(id)descriptionForPersistentStore:(id)arg1 ;
-(void)setCoreDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

