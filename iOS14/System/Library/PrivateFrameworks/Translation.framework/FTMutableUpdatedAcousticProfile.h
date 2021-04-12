/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTUpdatedAcousticProfile.h>

@class NSString, FTUserAcousticProfile;

@interface FTMutableUpdatedAcousticProfile : FTUpdatedAcousticProfile

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) FTUserAcousticProfile * updated_acoustic_profile; 
-(id)init;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(FTUserAcousticProfile *)updated_acoustic_profile;
-(void)setUpdated_acoustic_profile:(FTUserAcousticProfile *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

