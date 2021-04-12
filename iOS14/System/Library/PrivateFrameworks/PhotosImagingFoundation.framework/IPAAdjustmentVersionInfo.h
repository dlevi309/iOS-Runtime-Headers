/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying> {

	NSString* _platform;
	NSString* _buildNumber;
	NSString* _appVersion;
	long long _schemaRevision;

}

@property (nonatomic,copy) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * buildNumber;                  //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                   //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) long long schemaRevision;              //@synthesize schemaRevision=_schemaRevision - In the implementation block
+(id)_systemBuildVersion;
+(id)systemBuildVersion;
+(id)_systemVersionPlistPath;
+(id)frameworkVersion;
+(id)_frameworkVersion;
+(id)currentVersionInfo;
+(id)versionInfoFromArchivalRepresentation:(id)arg1 ;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)platform;
-(NSString *)appVersion;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setBuildNumber:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)schemaRevision;
-(void)setSchemaRevision:(long long)arg1 ;
-(id)archivalRepresentation;
-(BOOL)isEqualToVersionInfo:(id)arg1 ;
@end

