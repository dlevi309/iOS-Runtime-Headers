/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface STCity : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _unlocalizedName;
	NSString* _countryName;
	NSString* _unlocalizedCountryName;
	NSString* _timeZone;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _alCityID;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)alCityValue;
-(id)_initWithName:(id)arg1 unlocalizedName:(id)arg2 countryName:(id)arg3 unlocalizedCountryName:(id)arg4 timeZone:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 alCityID:(id)arg8 ;
-(id)initWithCoder:(id)arg1 ;
@end

