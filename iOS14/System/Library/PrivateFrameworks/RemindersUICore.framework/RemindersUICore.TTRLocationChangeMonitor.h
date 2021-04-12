/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface RemindersUICore.TTRLocationChangeMonitor : NSObject <CLLocationManagerDelegate> {

	 locationChange;
	 lastResult;
	 locationManager;
	 timerInterval;
	 hasStarted;
	 state;
	 locationChangePassthroughSubject;

}
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id)init;
-(void)timerFired;
-(void)dealloc;
@end

