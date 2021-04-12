/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SASportsLeague, SAUIAppPunchOut;

@interface SASportsSnippet : SAUISnippet

@property (nonatomic,retain) SASportsLeague * league; 
@property (nonatomic,retain) SAUIAppPunchOut * leagueAppPunchOut; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)snippet;
-(id)groupIdentifier;
-(SASportsLeague *)league;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)leagueAppPunchOut;
-(void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setLeague:(SASportsLeague *)arg1 ;
@end

