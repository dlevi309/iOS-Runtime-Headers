/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isAvailable;
-(void)_stopMonitoring;
-(void)_availabilityChanged;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withNetworkAvailability:(BOOL)arg2 ;
@end

