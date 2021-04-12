/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPModelForYouRecommendationsRequest.h>

@class NSArray, NSDictionary;

@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest {

	BOOL _nms_useCachedDataOnly;
	NSArray* _nms_cachedRecommendationsArray;
	NSDictionary* _nms_cachedStoreItemMetadataResults;

}

@property (assign,nonatomic) BOOL nms_useCachedDataOnly;                                     //@synthesize nms_useCachedDataOnly=_nms_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) NSArray * nms_cachedRecommendationsArray;                       //@synthesize nms_cachedRecommendationsArray=_nms_cachedRecommendationsArray - In the implementation block
@property (nonatomic,retain) NSDictionary * nms_cachedStoreItemMetadataResults;              //@synthesize nms_cachedStoreItemMetadataResults=_nms_cachedStoreItemMetadataResults - In the implementation block
-(void)setNms_cachedStoreItemMetadataResults:(NSDictionary *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)nms_useCachedDataOnly;
-(NSArray *)nms_cachedRecommendationsArray;
-(void)setNms_cachedRecommendationsArray:(NSArray *)arg1 ;
-(void)setNms_useCachedDataOnly:(BOOL)arg1 ;
-(NSDictionary *)nms_cachedStoreItemMetadataResults;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

