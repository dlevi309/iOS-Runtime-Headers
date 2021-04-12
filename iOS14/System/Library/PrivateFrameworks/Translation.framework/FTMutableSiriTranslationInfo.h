/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSiriTranslationInfo.h>

@class FTRecognitionSausage, NSArray, NSString;

@interface FTMutableSiriTranslationInfo : FTSiriTranslationInfo

@property (nonatomic,copy) FTRecognitionSausage * raw_sausage; 
@property (nonatomic,copy) NSArray * raw_nbest_choices; 
@property (nonatomic,copy) NSArray * post_itn_tokens; 
@property (nonatomic,copy) NSString * post_itn_recognition; 
@property (nonatomic,copy) NSArray * itn_alignments; 
@property (nonatomic,copy) NSArray * translation_phrase; 
-(id)init;
-(FTRecognitionSausage *)raw_sausage;
-(void)setRaw_sausage:(FTRecognitionSausage *)arg1 ;
-(NSArray *)raw_nbest_choices;
-(void)setRaw_nbest_choices:(NSArray *)arg1 ;
-(NSArray *)post_itn_tokens;
-(void)setPost_itn_tokens:(NSArray *)arg1 ;
-(NSString *)post_itn_recognition;
-(void)setPost_itn_recognition:(NSString *)arg1 ;
-(NSArray *)itn_alignments;
-(void)setItn_alignments:(NSArray *)arg1 ;
-(NSArray *)translation_phrase;
-(void)setTranslation_phrase:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

