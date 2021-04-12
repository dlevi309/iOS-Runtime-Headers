/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKElectrocardiogramSessionServerInterface.h>

@protocol OS_dispatch_queue;
@class HKElectrocardiogramSessionConfiguration, NSObject, NSString;

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer <HKElectrocardiogramSessionServerInterface> {

	HKElectrocardiogramSessionConfiguration* _sessionConfiguration;
	NSObject*<OS_dispatch_queue> _queue;
	long long _sessionState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_startWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_abortWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_abortSensorSession;
-(void)_queue_startWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_abortWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_notifyClientDidEndWithEndReason:(long long)arg1 error:(id)arg2 ;
-(void)_queue_notifyClientDidDetectContactAtDate:(id)arg1 ;
-(void)_queue_notifyClientDidDetectEmergencyCallbackModeWithEndDate:(id)arg1 ;
@end

