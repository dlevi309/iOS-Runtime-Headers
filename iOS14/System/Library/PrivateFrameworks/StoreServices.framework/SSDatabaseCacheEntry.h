/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2 ;
-(void)setPersistentCache:(id)arg1 ;
-(id)description;
-(id)dataBlob:(BOOL*)arg1 ;
-(void)dealloc;
@end

