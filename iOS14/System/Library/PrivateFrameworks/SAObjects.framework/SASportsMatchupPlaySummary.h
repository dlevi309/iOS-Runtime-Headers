/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASportsAthlete;

@interface SASportsMatchupPlaySummary : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL appliesToAwayTeam; 
@property (assign,nonatomic) BOOL appliesToHomeTeam; 
@property (nonatomic,copy) NSString * nonFormattedTime; 
@property (nonatomic,retain) SASportsAthlete * offensivePlayer; 
@property (nonatomic,copy) NSString * summaryDescription; 
@property (nonatomic,copy) NSString * time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)matchupPlaySummary;
+(id)matchupPlaySummaryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)time;
-(void)setTime:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)appliesToAwayTeam;
-(void)setAppliesToAwayTeam:(BOOL)arg1 ;
-(BOOL)appliesToHomeTeam;
-(void)setAppliesToHomeTeam:(BOOL)arg1 ;
-(NSString *)nonFormattedTime;
-(void)setNonFormattedTime:(NSString *)arg1 ;
-(SASportsAthlete *)offensivePlayer;
-(void)setOffensivePlayer:(SASportsAthlete *)arg1 ;
-(void)setSummaryDescription:(NSString *)arg1 ;
-(NSString *)summaryDescription;
@end

