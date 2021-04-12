/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)systemBuildVersion;
+(id)_systemBuildVersion;
+(id)frameworkVersion;
+(id)_frameworkVersion;
+(id)currentVersionInfo;
+(id)_systemVersionPlistPath;
+(id)versionInfoFromArchivalRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)platform;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
-(id)archivalRepresentation;
-(BOOL)isEqualToVersionInfo:(id)arg1 ;
-(long long)schemaRevision;
-(void)setSchemaRevision:(long long)arg1 ;
@end

