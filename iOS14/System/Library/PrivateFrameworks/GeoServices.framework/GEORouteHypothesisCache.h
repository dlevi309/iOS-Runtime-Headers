/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>

@class GEONavdCachePersistenceManager, NSString;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {

	GEONavdCachePersistenceManager* _persistenceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDown;
-(void)enumerateAllForCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)saveValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(id)descriptionOfAllEntries;
-(double)nextRefreshTimeStamp;
-(void)_removeAllEntries;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id)loadValueForKey:(id)arg1 ;
-(void)removeKey:(id)arg1 value:(id)arg2 ;
-(id)loadEntryForRowId:(long long)arg1 ;
-(long long)numberOfEntriesOnDisk;
-(void)dealloc;
-(id)rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
@end

