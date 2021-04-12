/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOComposedRoute, NSArray, NSNumber, NSDictionary;


@protocol GEODirectionServiceTicket <NSObject>
@property (nonatomic,copy) id requestCallback; 
@property (nonatomic,readonly) BOOL isReroute; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) NSArray * waypoints; 
@property (nonatomic,copy,readonly) NSNumber * requestPriority; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) BOOL isDoom; 
@required
-(void)setRequestCallback:(/*^block*/id)arg1;
-(BOOL)isDoom;
-(NSNumber *)requestPriority;
-(NSArray *)waypoints;
-(GEOComposedRoute *)originalRoute;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(BOOL)isReroute;
-(id)requestCallback;
-(void)cancel;

@end

