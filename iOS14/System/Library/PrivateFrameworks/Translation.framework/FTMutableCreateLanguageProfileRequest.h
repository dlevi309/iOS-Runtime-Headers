/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTCreateLanguageProfileRequest.h>

@class NSString, NSArray, FTUserLanguageProfile;

@interface FTMutableCreateLanguageProfileRequest : FTCreateLanguageProfileRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSArray * user_data; 
@property (nonatomic,copy) FTUserLanguageProfile * user_language_profile; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(FTUserLanguageProfile *)user_language_profile;
-(void)setUser_language_profile:(FTUserLanguageProfile *)arg1 ;
-(NSArray *)user_data;
-(void)setUser_data:(NSArray *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

