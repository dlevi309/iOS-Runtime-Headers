/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@interface CaliTIPHandler : NSObject
+(void)initialize;
+(void)processMessage:(id)arg1 inCalendar:(id)arg2 ;
+(BOOL)logiTIPDetail;
+(void)setLogiTIPDetail:(BOOL)arg1 ;
+(void)processMessages:(id)arg1 inCalendar:(id)arg2 ;
+(BOOL)diffsAreImportant:(id)arg1 ;
+(id)debugStringForEvent:(id)arg1 ;
+(BOOL)isAddressMe:(id)arg1 forAccount:(id)arg2 ;
+(BOOL)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2 ;
+(id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2 ;
+(id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3 ;
+(BOOL)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3 ;
+(id)myAddressInAccount:(id)arg1 forEvent:(id)arg2 ;
@end

