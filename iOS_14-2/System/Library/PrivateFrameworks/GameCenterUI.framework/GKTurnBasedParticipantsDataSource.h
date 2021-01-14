/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKTurnBasedMatch, NSString;

@interface GKTurnBasedParticipantsDataSource : GKBasicCollectionViewDataSource {

	GKTurnBasedMatch* _match;

}

@property (nonatomic,retain) GKTurnBasedMatch * match;               //@synthesize match=_match - In the implementation block
@property (nonatomic,readonly) NSString * sectionTitle; 
-(NSString *)sectionTitle;
-(GKTurnBasedMatch *)match;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
@end

