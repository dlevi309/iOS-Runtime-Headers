/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedAssetsSectionInfo : PXFeedSectionInfo
-(unsigned long long)assetsCount;
-(id)assets;
-(id)commentsForItemAtIndex:(long long)arg1 ;
-(BOOL)isMine;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemWithAsset:(id)arg1 ;
-(id)batchIDForItemAtIndex:(long long)arg1 ;
-(BOOL)hasPlayableAssetForItemAtIndex:(long long)arg1 ;
-(id)likesForItemAtIndex:(long long)arg1 ;
-(id)commentForItemAtIndex:(long long)arg1 ;
-(id)countsByAssetDisplayType;
-(void)getPhotoCount:(out unsigned long long*)arg1 videoCount:(out unsigned long long*)arg2 ;
-(long long)sectionType;
-(void)updateFromCloudFeedEntry;
-(BOOL)containsAsset:(id)arg1 ;
-(BOOL)areAllAssetsLiked;
-(long long)indexOfFirstItemFromLastBatch;
-(id)assetForItemAtIndex:(long long)arg1 ;
-(id)captionForItemAtIndex:(long long)arg1 ;
-(id)cloudFeedAssetsEntry;
@end

