/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteHypothesisMonitor, GEORouteHypothesis, GEOComposedWaypoint, GEORouteAttributes, NSDate, GEOMapServiceTraits;

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding> {

	GEORouteHypothesisMonitor* _monitor;
	GEORouteHypothesis* _currentHypothesis;
	double _updatedTimeStamp;
	BOOL _prediction;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;
	int _transportType;
	GEORouteAttributes* _routeAttributes;
	NSDate* _arrivalDate;
	NSDate* _expirationDate;
	GEOMapServiceTraits* _traits;
	double _valueRefreshTimeStamp;
	long long _rowId;

}

@property (nonatomic,readonly) BOOL isStaleToRefresh; 
@property (nonatomic,readonly) BOOL isStaleToPurgeFromDisk; 
@property (nonatomic,readonly) GEORouteHypothesisMonitor * monitor;               //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) GEORouteHypothesis * currentHypothesis;              //@synthesize currentHypothesis=_currentHypothesis - In the implementation block
@property (assign,nonatomic) BOOL prediction;                                     //@synthesize prediction=_prediction - In the implementation block
@property (nonatomic,readonly) int transportType;                                 //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy) GEORouteAttributes * routeAttributes;                  //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) double updatedTimeStamp;                             //@synthesize updatedTimeStamp=_updatedTimeStamp - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * origin;                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                              //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                      //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double valueRefreshTimeStamp;                        //@synthesize valueRefreshTimeStamp=_valueRefreshTimeStamp - In the implementation block
@property (assign,nonatomic) long long rowId;                                     //@synthesize rowId=_rowId - In the implementation block
+(BOOL)supportsSecureCoding;
-(GEOMapServiceTraits *)traits;
-(GEORouteAttributes *)routeAttributes;
-(GEOComposedWaypoint *)origin;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(GEORouteHypothesis *)currentHypothesis;
-(GEORouteHypothesisMonitor *)monitor;
-(void)setValueRefreshTimeStamp:(double)arg1 ;
-(BOOL)aggresiveArrivalIsAfterExpiration;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCurrentHypothesis:(GEORouteHypothesis *)arg1 ;
-(int)transportType;
-(BOOL)prediction;
-(void)commonInit;
-(NSDate *)arrivalDate;
-(id)description;
-(long long)rowId;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canBePersistedToDisk;
-(void)setPrediction:(BOOL)arg1 ;
-(double)valueRefreshTimeStamp;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 expirationDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6 routeAttributes:(id)arg7 clientInfo:(id)arg8 ;
-(void)setRowId:(long long)arg1 ;
-(BOOL)isStaleToRefresh;
-(GEOComposedWaypoint *)destination;
-(double)updatedTimeStamp;
-(BOOL)isStaleToPurgeFromDisk;
-(void)setUpdatedTimeStamp:(double)arg1 ;
@end

