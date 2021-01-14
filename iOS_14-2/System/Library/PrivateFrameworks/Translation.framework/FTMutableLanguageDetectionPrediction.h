/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetectionPrediction.h>

@class NSString;

@interface FTMutableLanguageDetectionPrediction : FTLanguageDetectionPrediction

@property (nonatomic,copy) NSString * locale; 
@property (assign,nonatomic) float confidence; 
@property (assign,nonatomic) float threshold; 
@property (assign,nonatomic) BOOL is_low_confidence; 
-(float)confidence;
-(float)threshold;
-(NSString *)locale;
-(void)setLocale:(NSString *)arg1 ;
-(id)init;
-(void)setConfidence:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)is_low_confidence;
-(void)setIs_low_confidence:(BOOL)arg1 ;
-(void)setThreshold:(float)arg1 ;
@end

