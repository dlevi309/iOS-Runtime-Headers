/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationResponse.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationResponse : FTBatchTranslationResponse

@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_string; 
@property (nonatomic,copy) NSString * paragraph_id; 
@property (nonatomic,copy) NSString * translated_text; 
@property (nonatomic,copy) NSArray * span; 
-(NSArray *)span;
-(id)init;
-(void)setSpan:(NSArray *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(NSString *)request_id;
-(NSString *)paragraph_id;
-(int)return_code;
-(NSString *)return_string;
-(NSString *)translated_text;
-(void)setReturn_string:(NSString *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setParagraph_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTranslated_text:(NSString *)arg1 ;
@end

