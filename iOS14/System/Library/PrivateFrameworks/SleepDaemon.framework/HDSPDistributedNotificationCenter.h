/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSleepNotificationPublisher.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, NSString;

@interface HDSPDistributedNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)tearDownNotificationForEventIdentifier:(id)arg1 ;
-(void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2 ;
-(void)tearDownNotifications;
-(id)initWithEnvironment:(id)arg1 ;
-(HDSPEnvironment *)environment;
@end

