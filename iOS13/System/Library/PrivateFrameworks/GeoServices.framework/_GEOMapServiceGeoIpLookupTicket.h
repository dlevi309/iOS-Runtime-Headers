/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceGeoIpLookupTicket.h>

@class GEOPDPlaceRequest, NSString;

@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket <GEOMapServiceGeoIpLookupTicket> {

	GEOPDPlaceRequest* _placeRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) SCD_Struct_GE2 dataRequestKind; 
-(void)cancel;
-(SCD_Struct_GE2)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 handlerQueue:(id)arg4 ;
-(id)initWithIpAddress:(id)arg1 ;
@end

