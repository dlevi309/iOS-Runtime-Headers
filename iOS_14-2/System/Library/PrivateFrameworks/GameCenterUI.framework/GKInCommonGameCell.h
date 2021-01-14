/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKPlayerGameCell.h>

@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell {

	GKGameRecord* _localPlayerGameRecord;

}

@property (nonatomic,retain) GKGameRecord * localPlayerGameRecord;              //@synthesize localPlayerGameRecord=_localPlayerGameRecord - In the implementation block
-(id)leaderboardStringWithGameRecord:(id)arg1 ;
-(GKGameRecord *)localPlayerGameRecord;
-(void)setLocalPlayerGameRecord:(GKGameRecord *)arg1 ;
-(void)prepareForReuse;
-(void)didUpdateModel;
-(void)dealloc;
@end

