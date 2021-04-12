/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setSeason:(SASportsSeason *)arg1 ;
-(SASportsSeason *)season;
-(id)encodedClassName;
-(NSString *)diplayedText;
-(void)setDiplayedText:(NSString *)arg1 ;
-(BOOL)displayTeamLocationOverName;
-(void)setDisplayTeamLocationOverName:(BOOL)arg1 ;
-(NSString *)displayedText;
-(void)setDisplayedText:(NSString *)arg1 ;
-(NSString *)sport;
-(void)setSport:(NSString *)arg1 ;
@end

