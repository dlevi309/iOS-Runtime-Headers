/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNRouteHypothesizer.h>

@class EKTravelEngineHypothesis, CADRouteHypothesis, GEORouteHypothesizer, NSString;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer> {

	CADRouteHypothesis* currentCADRouteHypothesis;
	GEORouteHypothesizer* _routeHypothesizer;

}

@property (nonatomic,readonly) GEORouteHypothesizer * routeHypothesizer;                  //@synthesize routeHypothesizer=_routeHypothesizer - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
@property (nonatomic,readonly) id updateHandler; 
@property (nonatomic,retain) CADRouteHypothesis * currentCADRouteHypothesis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKTravelEngineHypothesis *)currentHypothesis;
-(GEORouteHypothesizer *)routeHypothesizer;
-(id)updateHandler;
-(CADRouteHypothesis *)currentCADRouteHypothesis;
-(void)requestRefresh;
-(void)setCurrentCADRouteHypothesis:(CADRouteHypothesis *)arg1 ;
-(void)stopHypothesizing;
-(id)initWithRouteHypothesizer:(id)arg1 ;
-(unsigned long long)state;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)didPostUINotification:(unsigned long long)arg1 ;
@end

