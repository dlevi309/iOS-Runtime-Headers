/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationRequest_Paragraph.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationRequest_Paragraph : FTBatchTranslationRequest_Paragraph

@property (nonatomic,copy) NSString * paragraph_id; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * span; 
-(NSArray *)span;
-(id)init;
-(void)setSpan:(NSArray *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)paragraph_id;
-(void)setParagraph_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

