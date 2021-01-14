/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSArray;

@interface GKDashboardTurnDataSource : GKCollectionDataSource {

	BOOL _shouldShowPlay;
	BOOL _shouldShowQuit;
	NSArray* _matches;

}

@property (nonatomic,retain) NSArray * matches;                //@synthesize matches=_matches - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;              //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQuit;              //@synthesize shouldShowQuit=_shouldShowQuit - In the implementation block
-(void)setMatches:(NSArray *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)shouldShowPlay;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)shouldShowQuit;
-(void)setShouldShowQuit:(BOOL)arg1 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)matches;
-(void)dealloc;
@end

