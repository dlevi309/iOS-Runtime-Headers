/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray, GEOMapServiceTraits;


@protocol GEOMapServiceSpatialPlaceLookupTicket <NSObject>
@property (nonatomic,readonly) NSArray * parameters; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)cancel;
-(NSArray *)parameters;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2;

@end

