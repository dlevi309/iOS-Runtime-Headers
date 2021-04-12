/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

@class EKTravelEngineHypothesis;


@protocol CALNRouteHypothesizer <CADSyntheticRouteHypothesizer>
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
@property (nonatomic,readonly) id updateHandler; 
@required
-(unsigned long long)state;
-(id)updateHandler;
-(EKTravelEngineHypothesis *)currentHypothesis;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1;
-(void)stopHypothesizing;
-(void)requestRefresh;
-(void)didPostUINotification:(unsigned long long)arg1;

@end

