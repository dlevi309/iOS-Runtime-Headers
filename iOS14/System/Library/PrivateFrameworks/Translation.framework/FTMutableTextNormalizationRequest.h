/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextNormalizationRequest.h>

@class NSString;

@interface FTMutableTextNormalizationRequest : FTTextNormalizationRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) int nbest_variants_max; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(int)nbest_variants_max;
-(void)setNbest_variants_max:(int)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

