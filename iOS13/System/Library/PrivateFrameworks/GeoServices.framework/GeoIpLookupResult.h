/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GeoIpLookupResult : NSObject {

	NSString* _ipAddress;
	SCD_Struct_GE32 _latLong;
	NSString* _countryCode;
	NSString* _timeZone;

}

@property (nonatomic,readonly) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE32 latLong;              //@synthesize latLong=_latLong - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * timeZone;                  //@synthesize timeZone=_timeZone - In the implementation block
-(NSString *)timeZone;
-(NSString *)countryCode;
-(NSString *)ipAddress;
-(id)initWithGEOPDPlaceResponse:(id)arg1 ;
-(SCD_Struct_GE32)latLong;
@end

