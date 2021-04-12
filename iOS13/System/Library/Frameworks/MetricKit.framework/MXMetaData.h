/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MXMetaData : NSObject <NSSecureCoding> {

	NSString* _regionFormat;
	NSString* _osVersion;
	NSString* _deviceType;
	NSString* _applicationBuildVersion;

}

@property (readonly) NSString * regionFormat;                         //@synthesize regionFormat=_regionFormat - In the implementation block
@property (readonly) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
@property (readonly) NSString * deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (readonly) NSString * applicationBuildVersion;              //@synthesize applicationBuildVersion=_applicationBuildVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceType;
-(NSString *)osVersion;
-(id)toDictionary;
-(id)JSONRepresentation;
-(id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 ;
-(id)DictionaryRepresentation;
-(NSString *)regionFormat;
-(NSString *)applicationBuildVersion;
@end

