/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface KPersistentMovieInfo : NSObject
+(long long)cacheCount;
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(void)ensureCacheDirectoryExists;
+(id)cachedCreationDateForURL:(id)arg1 ;
+(void)addURL:(id)arg1 withDate:(id)arg2 ;
+(id)infoCachePath;
+(void)reallySaveDict:(id)arg1 ;
+(void)createOrLoadPersistentDict;
+(void)savePersistentDict;
@end

