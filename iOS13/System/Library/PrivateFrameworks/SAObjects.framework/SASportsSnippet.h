/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SASportsLeague, SAUIAppPunchOut;

@interface SASportsSnippet : SAUISnippet

@property (nonatomic,retain) SASportsLeague * league; 
@property (nonatomic,retain) SAUIAppPunchOut * leagueAppPunchOut; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(id)encodedClassName;
-(SASportsLeague *)league;
-(void)setLeague:(SASportsLeague *)arg1 ;
-(SAUIAppPunchOut *)leagueAppPunchOut;
-(void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

