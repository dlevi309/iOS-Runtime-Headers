/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)stop;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(void)sendWakeupToHostWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendWakeupToAllHostsWithCompletion:(/*^block*/id)arg1 ;
-(void)_wakeupHost:(id)arg1 ;
-(void)getWakeableHostsWithCompletion:(/*^block*/id)arg1 ;
@end

