/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLmScorerToken.h>

@class NSString;

@interface FTMutableLmScorerToken : FTLmScorerToken

@property (nonatomic,copy) NSString * token_str; 
@property (assign,nonatomic) double log10_score; 
@property (assign,nonatomic) int ngram_used; 
-(id)init;
-(NSString *)token_str;
-(void)setToken_str:(NSString *)arg1 ;
-(double)log10_score;
-(void)setLog10_score:(double)arg1 ;
-(int)ngram_used;
-(void)setNgram_used:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

