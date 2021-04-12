/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithEnableTAFilterGeneral:(BOOL)arg1 enableTAFilterVisits:(BOOL)arg2 enableTAFilterSingleVisit:(BOOL)arg3 classificationTimeInterval:(double)arg4 ;
-(double)classificationTimeInterval;
-(BOOL)enableTAFilterGeneral;
-(id)initWithEnableTAFilterGeneralOrDefault:(id)arg1 enableTAFilterVisitsOrDefault:(id)arg2 enableTAFilterSingleVisitOrDefault:(id)arg3 classificationTimeIntervalOrDefault:(id)arg4 ;
-(BOOL)enableTAFilterVisits;
-(BOOL)enableTAFilterSingleVisit;
-(id)initWithDefaults;
@end

