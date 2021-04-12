/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	/*^block*/id _preSubmitUpdateRequestBlock;
	/*^block*/id _retryRequestForErrorBlock;

}
-(void)applyToCorrectedSearch:(id)arg1 ;
-(id)resultSectionHeader;
-(id)description;
-(void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 refinedHandler:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(void)cancel;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 preSubmitUpdateRequestBlock:(/*^block*/id)arg4 retryForErrorBlock:(/*^block*/id)arg5 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 preSubmitUpdateRequestBlock:(/*^block*/id)arg3 retryForErrorBlock:(/*^block*/id)arg4 ;
-(SCD_Struct_GE91)dataRequestKind;
@end

