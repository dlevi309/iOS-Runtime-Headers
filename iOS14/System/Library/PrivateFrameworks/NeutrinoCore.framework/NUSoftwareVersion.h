/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying> {

	NSString* _platform;
	NSString* _buildNumber;
	NSString* _appVersion;
	long long _schemaRevision;

}

@property (copy) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (copy) NSString * buildNumber;                  //@synthesize buildNumber=_buildNumber - In the implementation block
@property (copy) NSString * appVersion;                   //@synthesize appVersion=_appVersion - In the implementation block
@property (assign) long long schemaRevision;              //@synthesize schemaRevision=_schemaRevision - In the implementation block
+(id)_systemBuildVersion;
+(id)systemBuildVersion;
+(id)currentSoftwareVersion;
+(id)_systemVersionPlistPath;
+(id)frameworkVersion;
+(id)_frameworkVersion;
+(id)softwareVersionFromArchivalRepresentation:(id)arg1 ;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)platform;
-(NSString *)appVersion;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setBuildNumber:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToSoftwareVersion:(id)arg1 ;
-(long long)schemaRevision;
-(void)setSchemaRevision:(long long)arg1 ;
-(id)archivalRepresentation;
@end

