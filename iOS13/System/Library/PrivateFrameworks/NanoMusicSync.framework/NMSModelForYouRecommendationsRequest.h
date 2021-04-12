/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(NSArray *)nms_cachedRecommendationsArray;
-(NSDictionary *)nms_cachedStoreItemMetadataResults;
-(void)setNms_useCachedDataOnly:(BOOL)arg1 ;
-(void)setNms_cachedRecommendationsArray:(NSArray *)arg1 ;
-(void)setNms_cachedStoreItemMetadataResults:(NSDictionary *)arg1 ;
-(BOOL)nms_useCachedDataOnly;
@end

