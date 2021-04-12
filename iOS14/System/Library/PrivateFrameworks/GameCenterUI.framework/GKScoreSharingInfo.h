/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKLeaderboard, GKPlayer, GKGame, UIImage, GKScore;

@interface GKScoreSharingInfo : NSObject <NSCoding, NSSecureCoding> {

	BOOL _complete;
	GKLeaderboard* _leaderboardCategory;
	GKPlayer* _player;
	GKGame* _game;
	UIImage* _badgeImage;
	UIImage* _iconImage;
	GKScore* _score;

}

@property (nonatomic,retain) GKLeaderboard * leaderboardCategory;              //@synthesize leaderboardCategory=_leaderboardCategory - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                                    //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) UIImage * badgeImage;                             //@synthesize badgeImage=_badgeImage - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                              //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) BOOL complete;                                    //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) GKScore * score;                                  //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKGame *)game;
-(UIImage *)iconImage;
-(GKScore *)score;
-(id)operationThatBlocksUntilLoaded;
-(id)thumbnailForActivityType:(id)arg1 ;
-(id)itemsForActivityType:(id)arg1 ;
-(id)subjectForEmailActivity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(GKScore *)arg1 ;
-(UIImage *)badgeImage;
-(BOOL)complete;
-(void)setLeaderboardCategory:(GKLeaderboard *)arg1 ;
-(GKLeaderboard *)leaderboardCategory;
-(id)initWithCategoryID:(id)arg1 forGame:(id)arg2 player:(id)arg3 ;
-(void)setBadgeImage:(UIImage *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(void)dealloc;
@end

