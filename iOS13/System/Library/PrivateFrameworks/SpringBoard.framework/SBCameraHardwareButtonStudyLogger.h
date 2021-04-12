/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

