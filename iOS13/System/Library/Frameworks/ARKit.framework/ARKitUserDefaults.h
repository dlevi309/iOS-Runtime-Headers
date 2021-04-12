/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@interface ARKitUserDefaults : NSObject
+(void)synchronize;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)objectForKey:(id)arg1 ;
+(void)removeObjectForKey:(id)arg1 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(BOOL)boolForKey:(id)arg1 ;
+(id)stringForKey:(id)arg1 ;
+(long long)integerForKey:(id)arg1 ;
+(float)floatForKey:(id)arg1 ;
+(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(id)numberForKey:(id)arg1 ;
+(id)defaultValues;
+(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
+(id)cachedObjectForKey:(id)arg1 ;
+(BOOL)shouldUseCache;
+(void)removeAllKeys;
+(id)objectForKey:(id)arg1 useCache:(BOOL)arg2 ;
+(id)resolutionDictionaryForKey:(id)arg1 ;
+(void)clearUserDefaultsCache;
+(id)listForKey:(id)arg1 ;
+(void)removeCachedObjectForKey:(id)arg1 ;
+(id)objectForKeySlow:(id)arg1 ;
+(id)userDefaultsCache;
+(id)keysWhitelistedForProcessEnvironmentOverride;
@end

