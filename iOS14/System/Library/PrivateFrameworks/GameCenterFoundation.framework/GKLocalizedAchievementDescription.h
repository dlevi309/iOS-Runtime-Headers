/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)unachievedDescription;
-(GKGame *)game;
-(id)imageNameForIcon;
-(NSString *)iconImageName;
-(void)setGame:(GKGame *)arg1 ;
-(id)achievedDescription;
-(id)title;
-(void)dealloc;
-(id)_localizedStringFromKey:(id)arg1 ;
-(void)setIconImageName:(NSString *)arg1 ;
@end

