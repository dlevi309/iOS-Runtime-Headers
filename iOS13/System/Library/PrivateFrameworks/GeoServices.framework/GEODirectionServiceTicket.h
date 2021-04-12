/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEODirectionsRequest, GEOComposedRoute, NSArray, NSNumber, NSDictionary;


@protocol GEODirectionServiceTicket <NSObject>
@property (nonatomic,readonly) GEODirectionsRequest * request; 
@property (nonatomic,readonly) BOOL isReroute; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) NSArray * waypoints; 
@property (nonatomic,copy,readonly) NSNumber * requestPriority; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) BOOL isDoom; 
@required
-(void)cancel;
-(GEODirectionsRequest *)request;
-(NSNumber *)requestPriority;
-(GEOComposedRoute *)originalRoute;
-(NSArray *)waypoints;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(BOOL)isReroute;
-(BOOL)isDoom;

@end

