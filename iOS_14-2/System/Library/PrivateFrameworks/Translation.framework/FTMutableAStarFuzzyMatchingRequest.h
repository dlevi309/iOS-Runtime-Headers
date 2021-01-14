/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAStarFuzzyMatchingRequest.h>

@class NSString, FTAStarFuzzyMatchingConfig;

@interface FTMutableAStarFuzzyMatchingRequest : FTAStarFuzzyMatchingRequest

@property (nonatomic,copy) NSString * matcher_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * target; 
@property (nonatomic,copy) FTAStarFuzzyMatchingConfig * config; 
-(FTAStarFuzzyMatchingConfig *)config;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)query;
-(id)init;
-(NSString *)target;
-(void)setQuery:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setConfig:(FTAStarFuzzyMatchingConfig *)arg1 ;
-(NSString *)matcher_id;
-(void)setMatcher_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

