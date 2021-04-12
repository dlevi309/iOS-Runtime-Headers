/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASportsMatchup.h>

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup

@property (nonatomic,copy) NSNumber * awayErrors; 
@property (nonatomic,copy) NSNumber * awayHits; 
@property (nonatomic,copy) NSNumber * balls; 
@property (nonatomic,copy) NSNumber * homeErrors; 
@property (nonatomic,copy) NSNumber * homeHits; 
@property (nonatomic,copy) NSString * inningStatus; 
@property (nonatomic,copy) NSNumber * onFirst; 
@property (nonatomic,copy) NSNumber * onSecond; 
@property (nonatomic,copy) NSNumber * onThird; 
@property (nonatomic,copy) NSNumber * outs; 
@property (nonatomic,copy) NSNumber * strikes; 
+(id)baseballMatchup;
+(id)baseballMatchupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)awayErrors;
-(void)setAwayErrors:(NSNumber *)arg1 ;
-(NSNumber *)awayHits;
-(void)setAwayHits:(NSNumber *)arg1 ;
-(NSNumber *)balls;
-(void)setBalls:(NSNumber *)arg1 ;
-(NSNumber *)homeErrors;
-(void)setHomeErrors:(NSNumber *)arg1 ;
-(NSNumber *)homeHits;
-(void)setHomeHits:(NSNumber *)arg1 ;
-(NSString *)inningStatus;
-(void)setInningStatus:(NSString *)arg1 ;
-(NSNumber *)onFirst;
-(void)setOnFirst:(NSNumber *)arg1 ;
-(NSNumber *)onSecond;
-(void)setOnSecond:(NSNumber *)arg1 ;
-(NSNumber *)onThird;
-(void)setOnThird:(NSNumber *)arg1 ;
-(NSNumber *)outs;
-(void)setOuts:(NSNumber *)arg1 ;
-(NSNumber *)strikes;
-(void)setStrikes:(NSNumber *)arg1 ;
@end

