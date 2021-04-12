/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<GEORouteManagerDelegate>)delegate;
-(void)setDelegate:(id<GEORouteManagerDelegate>)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)didReceiveRoutes:(id)arg1 traffic:(id)arg2 ;
-(id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2 ;
-(void)handleResponse:(id)arg1 forTicket:(id)arg2 ;
-(void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3 ;
-(void)fetchDirectionsForTicket:(id)arg1 networkActivity:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

