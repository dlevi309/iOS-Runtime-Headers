/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
@interface TAScanRequestSettings : NSObject {

	double _minVisitEntryDisplayOnDuration;
	double _minInterVisitDisplayOnDuration;
	double _interVisitScanDelay;
	unsigned long long _maxInterVisitScanRequests;

}

@property (nonatomic,readonly) double minVisitEntryDisplayOnDuration;                     //@synthesize minVisitEntryDisplayOnDuration=_minVisitEntryDisplayOnDuration - In the implementation block
@property (nonatomic,readonly) double minInterVisitDisplayOnDuration;                     //@synthesize minInterVisitDisplayOnDuration=_minInterVisitDisplayOnDuration - In the implementation block
@property (nonatomic,readonly) double interVisitScanDelay;                                //@synthesize interVisitScanDelay=_interVisitScanDelay - In the implementation block
@property (nonatomic,readonly) unsigned long long maxInterVisitScanRequests;              //@synthesize maxInterVisitScanRequests=_maxInterVisitScanRequests - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMinVisitEntryDisplayOnDurationOrDefault:(id)arg1 minInterVisitDisplayOnDurationOrDefault:(id)arg2 interVisitScanDelayOrDefault:(id)arg3 maxInterVisitScanRequestsOrDefault:(id)arg4 ;
-(double)minVisitEntryDisplayOnDuration;
-(double)minInterVisitDisplayOnDuration;
-(double)interVisitScanDelay;
-(unsigned long long)maxInterVisitScanRequests;
-(id)initWithMinVisitEntryDisplayOnDuration:(double)arg1 minInterVisitDisplayOnDuration:(double)arg2 interVisitScanDelay:(double)arg3 maxInterVisitScanRequests:(unsigned long long)arg4 ;
@end

