/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MXMetaData : NSObject <NSSecureCoding> {

	NSString* _regionFormat;
	NSString* _osVersion;
	NSString* _deviceType;
	NSString* _applicationBuildVersion;
	NSString* _platformArchitecture;

}

@property (retain) NSString * regionFormat;                         //@synthesize regionFormat=_regionFormat - In the implementation block
@property (retain) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
@property (retain) NSString * deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (retain) NSString * applicationBuildVersion;              //@synthesize applicationBuildVersion=_applicationBuildVersion - In the implementation block
@property (retain) NSString * platformArchitecture;                 //@synthesize platformArchitecture=_platformArchitecture - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)deviceType;
-(id)JSONRepresentation;
-(NSString *)regionFormat;
-(void)setDeviceType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)osVersion;
-(id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 platformArchitecture:(id)arg5 ;
-(id)DictionaryRepresentation;
-(void)setRegionFormat:(NSString *)arg1 ;
-(NSString *)applicationBuildVersion;
-(void)setApplicationBuildVersion:(NSString *)arg1 ;
-(NSString *)platformArchitecture;
-(void)setPlatformArchitecture:(NSString *)arg1 ;
@end

