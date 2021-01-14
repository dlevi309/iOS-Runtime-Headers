/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournament, UIColor, NSString;

@interface GKTournamentViewRequest : NSObject <NSSecureCoding> {

	GKTournament* _tournament;
	long long _playerGroup;
	long long _viewType;
	long long _appearanceStyle;
	UIColor* _tintColor;
	UIColor* _secondaryTintColor;
	NSString* _tournamentDefinitionID;

}

@property (nonatomic,retain) GKTournament * tournament;                      //@synthesize tournament=_tournament - In the implementation block
@property (assign,nonatomic) long long playerGroup;                          //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) long long viewType;                             //@synthesize viewType=_viewType - In the implementation block
@property (assign,nonatomic) long long appearanceStyle;                      //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                            //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTintColor;                   //@synthesize secondaryTintColor=_secondaryTintColor - In the implementation block
@property (nonatomic,retain) NSString * tournamentDefinitionID;              //@synthesize tournamentDefinitionID=_tournamentDefinitionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setAppearanceStyle:(long long)arg1 ;
-(void)setViewType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)viewType;
-(long long)appearanceStyle;
-(GKTournament *)tournament;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)secondaryTintColor;
-(void)setSecondaryTintColor:(UIColor *)arg1 ;
-(void)setTournament:(GKTournament *)arg1 ;
-(void)setPlayerGroup:(long long)arg1 ;
-(void)setTournamentDefinitionID:(NSString *)arg1 ;
-(long long)playerGroup;
-(NSString *)tournamentDefinitionID;
-(id)initWithViewType:(long long)arg1 tournamentDefinitionID:(id)arg2 ;
-(UIColor *)tintColor;
@end

