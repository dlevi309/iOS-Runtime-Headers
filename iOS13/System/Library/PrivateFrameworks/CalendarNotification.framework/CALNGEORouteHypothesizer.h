/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNRouteHypothesizer.h>

@class EKTravelEngineHypothesis, CADRouteHypothesis, GEORouteHypothesizer, NSString;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer> {

	CADRouteHypothesis* currentCADRouteHypothesis;
	GEORouteHypothesizer* _routeHypothesizer;

}

@property (nonatomic,readonly) GEORouteHypothesizer * routeHypothesizer;                  //@synthesize routeHypothesizer=_routeHypothesizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CADRouteHypothesis * currentCADRouteHypothesis; 
@property (nonatomic,readonly) id updateHandler; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
-(unsigned long long)state;
-(id)updateHandler;
-(EKTravelEngineHypothesis *)currentHypothesis;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopHypothesizing;
-(void)requestRefresh;
-(void)didPostUINotification:(unsigned long long)arg1 ;
-(void)setCurrentCADRouteHypothesis:(CADRouteHypothesis *)arg1 ;
-(CADRouteHypothesis *)currentCADRouteHypothesis;
-(GEORouteHypothesizer *)routeHypothesizer;
-(id)initWithRouteHypothesizer:(id)arg1 ;
@end

