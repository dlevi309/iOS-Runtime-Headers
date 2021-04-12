/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)outs;
-(id)encodedClassName;
-(NSNumber *)balls;
-(NSNumber *)onFirst;
-(NSNumber *)onThird;
-(NSNumber *)strikes;
-(NSNumber *)awayErrors;
-(void)setAwayErrors:(NSNumber *)arg1 ;
-(void)setAwayHits:(NSNumber *)arg1 ;
-(void)setBalls:(NSNumber *)arg1 ;
-(NSNumber *)homeErrors;
-(void)setHomeErrors:(NSNumber *)arg1 ;
-(void)setHomeHits:(NSNumber *)arg1 ;
-(NSString *)inningStatus;
-(void)setInningStatus:(NSString *)arg1 ;
-(void)setOnFirst:(NSNumber *)arg1 ;
-(void)setOnSecond:(NSNumber *)arg1 ;
-(void)setOnThird:(NSNumber *)arg1 ;
-(void)setStrikes:(NSNumber *)arg1 ;
-(NSNumber *)awayHits;
-(NSNumber *)homeHits;
-(NSNumber *)onSecond;
-(void)setOuts:(NSNumber *)arg1 ;
@end

