/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationCacheContainer.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationCacheContainer : FTBatchTranslationCacheContainer

@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * translated_text; 
@property (nonatomic,copy) NSArray * spans; 
@property (assign,nonatomic) int sentence_count; 
-(NSArray *)spans;
-(id)init;
-(NSString *)request_id;
-(NSString *)translated_text;
-(void)setSpans:(NSArray *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTranslated_text:(NSString *)arg1 ;
-(int)sentence_count;
-(void)setSentence_count:(int)arg1 ;
@end

