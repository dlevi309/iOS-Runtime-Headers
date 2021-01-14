/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TAScanRequestSettings : NSObject <NSSecureCoding> {

	double _minVisitEntryDisplayOnDuration;
	double _minInterVisitDisplayOnDuration;
	double _interVisitScanDelay;
	unsigned long long _maxInterVisitScanRequests;

}

@property (nonatomic,readonly) double minVisitEntryDisplayOnDuration;                     //@synthesize minVisitEntryDisplayOnDuration=_minVisitEntryDisplayOnDuration - In the implementation block
@property (nonatomic,readonly) double minInterVisitDisplayOnDuration;                     //@synthesize minInterVisitDisplayOnDuration=_minInterVisitDisplayOnDuration - In the implementation block
@property (nonatomic,readonly) double interVisitScanDelay;                                //@synthesize interVisitScanDelay=_interVisitScanDelay - In the implementation block
@property (nonatomic,readonly) unsigned long long maxInterVisitScanRequests;              //@synthesize maxInterVisitScanRequests=_maxInterVisitScanRequests - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMinVisitEntryDisplayOnDurationOrDefault:(id)arg1 minInterVisitDisplayOnDurationOrDefault:(id)arg2 interVisitScanDelayOrDefault:(id)arg3 maxInterVisitScanRequestsOrDefault:(id)arg4 ;
-(double)minVisitEntryDisplayOnDuration;
-(double)interVisitScanDelay;
-(double)minInterVisitDisplayOnDuration;
-(id)initWithMinVisitEntryDisplayOnDuration:(double)arg1 minInterVisitDisplayOnDuration:(double)arg2 interVisitScanDelay:(double)arg3 maxInterVisitScanRequests:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)maxInterVisitScanRequests;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

