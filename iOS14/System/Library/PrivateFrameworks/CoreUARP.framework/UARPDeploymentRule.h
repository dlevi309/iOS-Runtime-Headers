/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/

#import <CoreUARP/CoreUARP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class NSObject, NSString, NSDate, NSArray, NSNumber;

@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding> {

	NSObject*<OS_os_log> _log;
	NSString* _currentISOCountryCode;
	NSDate* _goLiveDate;
	NSArray* _countryList;
	NSNumber* _rampPeriod;
	NSNumber* _deploymentLimit;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithConfig:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isDeploymentAllowedPerGoLiveDate;
-(BOOL)isDeploymentAllowedPerCountryList;
-(BOOL)isDeploymentAllowedPerRampPeriod;
-(BOOL)isDeploymentAllowedPerDeploymentLimit;
-(BOOL)isDeploymentAllowed:(id*)arg1 ;
@end

