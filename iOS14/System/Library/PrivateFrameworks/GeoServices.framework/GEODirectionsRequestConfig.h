/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>
#import <libobjc.A.dylib/GEOServiceRequestConfiguring.h>

@class NSNumber, GEODirectionsRequest, NSString;

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {

	NSNumber* _requestPriority;
	GEODirectionsRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)urlType;
-(id)serviceTypeNumber;
-(id)initWithRequest:(id)arg1 requestPriority:(id)arg2 ;
-(id)additionalHTTPHeaders;
-(id)additionalStatesForNetworkEvent;
-(unsigned long long)multipathServiceType;
-(id)additionalURLQueryItems;
-(SCD_Struct_GE91)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
@end

