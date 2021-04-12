/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSPersistentStore, NSPersistentStoreCache, NSMutableDictionary;

@interface NSGenerationalRowCache : NSObject {

	NSPersistentStore* _store;
	NSPersistentStoreCache* _primaryCache;
	NSMutableDictionary* _rowCachesByGenerationToken;
	int _lock;

}
-(void)dealloc;
-(id)initWithStore:(id)arg1 ;
-(void)removeRowCacheForGenerationWithIdentifier:(id)arg1 ;
-(id)rowCacheForGeneration:(id)arg1 ;
-(void)forgetAllExternalData;
-(void)removeRowCacheForGeneration:(id)arg1 ;
@end

