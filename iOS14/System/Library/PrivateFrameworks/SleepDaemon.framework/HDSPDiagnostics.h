/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, HKSPObserverSet, HKSPDiagnostics, NSString;

@interface HDSPDiagnostics : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	HKSPObserverSet* _providers;
	HKSPDiagnostics* _diagnostics;

}

@property (nonatomic,readonly) HKSPObserverSet * providers;                       //@synthesize providers=_providers - In the implementation block
@property (nonatomic,readonly) HKSPDiagnostics * diagnostics;                     //@synthesize diagnostics=_diagnostics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(HKSPDiagnostics *)diagnostics;
-(HKSPObserverSet *)providers;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)removeProvider:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(void)addProvider:(id)arg1 ;
-(void)_logDiagnostics:(id)arg1 ;
@end

