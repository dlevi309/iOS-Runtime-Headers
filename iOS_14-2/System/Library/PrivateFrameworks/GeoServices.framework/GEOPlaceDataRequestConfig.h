/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {

	double _timeout;
	unsigned long long _urlType;
	NSNumber* _requestPriority;
	unsigned long long _multipathServiceType;

}
-(unsigned long long)urlType;
-(id)serviceTypeNumber;
-(double)timeout;
-(id)additionalHTTPHeaders;
-(unsigned long long)multipathServiceType;
-(id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3 ;
-(SCD_Struct_GE91)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
@end

