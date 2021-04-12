/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject {

	FBSApplicationDataStore* _fbsApplicationDataStore;

}

@property (nonatomic,readonly) NSString * bundleID; 
+(id)applicationsWithAvailableStores;
+(id)storeForApplication:(id)arg1 ;
+(void)synchronize;
+(void)setPrefetchedKeys:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSString *)bundleID;
-(void)removeAllObjects;
-(id)_initWithFBSApplicationDataStore:(id)arg1 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

