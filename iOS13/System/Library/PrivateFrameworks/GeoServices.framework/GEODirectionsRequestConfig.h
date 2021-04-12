/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>
#import <libobjc.A.dylib/GEOServiceRequestConfiguring.h>

@class NSNumber, NSString;

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {

	NSNumber* _requestPriority;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)multipathServiceType;
-(unsigned long long)urlType;
-(SCD_Struct_GE2)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)serviceTypeNumber;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1 ;
-(id)initWithRequestPriority:(id)arg1 ;
@end

