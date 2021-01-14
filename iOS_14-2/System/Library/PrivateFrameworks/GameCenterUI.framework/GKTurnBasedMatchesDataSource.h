/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKSplittingDataSource.h>

@protocol GKTurnBasedMatchesDataSourceDelegate;
@class NSObject, GKGame;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource {

	NSObject*<GKTurnBasedMatchesDataSourceDelegate> _delegateWeak;
	GKGame* _game;
	SEL _detailPressedAction;
	UIEdgeInsets _cellMarginInsets;

}

@property (nonatomic,retain) GKGame * game;                                                                //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) SEL detailPressedAction;                                                      //@synthesize detailPressedAction=_detailPressedAction - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellMarginInsets;                                                //@synthesize cellMarginInsets=_cellMarginInsets - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKTurnBasedMatchesDataSourceDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
-(GKGame *)game;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<GKTurnBasedMatchesDataSourceDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(unsigned long long)numberOfMatches;
-(void)configureDataSource;
-(void)setDelegate:(NSObject*<GKTurnBasedMatchesDataSourceDelegate>)arg1 ;
-(void)setDetailPressedAction:(SEL)arg1 ;
-(SEL)detailPressedAction;
-(UIEdgeInsets)cellMarginInsets;
-(void)setCellMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)configureCollectionView:(id)arg1 ;
@end

