/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/

#import <libobjc.A.dylib/ICSLoggingDelegate.h>

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
+(id)sharedLogger;
-(void)logICSMessage:(id)arg1 atLevel:(long long)arg2 ;
-(void)registerWithiCalendar;
@end

