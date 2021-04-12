/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@interface ARKitUserDefaults : NSObject
+(id)numberForKey:(id)arg1 ;
+(float)floatForKey:(id)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(void)removeObjectForKey:(id)arg1 ;
+(id)cachedObjectForKey:(id)arg1 ;
+(void)removeAllKeys;
+(void)synchronize;
+(id)objectForKey:(id)arg1 ;
+(BOOL)boolForKey:(id)arg1 ;
+(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(long long)integerForKey:(id)arg1 ;
+(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
+(id)stringForKey:(id)arg1 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 ;
+(id)defaultValues;
+(BOOL)shouldUseCache;
+(id)objectForKey:(id)arg1 useCache:(BOOL)arg2 ;
+(id)objectForKeySlow:(id)arg1 ;
+(id)userDefaultsCache;
+(void)removeCachedObjectForKey:(id)arg1 ;
+(id)keysWhitelistedForProcessEnvironmentOverride;
+(void)clearUserDefaultsCache;
+(id)listForKey:(id)arg1 ;
+(id)resolutionDictionaryForKey:(id)arg1 ;
@end

