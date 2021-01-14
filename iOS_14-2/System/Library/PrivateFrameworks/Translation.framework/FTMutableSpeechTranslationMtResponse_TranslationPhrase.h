/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationMtResponse_TranslationPhrase.h>

@class NSString;

@interface FTMutableSpeechTranslationMtResponse_TranslationPhrase : FTSpeechTranslationMtResponse_TranslationPhrase

@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) NSString * translation_phrase; 
@property (nonatomic,copy) NSString * meta_info; 
@property (assign,nonatomic) BOOL low_confidence; 
-(float)confidence;
-(id)init;
-(void)setConfidence:(float)arg1 ;
-(NSString *)meta_info;
-(NSString *)translation_phrase;
-(BOOL)low_confidence;
-(void)setLow_confidence:(BOOL)arg1 ;
-(void)setTranslation_phrase:(NSString *)arg1 ;
-(void)setMeta_info:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

