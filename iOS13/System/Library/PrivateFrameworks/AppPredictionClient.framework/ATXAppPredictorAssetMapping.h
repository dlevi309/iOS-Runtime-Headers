/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject {

	NSDictionary* _consumerSubTypeAssetMappings;

}
+(id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3 ;
+(id)initWithCachedAssets;
+(id)sharedInstanceWithMobileAssets;
-(id)init;
-(id)initWithUseMobileAssets:(BOOL)arg1 ;
-(id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1 ;
-(id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg1 ;
-(id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(id)getAtxToolDescription;
@end

