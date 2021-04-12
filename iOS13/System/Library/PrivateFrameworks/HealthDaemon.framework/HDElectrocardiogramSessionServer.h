/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)remote_startWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_abortWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_abortSensorSession;
-(void)_queue_startWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_abortWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_notifyClientDidEndWithEndReason:(long long)arg1 error:(id)arg2 ;
-(void)_queue_notifyClientDidDetectContactAtDate:(id)arg1 ;
-(void)_queue_notifyClientDidDetectEmergencyCallbackModeWithEndDate:(id)arg1 ;
@end

