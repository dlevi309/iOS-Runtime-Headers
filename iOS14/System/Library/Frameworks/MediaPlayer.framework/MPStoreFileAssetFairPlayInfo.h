/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICStoreFileAssetFairPlayInfo, NSDictionary, NSData;

@interface MPStoreFileAssetFairPlayInfo : NSObject {

	ICStoreFileAssetFairPlayInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * responseSinfDictionary; 
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSData * dpInfoData; 
@property (nonatomic,copy,readonly) NSData * pinfData; 
@property (nonatomic,copy,readonly) NSData * sinfData; 
@property (nonatomic,copy,readonly) NSData * sinf2Data; 
@property (nonatomic,copy,readonly) NSDictionary * purchaseBundleSinfDictionary; 
-(NSData *)pinfData;
-(NSData *)sinfData;
-(NSData *)dpInfoData;
-(NSData *)sinf2Data;
-(id)initWithResponseSinfDictionary:(id)arg1 ;
-(NSDictionary *)responseSinfDictionary;
-(id)initWithiTunesCloudStoreFileAssetFairPlayInfo:(id)arg1 ;
-(NSDictionary *)purchaseBundleSinfDictionary;
-(long long)identifier;
@end

