/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * diplayedText; 
@property (assign,nonatomic) BOOL displayTeamLocationOverName; 
@property (nonatomic,copy) NSString * displayedText; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SASportsSeason * season; 
@property (nonatomic,copy) NSString * sport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)league;
+(id)leagueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)sport;
-(SASportsSeason *)season;
-(void)setSeason:(SASportsSeason *)arg1 ;
-(NSString *)diplayedText;
-(void)setSport:(NSString *)arg1 ;
-(NSString *)displayedText;
-(void)setDiplayedText:(NSString *)arg1 ;
-(BOOL)displayTeamLocationOverName;
-(void)setDisplayTeamLocationOverName:(BOOL)arg1 ;
-(void)setDisplayedText:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

