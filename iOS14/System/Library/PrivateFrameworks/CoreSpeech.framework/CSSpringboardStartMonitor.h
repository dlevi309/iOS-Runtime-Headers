/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpringboardStartMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isSpringBoardStarted;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(BOOL)isSpringboardStarted;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveSpringboardStarted:(BOOL)arg1 ;
-(void)_didReceiveSpringboardStartedInQueue:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withStarted:(BOOL)arg2 ;
-(BOOL)_checkSpringBoardStarted;
@end

