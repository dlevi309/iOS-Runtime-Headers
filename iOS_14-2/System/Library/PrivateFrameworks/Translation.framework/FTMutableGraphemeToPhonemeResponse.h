/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTGraphemeToPhonemeResponse.h>

@class NSString, NSArray;

@interface FTMutableGraphemeToPhonemeResponse : FTGraphemeToPhonemeResponse

@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSArray * phonemes; 
@property (assign,nonatomic) BOOL is_pron_guessed; 
@property (nonatomic,copy) NSString * g2p_version; 
@property (nonatomic,copy) NSString * g2p_model_version; 
@property (nonatomic,copy) NSString * phoneset_version; 
@property (nonatomic,copy) NSArray * aot_token_prons; 
@property (nonatomic,copy) NSArray * jit_token_prons; 
-(id)init;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(void)setPhonemes:(NSArray *)arg1 ;
-(BOOL)is_pron_guessed;
-(void)setIs_pron_guessed:(BOOL)arg1 ;
-(NSString *)g2p_version;
-(void)setG2p_version:(NSString *)arg1 ;
-(NSString *)g2p_model_version;
-(void)setG2p_model_version:(NSString *)arg1 ;
-(NSString *)phoneset_version;
-(void)setPhoneset_version:(NSString *)arg1 ;
-(NSArray *)aot_token_prons;
-(void)setAot_token_prons:(NSArray *)arg1 ;
-(NSArray *)jit_token_prons;
-(void)setJit_token_prons:(NSArray *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(NSArray *)phonemes;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

