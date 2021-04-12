/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASportsEntity.h>

@class SASportsTeam, NSArray, NSString, NSNumber;

@interface SASportsAthlete : SASportsEntity

@property (nonatomic,retain) SASportsTeam * activeTeam; 
@property (nonatomic,copy) NSArray * athleteMetadata; 
@property (nonatomic,copy) NSArray * careerStatistics; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSArray * formattedMetadata; 
@property (nonatomic,copy) NSArray * formattedMetadataTypes; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * height; 
@property (nonatomic,copy) NSNumber * injured; 
@property (nonatomic,copy) NSString * jerseyNumber; 
@property (nonatomic,copy) NSArray * lastGameStatistics; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * position; 
@property (nonatomic,copy) NSArray * previousTeams; 
@property (nonatomic,copy) NSArray * statistics; 
@property (nonatomic,copy) NSString * weight; 
+(id)athlete;
+(id)athleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)position;
-(NSString *)height;
-(void)setHeight:(NSString *)arg1 ;
-(void)setWeight:(NSString *)arg1 ;
-(NSString *)weight;
-(NSArray *)statistics;
-(void)setStatistics:(NSArray *)arg1 ;
-(void)setPosition:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id)encodedClassName;
-(SASportsTeam *)activeTeam;
-(void)setActiveTeam:(SASportsTeam *)arg1 ;
-(NSArray *)athleteMetadata;
-(void)setAthleteMetadata:(NSArray *)arg1 ;
-(NSArray *)careerStatistics;
-(void)setCareerStatistics:(NSArray *)arg1 ;
-(NSArray *)formattedMetadata;
-(void)setFormattedMetadata:(NSArray *)arg1 ;
-(NSArray *)formattedMetadataTypes;
-(void)setFormattedMetadataTypes:(NSArray *)arg1 ;
-(NSNumber *)injured;
-(void)setInjured:(NSNumber *)arg1 ;
-(NSString *)jerseyNumber;
-(void)setJerseyNumber:(NSString *)arg1 ;
-(NSArray *)lastGameStatistics;
-(void)setLastGameStatistics:(NSArray *)arg1 ;
-(NSArray *)previousTeams;
-(void)setPreviousTeams:(NSArray *)arg1 ;
@end

