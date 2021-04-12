/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface _MKRouteETA : NSObject {

	int _status;
	double _distance;
	unsigned long long _transportType;
	double _travelTime;
	double _responseTime;

}

@property (assign,nonatomic) int status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double distance;                               //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double travelTime;                             //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) double responseTime;                         //@synthesize responseTime=_responseTime - In the implementation block
+(id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 status:(int)arg4 ;
+(id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setTransportType:(unsigned long long)arg1 ;
-(unsigned long long)transportType;
-(double)responseTime;
-(void)setStatus:(int)arg1 ;
-(int)status;
@end

