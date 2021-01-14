/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPModelStoreBrowseRequest.h>

@interface NMSModelEditorialRecommendationsRequest : MPModelStoreBrowseRequest {

	BOOL _nms_useCachedDataOnly;
	id _nms_cachedLoadedOutput;

}

@property (assign,nonatomic) BOOL nms_useCachedDataOnly;              //@synthesize nms_useCachedDataOnly=_nms_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) id nms_cachedLoadedOutput;               //@synthesize nms_cachedLoadedOutput=_nms_cachedLoadedOutput - In the implementation block
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)nms_cachedLoadedOutput;
-(BOOL)nms_useCachedDataOnly;
-(void)setNms_cachedLoadedOutput:(id)arg1 ;
-(void)setNms_useCachedDataOnly:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

