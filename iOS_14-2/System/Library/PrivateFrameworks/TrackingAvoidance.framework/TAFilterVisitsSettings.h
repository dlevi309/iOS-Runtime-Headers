/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSSet;

@interface TAFilterVisitsSettings : NSObject {

	double _maxSuspiciousDuration;
	double _minInterVisitDistance;
	unsigned long long _minNSigmaBetweenVisits;
	double _entryDisplayOnBudget;
	double _exitDisplayOnBudget;
	NSSet* _sensitiveLOITypes;
	double _minObservationInterval;

}

@property (nonatomic,readonly) double maxSuspiciousDuration;                           //@synthesize maxSuspiciousDuration=_maxSuspiciousDuration - In the implementation block
@property (nonatomic,readonly) double minInterVisitDistance;                           //@synthesize minInterVisitDistance=_minInterVisitDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long minNSigmaBetweenVisits;              //@synthesize minNSigmaBetweenVisits=_minNSigmaBetweenVisits - In the implementation block
@property (nonatomic,readonly) double entryDisplayOnBudget;                            //@synthesize entryDisplayOnBudget=_entryDisplayOnBudget - In the implementation block
@property (nonatomic,readonly) double exitDisplayOnBudget;                             //@synthesize exitDisplayOnBudget=_exitDisplayOnBudget - In the implementation block
@property (nonatomic,readonly) NSSet * sensitiveLOITypes;                              //@synthesize sensitiveLOITypes=_sensitiveLOITypes - In the implementation block
@property (nonatomic,readonly) double minObservationInterval;                          //@synthesize minObservationInterval=_minObservationInterval - In the implementation block
+(BOOL)_isLegacyHardware;
+(id)defaultVisitsSensitiveLOITypes;
+(double)_determinDefaultEntryDisplayOnBudget;
+(double)_determinDefaultExitDisplayOnBudget;
-(double)entryDisplayOnBudget;
-(double)maxSuspiciousDuration;
-(double)minInterVisitDistance;
-(double)minObservationInterval;
-(unsigned long long)minNSigmaBetweenVisits;
-(id)sensitiveLOITypesToString;
-(NSSet *)sensitiveLOITypes;
-(double)exitDisplayOnBudget;
-(id)initWithMaxSuspiciousDuration:(double)arg1 minInterVisitDistance:(double)arg2 minNSigmaBetweenVisits:(unsigned long long)arg3 entryDisplayOnBudget:(double)arg4 exitDisplayOnBudget:(double)arg5 sensitiveLOITypes:(id)arg6 minObservationInterval:(double)arg7 ;
-(id)initWithDefaults;
-(id)initWithMaxSuspiciousDurationOrDefault:(id)arg1 minInterVisitDistanceOrDefault:(id)arg2 minNSigmaBetweenVisitsOrDefault:(id)arg3 entryDisplayOnBudgetOrDefault:(id)arg4 exitDisplayOnBudgetOrDefault:(id)arg5 sensitiveLOITypesOrDefault:(id)arg6 minObservationIntervalOrDefault:(id)arg7 ;
@end

