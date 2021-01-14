/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject {

	NSDictionary* _consumerSubTypeAssetMappings;

}
+(id)sharedInstanceWithMobileAssets;
+(id)assetMappingWithCachedAssets;
+(id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3 ;
-(id)initWithUseMobileAssets:(BOOL)arg1 ;
-(id)init;
-(id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg1 ;
-(id)getAtxToolDescription;
-(id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1 ;
-(id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2 ;
@end

