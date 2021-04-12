/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKFitnessMachineConnectionServerInterface.h>

@class HDFitnessMachineManager, NSString;

@interface HDFitnessMachineConnectionServer : HDStandardTaskServer <HKFitnessMachineConnectionServerInterface> {

	HDFitnessMachineManager* _fitnessMachineManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)remote_markClientReady;
-(void)remote_registerClient:(id)arg1 ;
-(void)remote_endFitnessMachineConnection;
-(void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 ;
-(void)remote_simulateDisconnect;
@end

