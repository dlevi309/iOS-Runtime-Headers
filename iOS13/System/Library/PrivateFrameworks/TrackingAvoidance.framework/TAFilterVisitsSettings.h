/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSSet;

@interface TAFilterVisitsSettings : NSObject {

	double _maxSuspiciousDuration;
	double _minInterVisitDistance;
	unsigned long long _minNSigmaBetweenVisits;
	double _entryDisplayOnBudget;
	double _exitDisplayOnBudget;
	NSSet* _enabledLoiTypes;
	double _minObservationInterval;

}

@property (nonatomic,readonly) double maxSuspiciousDuration;                           //@synthesize maxSuspiciousDuration=_maxSuspiciousDuration - In the implementation block
@property (nonatomic,readonly) double minInterVisitDistance;                           //@synthesize minInterVisitDistance=_minInterVisitDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long minNSigmaBetweenVisits;              //@synthesize minNSigmaBetweenVisits=_minNSigmaBetweenVisits - In the implementation block
@property (nonatomic,readonly) double entryDisplayOnBudget;                            //@synthesize entryDisplayOnBudget=_entryDisplayOnBudget - In the implementation block
@property (nonatomic,readonly) double exitDisplayOnBudget;                             //@synthesize exitDisplayOnBudget=_exitDisplayOnBudget - In the implementation block
@property (nonatomic,readonly) NSSet * enabledLoiTypes;                                //@synthesize enabledLoiTypes=_enabledLoiTypes - In the implementation block
@property (nonatomic,readonly) double minObservationInterval;                          //@synthesize minObservationInterval=_minObservationInterval - In the implementation block
+(id)defaultVisitsEnabledLoiTypes;
-(id)initWithDefaults;
-(double)entryDisplayOnBudget;
-(double)exitDisplayOnBudget;
-(unsigned long long)minNSigmaBetweenVisits;
-(double)minInterVisitDistance;
-(id)enabledLoiTypesToString;
-(NSSet *)enabledLoiTypes;
-(double)maxSuspiciousDuration;
-(double)minObservationInterval;
-(id)initWithMaxSuspiciousDuration:(double)arg1 minInterVisitDistance:(double)arg2 minNSigmaBetweenVisits:(unsigned long long)arg3 entryDisplayOnBudget:(double)arg4 exitDisplayOnBudget:(double)arg5 enabledLoiTypes:(id)arg6 minObservationInterval:(double)arg7 ;
-(id)initWithMaxSuspiciousDurationOrDefault:(id)arg1 minInterVisitDistanceOrDefault:(id)arg2 minNSigmaBetweenVisitsOrDefault:(id)arg3 entryDisplayOnBudgetOrDefault:(id)arg4 exitDisplayOnBudgetOrDefault:(id)arg5 enabledLoiTypesOrDefault:(id)arg6 minObservationIntervalOrDefault:(id)arg7 ;
@end

