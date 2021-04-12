/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceGeoIpLookupTicket.h>

@class GEOPDPlaceRequest, NSString;

@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket <GEOMapServiceGeoIpLookupTicket> {

	GEOPDPlaceRequest* _placeRequest;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE91 dataRequestKind; 
-(id)initWithIpAddress:(id)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 handlerQueue:(id)arg4 ;
-(void)cancel;
-(SCD_Struct_GE91)dataRequestKind;
@end

