/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKGameLayerCollectionDataSource.h>

@interface GKLeaderboardCollectionDataSource : GKGameLayerCollectionDataSource
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(double)cellSpacing;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)updateHighlightsInSectionHeader:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)collectionView:(id)arg1 updateLayoutForSectionHeader:(id)arg2 ;
-(long long)allowedColumnCount:(long long)arg1 ;
-(double)topMargin;
-(double)headerSpacing;
@end

