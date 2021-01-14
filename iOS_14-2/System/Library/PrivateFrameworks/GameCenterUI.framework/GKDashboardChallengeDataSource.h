/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>
#import <libobjc.A.dylib/GKDashboardChallengeDetailViewControllerDelegate.h>

@class GKGameRecord, NSArray;

@interface GKDashboardChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate> {

	BOOL _shouldShowPlay;
	GKGameRecord* _gameRecord;
	NSArray* _challenges;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * challenges;                   //@synthesize challenges=_challenges - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;                    //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)shouldShowPlay;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(void)userDidSelectPlay:(id)arg1 ;
-(void)setChallenges:(NSArray *)arg1 ;
-(void)newDashboardUserDidSelectPlayChallenge:(id)arg1 ;
-(NSArray *)challenges;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(void)dealloc;
@end

