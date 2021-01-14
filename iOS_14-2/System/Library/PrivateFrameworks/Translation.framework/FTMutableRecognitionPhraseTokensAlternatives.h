/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionPhraseTokensAlternatives.h>

@class NSArray;

@interface FTMutableRecognitionPhraseTokensAlternatives : FTRecognitionPhraseTokensAlternatives

@property (nonatomic,copy) NSArray * tok_phrases; 
@property (assign,nonatomic) BOOL has_unsuggested_alternatives; 
-(id)init;
-(void)setTok_phrases:(NSArray *)arg1 ;
-(BOOL)has_unsuggested_alternatives;
-(void)setHas_unsuggested_alternatives:(BOOL)arg1 ;
-(NSArray *)tok_phrases;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

