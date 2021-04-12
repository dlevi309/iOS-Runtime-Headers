/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@protocol GEOMapItem;
@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	id<GEOMapItem> _mapItemToRefine;

}
-(id)description;
-(void)cancel;
-(id)initWithTraits:(id)arg1 ;
-(SCD_Struct_GE2)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(id)resultSectionHeader;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 ;
-(void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 refinedHandler:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 ;
@end

