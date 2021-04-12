/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class BKSApplicationStateMonitor, SLGNotificationActivatedLogger;

@interface SBCameraHardwareButtonStudyLogger : NSObject {

	BKSApplicationStateMonitor* _processMonitor;
	SLGNotificationActivatedLogger* _logger;

}
-(id)init;
-(void)dealloc;
-(void)logButtonEvent:(IOHIDEventRef)arg1 ;
-(void)logPocketState:(long long)arg1 ;
-(void)_startProcessMonitor;
-(void)_stopProcessMonitor;
@end

