/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/


@protocol SubCalValidationTaskDelegate <SubCalDATaskTrustDelegate>
@required
-(void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 document:(id)arg4 calendarData:(id)arg5;
-(void)subCalValidationTask:(id)arg1 downloadProgressedTo:(long long)arg2 outOf:(long long)arg3;

@end

