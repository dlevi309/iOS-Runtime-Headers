/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata {

	NSDate* _startGameTime;
	NSString* _leagueName;
	NSString* _leagueShortName;

}

@property (nonatomic,copy,readonly) NSDate * startGameTime;                  //@synthesize startGameTime=_startGameTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * leagueName;                   //@synthesize leagueName=_leagueName - In the implementation block
@property (nonatomic,copy,readonly) NSString * leagueShortName;              //@synthesize leagueShortName=_leagueShortName - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)startGameTime;
-(NSString *)leagueName;
-(NSString *)leagueShortName;
@end

