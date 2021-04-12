/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADAccountAccessHandler
@required
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
-(BOOL)isAccountManaged:(id)arg1;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
-(void)reset;

@end

