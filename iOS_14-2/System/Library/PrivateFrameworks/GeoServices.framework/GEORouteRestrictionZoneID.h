/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEORouteRestrictionZoneID : NSObject <NSSecureCoding> {

	unsigned long long _identifier;
	unsigned long long _version;
	long long _restrictionType;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long restrictionType;                  //@synthesize restrictionType=_restrictionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithGeoRestrictedZoneId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)restrictionType;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(unsigned long long)version;
@end

