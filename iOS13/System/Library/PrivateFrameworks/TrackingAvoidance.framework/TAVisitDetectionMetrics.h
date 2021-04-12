/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TAVisitDetectionMetrics : NSObject {

	double _distanceToPreviousVisit;
	double _residualDistanceToPreviousVisit;
	unsigned long long _nSigmaBetweenVisits;

}

@property (nonatomic,readonly) double distanceToPreviousVisit;                      //@synthesize distanceToPreviousVisit=_distanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) double residualDistanceToPreviousVisit;              //@synthesize residualDistanceToPreviousVisit=_residualDistanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) unsigned long long nSigmaBetweenVisits;              //@synthesize nSigmaBetweenVisits=_nSigmaBetweenVisits - In the implementation block
-(id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3 ;
-(double)distanceToPreviousVisit;
-(double)residualDistanceToPreviousVisit;
-(unsigned long long)nSigmaBetweenVisits;
@end

