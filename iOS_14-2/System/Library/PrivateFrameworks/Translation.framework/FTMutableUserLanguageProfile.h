/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTUserLanguageProfile.h>

@class NSData, NSString;

@interface FTMutableUserLanguageProfile : FTUserLanguageProfile

@property (nonatomic,copy) NSData * profile_blob; 
@property (nonatomic,copy) NSString * profile_blob_version; 
@property (nonatomic,copy) NSString * profile_checksum; 
-(id)init;
-(NSData *)profile_blob;
-(void)setProfile_blob:(NSData *)arg1 ;
-(void)profile_blob:(/*^block*/id)arg1 ;
-(NSString *)profile_blob_version;
-(NSString *)profile_checksum;
-(void)setProfile_blob_version:(NSString *)arg1 ;
-(void)setProfile_checksum:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

