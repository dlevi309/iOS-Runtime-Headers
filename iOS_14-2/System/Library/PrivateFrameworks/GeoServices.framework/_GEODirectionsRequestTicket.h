/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEODirectionServiceTicket.h>

@class GEOComposedRoute, NSArray, NSNumber, NSDictionary, _GEODirectionsServiceRequestBuilder, GEODirectionsRequest, NSError, GEODirectionsRequester, NSString;

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {

	_GEODirectionsServiceRequestBuilder* _requestBuilder;
	GEODirectionsRequest* _request;
	BOOL _isReroute;
	GEOComposedRoute* _originalRoute;
	NSArray* _waypoints;
	BOOL _isDoom;
	NSNumber* _requestPriority;
	BOOL _active;
	BOOL _canceled;
	NSError* _previousError;
	NSDictionary* _userInfo;
	/*^block*/id _requestCallback;
	GEODirectionsRequester* _directionsRequester;

}

@property (assign,nonatomic) BOOL isReroute;                                                   //@synthesize isReroute=_isReroute - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * originalRoute;                                 //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                                              //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) BOOL active;                                                    //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                                  //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) NSNumber * requestPriority;                                         //@synthesize requestPriority=_requestPriority - In the implementation block
@property (assign,nonatomic) BOOL isDoom;                                                      //@synthesize isDoom=_isDoom - In the implementation block
@property (assign,nonatomic,__weak) GEODirectionsRequester * directionsRequester;              //@synthesize directionsRequester=_directionsRequester - In the implementation block
@property (nonatomic,copy) id requestCallback;                                                 //@synthesize requestCallback=_requestCallback - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequestCallback:(id)arg1 ;
-(BOOL)active;
-(BOOL)isDoom;
-(void)setOriginalRoute:(GEOComposedRoute *)arg1 ;
-(NSNumber *)requestPriority;
-(NSArray *)waypoints;
-(BOOL)canceled;
-(void)setRequestPriority:(NSNumber *)arg1 ;
-(NSString *)description;
-(GEOComposedRoute *)originalRoute;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)setIsDoom:(BOOL)arg1 ;
-(void)setWaypoints:(NSArray *)arg1 ;
-(BOOL)isReroute;
-(void)_submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(GEODirectionsRequester *)directionsRequester;
-(id)requestCallback;
-(id)initWithRequestBuilder:(id)arg1 directionsRequester:(id)arg2 ;
-(void)setDirectionsRequester:(GEODirectionsRequester *)arg1 ;
-(void)setIsReroute:(BOOL)arg1 ;
-(void)cancel;
@end

