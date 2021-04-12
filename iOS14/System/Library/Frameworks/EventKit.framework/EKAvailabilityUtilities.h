/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@interface EKAvailabilityUtilities : NSObject
+(int)CALFreeBusyTypeFromEKAvailType:(long long)arg1 ;
+(long long)_orderForType:(long long)arg1 ;
+(id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2 ;
+(int)leastAvailabileFreeBusyTypeForArray:(id)arg1 ;
+(long long)summarizedAvailabilityTypeForSpans:(id)arg1 ;
+(id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3 ;
+(BOOL)spansIncludeBusyPeriod:(id)arg1 ;
+(BOOL)showTypeAsBusy:(long long)arg1 ;
@end

