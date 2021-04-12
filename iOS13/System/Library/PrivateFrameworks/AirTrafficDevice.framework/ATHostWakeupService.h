/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>

@class ATEnvironmentMonitor, NSString;

@interface ATHostWakeupService : NSObject <ATEnvironmentMonitorObserver> {

	ATEnvironmentMonitor* _environmentMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)stop;
-(void)start;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(void)_wakeupHost:(id)arg1 ;
-(void)sendWakeupToAllHostsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendWakeupToHostWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getWakeableHostsWithCompletion:(/*^block*/id)arg1 ;
@end

