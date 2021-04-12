/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)identifier;
-(id)initWithResponseSinfDictionary:(id)arg1 ;
-(id)initWithiTunesCloudStoreFileAssetFairPlayInfo:(id)arg1 ;
-(NSDictionary *)responseSinfDictionary;
-(NSData *)dpInfoData;
-(NSData *)pinfData;
-(NSData *)sinfData;
-(NSData *)sinf2Data;
-(NSDictionary *)purchaseBundleSinfDictionary;
@end

