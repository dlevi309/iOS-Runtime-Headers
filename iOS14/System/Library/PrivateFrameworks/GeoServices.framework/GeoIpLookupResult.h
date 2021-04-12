/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GeoIpLookupResult : NSObject {

	NSString* _ipAddress;
	GEOCoarseLocationLatLng _latLong;
	NSString* _countryCode;
	NSString* _timeZone;

}

@property (nonatomic,readonly) NSString * ipAddress;                         //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng latLong;              //@synthesize latLong=_latLong - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * timeZone;                          //@synthesize timeZone=_timeZone - In the implementation block
-(NSString *)timeZone;
-(NSString *)countryCode;
-(GEOCoarseLocationLatLng)latLong;
-(id)initWithGEOPDPlaceResponse:(id)arg1 ;
-(NSString *)ipAddress;
@end

