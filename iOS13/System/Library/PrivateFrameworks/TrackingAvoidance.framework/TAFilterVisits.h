/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TAFilterVisits : NSObject
+(id)getEntryAddressSetInTAPoiSnapshot:(id)arg1 usingSettings:(id)arg2 ;
+(id)getIntersectionOfFirstSet:(id)arg1 andSecondSet:(id)arg2 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
+(BOOL)shouldDetectWithStore:(id)arg1 settings:(id)arg2 ;
+(BOOL)isReasonableSpeedOfTravelFrom:(id)arg1 to:(id)arg2 ;
+(id)getExitAddressSetInTAPoiSnapshot:(id)arg1 usingSettings:(id)arg2 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
+(id)getAddressSetInTAPoiSnapshot:(id)arg1 ;
@end

