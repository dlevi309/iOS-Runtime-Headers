/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@interface EKAvailabilityUtilities : NSObject
+(BOOL)showTypeAsBusy:(long long)arg1 ;
+(long long)summarizedAvailabilityTypeForSpans:(id)arg1 ;
+(BOOL)spansIncludeBusyPeriod:(id)arg1 ;
+(int)CALFreeBusyTypeFromEKAvailType:(long long)arg1 ;
+(id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2 ;
+(long long)_orderForType:(long long)arg1 ;
+(int)leastAvailabileFreeBusyTypeForArray:(id)arg1 ;
+(id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3 ;
@end

