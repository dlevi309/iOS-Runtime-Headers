/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TAVisitDetectionMetrics : NSObject <NSSecureCoding> {

	double _distanceToPreviousVisit;
	double _residualDistanceToPreviousVisit;
	unsigned long long _nSigmaBetweenVisits;

}

@property (nonatomic,readonly) double distanceToPreviousVisit;                      //@synthesize distanceToPreviousVisit=_distanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) double residualDistanceToPreviousVisit;              //@synthesize residualDistanceToPreviousVisit=_residualDistanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) unsigned long long nSigmaBetweenVisits;              //@synthesize nSigmaBetweenVisits=_nSigmaBetweenVisits - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3 ;
-(double)distanceToPreviousVisit;
-(double)residualDistanceToPreviousVisit;
-(unsigned long long)nSigmaBetweenVisits;
@end

