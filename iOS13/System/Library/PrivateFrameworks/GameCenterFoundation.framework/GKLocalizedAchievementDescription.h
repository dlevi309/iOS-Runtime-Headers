/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKAchievementDescription.h>

@class GKGame, NSString;

@interface GKLocalizedAchievementDescription : GKAchievementDescription {

	GKGame* _game;
	NSString* _iconImageName;

}

@property (retain) GKGame * game;                       //@synthesize game=_game - In the implementation block
@property (copy) NSString * iconImageName;              //@synthesize iconImageName=_iconImageName - In the implementation block
-(void)dealloc;
-(id)title;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(NSString *)iconImageName;
-(id)achievedDescription;
-(id)unachievedDescription;
-(id)imageNameForIcon;
-(id)_localizedStringFromKey:(id)arg1 ;
-(void)setIconImageName:(NSString *)arg1 ;
@end

