/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSSQLiteEntity.h>

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity {

	SSPersistentCache* _persistentCache;

}
+(id)databaseTable;
+(id)allPropertyKeys;
+(unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2 ;
-(void)setPersistentCache:(id)arg1 ;
-(id)dataBlob:(BOOL*)arg1 ;
@end

