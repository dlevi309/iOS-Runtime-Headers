/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;

}
-(void)performSubmitWithHandler:(/*^block*/id)arg1 timeout:(double)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)cancel;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(SCD_Struct_GE91)dataRequestKind;
@end

