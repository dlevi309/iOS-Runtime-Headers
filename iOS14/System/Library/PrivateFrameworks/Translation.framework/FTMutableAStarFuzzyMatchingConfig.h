/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAStarFuzzyMatchingConfig.h>

@class NSString;

@interface FTMutableAStarFuzzyMatchingConfig : FTAStarFuzzyMatchingConfig

@property (assign,nonatomic) BOOL enable_completion; 
@property (assign,nonatomic) unsigned max_results; 
@property (assign,nonatomic) unsigned max_expand_paths; 
@property (assign,nonatomic) unsigned max_tm_score; 
@property (assign,nonatomic) unsigned abs_pruning_threshold; 
@property (assign,nonatomic) unsigned rel_pruning_threshold; 
@property (assign,nonatomic) BOOL enable_word_boundary; 
@property (assign,nonatomic) unsigned max_path_num_at_boundary; 
@property (assign,nonatomic) float parabolic_error_wide; 
@property (assign,nonatomic) float parabolic_error_center; 
@property (assign,nonatomic) float parabolic_error_bias; 
@property (assign,nonatomic) unsigned parabolic_error_min; 
@property (assign,nonatomic) unsigned max_latency; 
@property (assign,nonatomic) unsigned word_penalty; 
@property (nonatomic,copy) NSString * delimiter; 
-(id)init;
-(BOOL)enable_completion;
-(void)setEnable_completion:(BOOL)arg1 ;
-(unsigned)max_results;
-(void)setMax_results:(unsigned)arg1 ;
-(unsigned)max_expand_paths;
-(void)setMax_expand_paths:(unsigned)arg1 ;
-(unsigned)max_tm_score;
-(void)setMax_tm_score:(unsigned)arg1 ;
-(unsigned)abs_pruning_threshold;
-(void)setAbs_pruning_threshold:(unsigned)arg1 ;
-(unsigned)rel_pruning_threshold;
-(void)setRel_pruning_threshold:(unsigned)arg1 ;
-(BOOL)enable_word_boundary;
-(void)setEnable_word_boundary:(BOOL)arg1 ;
-(unsigned)max_path_num_at_boundary;
-(void)setMax_path_num_at_boundary:(unsigned)arg1 ;
-(float)parabolic_error_wide;
-(void)setParabolic_error_wide:(float)arg1 ;
-(float)parabolic_error_center;
-(unsigned)max_latency;
-(void)setParabolic_error_center:(float)arg1 ;
-(float)parabolic_error_bias;
-(void)setParabolic_error_bias:(float)arg1 ;
-(unsigned)parabolic_error_min;
-(void)setParabolic_error_min:(unsigned)arg1 ;
-(void)setMax_latency:(unsigned)arg1 ;
-(unsigned)word_penalty;
-(void)setWord_penalty:(unsigned)arg1 ;
-(NSString *)delimiter;
-(void)setDelimiter:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

