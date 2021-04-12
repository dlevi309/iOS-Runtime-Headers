/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTUserAcousticProfile.h>

@class NSString, NSData;

@interface FTMutableUserAcousticProfile : FTUserAcousticProfile

@property (nonatomic,copy) NSString * acoustic_profile_version; 
@property (nonatomic,copy) NSData * acoustic_profile_blob; 
@property (nonatomic,copy) NSString * profile_checksum; 
-(id)init;
-(NSString *)profile_checksum;
-(void)setProfile_checksum:(NSString *)arg1 ;
-(NSData *)acoustic_profile_blob;
-(NSString *)acoustic_profile_version;
-(void)setAcoustic_profile_version:(NSString *)arg1 ;
-(void)setAcoustic_profile_blob:(NSData *)arg1 ;
-(void)acoustic_profile_blob:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

