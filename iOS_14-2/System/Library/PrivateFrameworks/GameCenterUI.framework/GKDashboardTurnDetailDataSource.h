/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource {

	GKTurnBasedMatch* _match;

}

@property (nonatomic,retain) GKTurnBasedMatch * match;              //@synthesize match=_match - In the implementation block
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(GKTurnBasedMatch *)match;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(id)initWithMatch:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)dealloc;
@end

