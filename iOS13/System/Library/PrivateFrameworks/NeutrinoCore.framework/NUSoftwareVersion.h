/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)systemBuildVersion;
+(id)_systemBuildVersion;
+(id)frameworkVersion;
+(id)_frameworkVersion;
+(id)_systemVersionPlistPath;
+(id)currentSoftwareVersion;
+(id)softwareVersionFromArchivalRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)platform;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
-(id)archivalRepresentation;
-(long long)schemaRevision;
-(void)setSchemaRevision:(long long)arg1 ;
-(BOOL)isEqualToSoftwareVersion:(id)arg1 ;
@end

