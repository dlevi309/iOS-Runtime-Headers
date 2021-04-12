/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray, GEOMapServiceTraits;


@protocol GEOMapServiceSpatialPlaceLookupTicket <NSObject>
@property (nonatomic,readonly) NSArray * parameters; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(NSArray *)parameters;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2;
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3;

@end

