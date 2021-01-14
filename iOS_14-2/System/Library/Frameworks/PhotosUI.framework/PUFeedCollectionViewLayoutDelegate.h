/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUFeedCollectionViewLayoutDelegate <UICollectionViewDelegate>
@required
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
-(id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4;
-(void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4;
-(PUFeedSeparatorMetrics*)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(CGSize)arg4;
-(id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(CGSize)arg4;
-(PUFeedSeparatorMetrics*)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5;
-(double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 commentSizeForTileAtIndexPath:(id)arg3 commentIndex:(long long)arg4 proposedSize:(CGSize)arg5;
-(long long)collectionView:(id)arg1 layout:(id)arg2 commentCountForTileAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 likesSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowLikesForTileAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 configurationForSectionHeaderType:(long long)arg3;

@end

