/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PPContactDiskCache.h>

@interface PPMutableContactDiskCache : PPContactDiskCache
-(BOOL)updateNameRecordCacheWithHistoryRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)addNameRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteNameRecordCache;
-(BOOL)_writeCache:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(id)_createNewCacheObjectWithCreatedAt:(long long)arg1 ;
-(long long)lastCreatedAt;
-(void)setLastCreatedAt:(long long)arg1 ;
-(BOOL)deleteCacheIfTooOld;
-(id)_recordSetBucketsForNameRecords:(id)arg1 ;
@end

