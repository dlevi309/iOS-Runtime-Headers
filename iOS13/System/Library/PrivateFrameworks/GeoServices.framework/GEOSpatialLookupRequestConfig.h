/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@interface GEOSpatialLookupRequestConfig : GEOServiceRequestDefaultConfig {

	double _timeout;

}
-(unsigned long long)urlType;
-(SCD_Struct_GE94)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
@end

