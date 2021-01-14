/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString;

@interface ATXUICacheManager : NSObject {

	NSString* _cacheBasePath;

}
-(id)consumerSubTypeStringsWithNonEmptyCachedLayout;
-(id)initWithCacheBasePath:(id)arg1 ;
-(id)init;
-(id)dataFromFileHandle:(id)arg1 ;
-(id)serializeLayout:(id)arg1 ;
-(double)cacheAgeForConsumerSubTypeString:(id)arg1 ;
-(id)cachedLayoutForConsumerSubType:(unsigned char)arg1 expectedClass:(Class)arg2 ;
-(id)cacheFilePathForConsumerSubType:(unsigned char)arg1 ;
-(BOOL)updateCachedLayout:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(BOOL)writeSerializedDataToCacheFile:(id)arg1 path:(id)arg2 ;
-(BOOL)deleteCacheFileForConsumerSubType:(unsigned char)arg1 ;
-(id)cacheFilePathForConsumerSubTypeString:(id)arg1 ;
-(id)deserializeLayoutData:(id)arg1 expectedClass:(Class)arg2 ;
@end

