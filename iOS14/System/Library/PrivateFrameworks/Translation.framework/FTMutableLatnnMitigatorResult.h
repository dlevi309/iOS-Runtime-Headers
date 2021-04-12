/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLatnnMitigatorResult.h>

@class NSString;

@interface FTMutableLatnnMitigatorResult : FTLatnnMitigatorResult

@property (assign,nonatomic) BOOL processed; 
@property (nonatomic,copy) NSString * version; 
@property (assign,nonatomic) double threshold; 
@property (assign,nonatomic) double score; 
-(double)threshold;
-(id)init;
-(double)score;
-(void)setScore:(double)arg1 ;
-(BOOL)processed;
-(void)setProcessed:(BOOL)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setThreshold:(double)arg1 ;
@end

