/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPSQLKVStore : NSObject
+(id)stringForKey:(id)arg1 transaction:(id)arg2 ;
+(void)setNumber:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(id)numberForKey:(id)arg1 transaction:(id)arg2 ;
+(void)setString:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(void)storeBlob:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(id)loadBlobForKey:(id)arg1 transaction:(id)arg2 ;
+(void)removeBlobForKey:(id)arg1 transaction:(id)arg2 ;
@end

