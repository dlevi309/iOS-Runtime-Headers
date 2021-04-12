/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface KPersistentMovieInfo : NSObject
+(long long)cacheCount;
+(void)ensureCacheDirectoryExists;
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(id)cachedCreationDateForURL:(id)arg1 ;
+(void)addURL:(id)arg1 withDate:(id)arg2 ;
+(id)infoCachePath;
+(void)reallySaveDict:(id)arg1 ;
+(void)createOrLoadPersistentDict;
+(void)savePersistentDict;
@end

