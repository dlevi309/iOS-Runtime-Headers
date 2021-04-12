/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTKeywordFinderResponse.h>

@class NSString, FTRecognitionSausage, NSArray;

@interface FTMutableKeywordFinderResponse : FTKeywordFinderResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) FTRecognitionSausage * corrected_sausage; 
@property (nonatomic,copy) NSArray * n_best_list; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(FTRecognitionSausage *)corrected_sausage;
-(void)setCorrected_sausage:(FTRecognitionSausage *)arg1 ;
-(NSArray *)n_best_list;
-(void)setN_best_list:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

