/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechFeature.h>

@class NSArray;

@interface FTMutableTextToSpeechFeature : FTTextToSpeechFeature

@property (nonatomic,copy) NSArray * normalized_text; 
@property (nonatomic,copy) NSArray * phoneme_sequence; 
@property (nonatomic,copy) NSArray * prompts; 
@property (nonatomic,copy) NSArray * replacement; 
-(id)init;
-(void)setReplacement:(NSArray *)arg1 ;
-(NSArray *)prompts;
-(NSArray *)replacement;
-(void)setPrompts:(NSArray *)arg1 ;
-(NSArray *)normalized_text;
-(void)setNormalized_text:(NSArray *)arg1 ;
-(NSArray *)phoneme_sequence;
-(void)setPhoneme_sequence:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

