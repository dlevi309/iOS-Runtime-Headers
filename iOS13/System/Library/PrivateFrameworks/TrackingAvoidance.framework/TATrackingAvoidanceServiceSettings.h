/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TATrackingAvoidanceServiceSettings : NSObject {

	BOOL _enableTAFilterGeneral;
	BOOL _enableTAFilterVisits;
	BOOL _enableTAFilterSingleVisit;
	double _classificationTimeInterval;

}

@property (nonatomic,readonly) BOOL enableTAFilterGeneral;                     //@synthesize enableTAFilterGeneral=_enableTAFilterGeneral - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterVisits;                      //@synthesize enableTAFilterVisits=_enableTAFilterVisits - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterSingleVisit;                 //@synthesize enableTAFilterSingleVisit=_enableTAFilterSingleVisit - In the implementation block
@property (nonatomic,readonly) double classificationTimeInterval;              //@synthesize classificationTimeInterval=_classificationTimeInterval - In the implementation block
-(id)initWithDefaults;
-(id)initWithEnableTAFilterGeneral:(BOOL)arg1 enableTAFilterVisits:(BOOL)arg2 enableTAFilterSingleVisit:(BOOL)arg3 classificationTimeInterval:(double)arg4 ;
-(id)initWithEnableTAFilterGeneralOrDefault:(id)arg1 enableTAFilterVisitsOrDefault:(id)arg2 enableTAFilterSingleVisitOrDefault:(id)arg3 classificationTimeIntervalOrDefault:(id)arg4 ;
-(BOOL)enableTAFilterGeneral;
-(BOOL)enableTAFilterVisits;
-(BOOL)enableTAFilterSingleVisit;
-(double)classificationTimeInterval;
@end

