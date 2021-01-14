/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSetSpeechContext.h>

@class NSArray, NSString;

@interface FTMutableSetSpeechContext : FTSetSpeechContext

@property (nonatomic,copy) NSArray * contextual_text; 
@property (nonatomic,copy) NSString * left_context; 
@property (nonatomic,copy) NSString * right_context; 
@property (nonatomic,copy) NSArray * context_with_pron_hints; 
-(id)init;
-(NSArray *)contextual_text;
-(void)setContextual_text:(NSArray *)arg1 ;
-(NSString *)left_context;
-(void)setLeft_context:(NSString *)arg1 ;
-(NSString *)right_context;
-(void)setRight_context:(NSString *)arg1 ;
-(NSArray *)context_with_pron_hints;
-(void)setContext_with_pron_hints:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

