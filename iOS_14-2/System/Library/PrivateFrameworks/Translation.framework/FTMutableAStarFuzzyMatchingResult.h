/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAStarFuzzyMatchingResult.h>

@class NSString, NSArray;

@interface FTMutableAStarFuzzyMatchingResult : FTAStarFuzzyMatchingResult

@property (nonatomic,copy) NSString * matched_result; 
@property (assign,nonatomic) long long total_score; 
@property (assign,nonatomic) int tm_score; 
@property (nonatomic,copy) NSArray * match_ids; 
@property (nonatomic,copy) NSString * debug_information; 
-(id)init;
-(int)tm_score;
-(NSString *)matched_result;
-(void)setMatched_result:(NSString *)arg1 ;
-(long long)total_score;
-(void)setTotal_score:(long long)arg1 ;
-(void)setTm_score:(int)arg1 ;
-(NSArray *)match_ids;
-(void)setMatch_ids:(NSArray *)arg1 ;
-(NSString *)debug_information;
-(void)setDebug_information:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

