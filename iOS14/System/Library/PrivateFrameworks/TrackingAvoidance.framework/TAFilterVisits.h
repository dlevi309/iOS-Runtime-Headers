/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TAFilterVisits : NSObject
+(id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
+(id)getEntryAddressSetInTAVisitSnapshot:(id)arg1 usingSettings:(id)arg2 ;
+(id)getIntersectionOfFirstSet:(id)arg1 andSecondSet:(id)arg2 ;
+(BOOL)shouldDetectWithStore:(id)arg1 settings:(id)arg2 ;
+(id)getSuspiciousDeviceAdvertisementsFromVisitSnapshot:(id)arg1 toVisitSnapshot:(id)arg2 settings:(id)arg3 currentClockTime:(id)arg4 ;
+(unsigned long long)identifyDetectionTypeWithStore:(id)arg1 settings:(id)arg2 ;
+(BOOL)isReasonableSpeedOfTravelFrom:(id)arg1 to:(id)arg2 ;
+(id)getExitAddressSetInTAVisitSnapshot:(id)arg1 usingSettings:(id)arg2 ;
+(id)getAddressSetInTAVisitSnapshot:(id)arg1 ;
@end

