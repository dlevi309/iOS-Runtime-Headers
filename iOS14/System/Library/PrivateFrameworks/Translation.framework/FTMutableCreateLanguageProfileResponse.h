/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTCreateLanguageProfileResponse.h>

@class NSString, FTUserLanguageProfile;

@interface FTMutableCreateLanguageProfileResponse : FTCreateLanguageProfileResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) FTUserLanguageProfile * user_language_profile; 
@property (assign,nonatomic) BOOL incomplete_profile; 
@property (assign,nonatomic) BOOL recreate_apg_prons; 
-(id)init;
-(FTUserLanguageProfile *)user_language_profile;
-(void)setUser_language_profile:(FTUserLanguageProfile *)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(BOOL)incomplete_profile;
-(void)setIncomplete_profile:(BOOL)arg1 ;
-(BOOL)recreate_apg_prons;
-(void)setRecreate_apg_prons:(BOOL)arg1 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

