/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpringboardStartMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isSpringBoardStarted;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(BOOL)_checkSpringBoardStarted;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isSpringboardStarted;
-(void)_didReceiveSpringboardStarted:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withStarted:(BOOL)arg2 ;
-(void)_didReceiveSpringboardStartedInQueue:(BOOL)arg1 ;
@end

