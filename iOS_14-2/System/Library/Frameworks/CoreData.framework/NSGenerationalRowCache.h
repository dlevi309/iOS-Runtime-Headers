/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSPersistentStore, NSPersistentStoreCache, NSMutableDictionary;

@interface NSGenerationalRowCache : NSObject {

	NSPersistentStore* _store;
	NSPersistentStoreCache* _primaryCache;
	NSMutableDictionary* _rowCachesByGenerationToken;
	os_unfair_lock_s _lock;

}
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
@end

