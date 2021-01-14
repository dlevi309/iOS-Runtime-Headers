/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationInfo.h>

@class FTRecognitionSausage, NSArray;

@interface FTMutableSpeechTranslationInfo : FTSpeechTranslationInfo

@property (nonatomic,copy) FTRecognitionSausage * raw_sausage; 
@property (nonatomic,copy) NSArray * raw_nbest_choices; 
-(id)init;
-(FTRecognitionSausage *)raw_sausage;
-(void)setRaw_sausage:(FTRecognitionSausage *)arg1 ;
-(NSArray *)raw_nbest_choices;
-(void)setRaw_nbest_choices:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

