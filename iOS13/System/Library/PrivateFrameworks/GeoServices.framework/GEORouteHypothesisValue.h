/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteHypothesisMonitor, GEORouteHypothesis, GEOComposedWaypoint, NSDate, GEOMapServiceTraits;

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding> {

	GEORouteHypothesisMonitor* _monitor;
	GEORouteHypothesis* _currentHypothesis;
	double _updatedTimeStamp;
	BOOL _prediction;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;
	int _transportType;
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
@property (assign,nonatomic) int transportType;                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) double updatedTimeStamp;                             //@synthesize updatedTimeStamp=_updatedTimeStamp - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * origin;                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                              //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                      //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double valueRefreshTimeStamp;                        //@synthesize valueRefreshTimeStamp=_valueRefreshTimeStamp - In the implementation block
@property (assign,nonatomic) long long rowId;                                     //@synthesize rowId=_rowId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEORouteHypothesisMonitor *)monitor;
-(NSDate *)expirationDate;
-(GEOComposedWaypoint *)destination;
-(GEOComposedWaypoint *)origin;
-(int)transportType;
-(void)commonInit;
-(NSDate *)arrivalDate;
-(GEOMapServiceTraits *)traits;
-(void)setTransportType:(int)arg1 ;
-(void)setRowId:(long long)arg1 ;
-(BOOL)canBePersistedToDisk;
-(long long)rowId;
-(double)updatedTimeStamp;
-(void)setUpdatedTimeStamp:(double)arg1 ;
-(BOOL)aggresiveArrivalIsAfterExpiration;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 expirationDate:(id)arg5 traceName:(id)arg6 traits:(id)arg7 ;
-(BOOL)isStaleToRefresh;
-(BOOL)isStaleToPurgeFromDisk;
-(GEORouteHypothesis *)currentHypothesis;
-(void)setCurrentHypothesis:(GEORouteHypothesis *)arg1 ;
-(BOOL)prediction;
-(void)setPrediction:(BOOL)arg1 ;
-(double)valueRefreshTimeStamp;
-(void)setValueRefreshTimeStamp:(double)arg1 ;
@end

