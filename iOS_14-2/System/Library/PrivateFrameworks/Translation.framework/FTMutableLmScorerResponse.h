/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLmScorerResponse.h>

@class NSString, NSArray;

@interface FTMutableLmScorerResponse : FTLmScorerResponse

@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSArray * tokens; 
@property (assign,nonatomic) double ppl; 
-(void)setTokens:(NSArray *)arg1 ;
-(double)ppl;
-(NSArray *)tokens;
-(id)init;
-(void)setPpl:(double)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

