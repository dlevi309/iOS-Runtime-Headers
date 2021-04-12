/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKAchievement, GKPlayer, GKGame, UIImage;

@interface GKAchievementSharingInfo : NSObject <NSCoding, NSSecureCoding> {

	BOOL _complete;
	GKAchievement* _achievement;
	GKPlayer* _player;
	GKGame* _game;
	UIImage* _iconImage;
	UIImage* _badgeImage;

}

@property (nonatomic,retain) GKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * badgeImage;                     //@synthesize badgeImage=_badgeImage - In the implementation block
@property (assign,nonatomic) BOOL complete;                            //@synthesize complete=_complete - In the implementation block
+(BOOL)supportsSecureCoding;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKAchievement *)achievement;
-(GKGame *)game;
-(UIImage *)iconImage;
-(id)operationThatBlocksUntilLoaded;
-(id)thumbnailForActivityType:(id)arg1 ;
-(id)itemsForActivityType:(id)arg1 ;
-(id)subjectForEmailActivity;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)badgeImage;
-(BOOL)complete;
-(void)setBadgeImage:(UIImage *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(id)initWithAchievement:(id)arg1 forGame:(id)arg2 ;
-(void)dealloc;
@end

