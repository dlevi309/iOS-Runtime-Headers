/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTItnAlignment.h>

@interface FTMutableItnAlignment : FTItnAlignment

@property (assign,nonatomic) int first_pre_itn_token_index; 
@property (assign,nonatomic) int last_pre_itn_token_index; 
@property (assign,nonatomic) int first_post_itn_char_pos; 
@property (assign,nonatomic) int last_post_itn_char_pos; 
-(id)init;
-(int)first_pre_itn_token_index;
-(void)setFirst_pre_itn_token_index:(int)arg1 ;
-(int)last_pre_itn_token_index;
-(void)setLast_pre_itn_token_index:(int)arg1 ;
-(int)first_post_itn_char_pos;
-(void)setFirst_post_itn_char_pos:(int)arg1 ;
-(int)last_post_itn_char_pos;
-(void)setLast_post_itn_char_pos:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

