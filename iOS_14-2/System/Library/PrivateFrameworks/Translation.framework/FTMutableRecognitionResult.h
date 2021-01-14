/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionResult.h>

@class FTRecognitionSausage, NSArray;

@interface FTMutableRecognitionResult : FTRecognitionResult

@property (nonatomic,copy) FTRecognitionSausage * pre_itn; 
@property (nonatomic,copy) FTRecognitionSausage * post_itn; 
@property (nonatomic,copy) NSArray * pre_itn_nbest_choices; 
@property (nonatomic,copy) NSArray * post_itn_nbest_choices; 
@property (nonatomic,copy) NSArray * pre_itn_token_to_post_itn_char_alignment; 
@property (nonatomic,copy) NSArray * choice_alignments; 
-(id)init;
-(FTRecognitionSausage *)post_itn;
-(FTRecognitionSausage *)pre_itn;
-(void)setPre_itn:(FTRecognitionSausage *)arg1 ;
-(void)setPost_itn:(FTRecognitionSausage *)arg1 ;
-(NSArray *)pre_itn_nbest_choices;
-(void)setPre_itn_nbest_choices:(NSArray *)arg1 ;
-(NSArray *)post_itn_nbest_choices;
-(void)setPost_itn_nbest_choices:(NSArray *)arg1 ;
-(NSArray *)pre_itn_token_to_post_itn_char_alignment;
-(void)setPre_itn_token_to_post_itn_char_alignment:(NSArray *)arg1 ;
-(NSArray *)choice_alignments;
-(void)setChoice_alignments:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

