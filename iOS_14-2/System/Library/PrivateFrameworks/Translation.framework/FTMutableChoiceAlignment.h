/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTChoiceAlignment.h>

@class NSArray;

@interface FTMutableChoiceAlignment : FTChoiceAlignment

@property (nonatomic,copy) NSArray * post_itn_choice_indices; 
@property (nonatomic,copy) NSArray * pre_itn_token_to_post_itn_char_alignments; 
-(id)init;
-(NSArray *)post_itn_choice_indices;
-(void)setPost_itn_choice_indices:(NSArray *)arg1 ;
-(NSArray *)pre_itn_token_to_post_itn_char_alignments;
-(void)setPre_itn_token_to_post_itn_char_alignments:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

