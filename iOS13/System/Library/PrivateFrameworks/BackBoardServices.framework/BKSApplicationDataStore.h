/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject {

	FBSApplicationDataStore* _fbsApplicationDataStore;

}

@property (nonatomic,readonly) NSString * bundleID; 
+(void)synchronize;
+(void)setPrefetchedKeys:(id)arg1 ;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleID;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)_initWithFBSApplicationDataStore:(id)arg1 ;
@end

