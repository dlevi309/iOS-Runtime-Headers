/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTranslationResponse_TranslationPhrase.h>

@class NSArray, NSString;

@interface FTMutableTranslationResponse_TranslationPhrase : FTTranslationResponse_TranslationPhrase

@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) NSArray * translated_tokens; 
@property (nonatomic,copy) NSString * meta_info; 
@property (nonatomic,copy) NSArray * spans; 
@property (assign,nonatomic) BOOL low_confidence; 
-(float)confidence;
-(NSArray *)spans;
-(id)init;
-(void)setConfidence:(float)arg1 ;
-(NSString *)meta_info;
-(void)setSpans:(NSArray *)arg1 ;
-(NSArray *)translated_tokens;
-(void)setTranslated_tokens:(NSArray *)arg1 ;
-(BOOL)low_confidence;
-(void)setLow_confidence:(BOOL)arg1 ;
-(void)setMeta_info:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

