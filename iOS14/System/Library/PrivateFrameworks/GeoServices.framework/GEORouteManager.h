/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEORouteManagerDelegate;
@class GEOApplicationAuditToken;

@interface GEORouteManager : NSObject {

	id<GEORouteManagerDelegate> _delegate;
	GEOApplicationAuditToken* _auditToken;

}

@property (assign,nonatomic,__weak) id<GEORouteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
+(void)setShouldRequestServerLatencyInfo:(BOOL)arg1 ;
-(void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3 ;
-(void)fetchDirectionsForTicket:(id)arg1 networkActivity:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<GEORouteManagerDelegate>)delegate;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)setDelegate:(id<GEORouteManagerDelegate>)arg1 ;
-(void)didReceiveRoutes:(id)arg1 ;
-(id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2 ;
-(void)handleResponse:(id)arg1 fromRequest:(id)arg2 forTicket:(id)arg3 ;
@end

