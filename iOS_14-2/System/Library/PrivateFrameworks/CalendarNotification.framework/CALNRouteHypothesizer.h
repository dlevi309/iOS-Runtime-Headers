/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

@class EKTravelEngineHypothesis;


@protocol CALNRouteHypothesizer <CADSyntheticRouteHypothesizer>
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
@property (nonatomic,readonly) id updateHandler; 
@required
-(EKTravelEngineHypothesis *)currentHypothesis;
-(id)updateHandler;
-(void)requestRefresh;
-(void)stopHypothesizing;
-(unsigned long long)state;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1;
-(void)didPostUINotification:(unsigned long long)arg1;

@end

