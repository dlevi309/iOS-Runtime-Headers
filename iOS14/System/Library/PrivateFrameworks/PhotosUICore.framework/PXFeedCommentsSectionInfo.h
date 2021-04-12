/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo {

	BOOL __hasLikes;

}

@property (assign,setter=_setHasLikes:,nonatomic) BOOL _hasLikes;              //@synthesize _hasLikes=__hasLikes - In the implementation block
-(unsigned long long)assetsCount;
-(id)assets;
-(BOOL)isMine;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemWithComment:(id)arg1 ;
-(long long)indexOfItemWithAsset:(id)arg1 ;
-(id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2 ;
-(BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1 ;
-(id)likesForItemAtIndex:(long long)arg1 ;
-(id)commentForItemAtIndex:(long long)arg1 ;
-(id)cloudFeedCommentsEntry;
-(void)getCommentCount:(out unsigned long long*)arg1 likeCount:(out unsigned long long*)arg2 ;
-(long long)sectionType;
-(BOOL)_hasLikes;
-(void)updateFromCloudFeedEntry;
-(id)commentTextForItemAtIndex:(long long)arg1 ;
-(BOOL)containsAsset:(id)arg1 ;
-(void)_setHasLikes:(BOOL)arg1 ;
-(id)assetForItemAtIndex:(long long)arg1 ;
@end

