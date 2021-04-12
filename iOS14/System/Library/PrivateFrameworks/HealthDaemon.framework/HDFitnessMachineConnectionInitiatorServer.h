/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKFitnessMachineConnectionInitiatorServerInterface.h>

@protocol HDFitnessMachineConnectionInitiatorProtocol;
@class NSString;

@interface HDFitnessMachineConnectionInitiatorServer : HDStandardTaskServer <HKFitnessMachineConnectionInitiatorServerInterface> {

	id<HDFitnessMachineConnectionInitiatorProtocol> _connectionInitiatorServer;

}

@property (nonatomic,readonly) id<HDFitnessMachineConnectionInitiatorProtocol> connectionInitiatorServer;              //@synthesize connectionInitiatorServer=_connectionInitiatorServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id<HDFitnessMachineConnectionInitiatorProtocol>)connectionInitiatorServer;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)remote_registerConnectionInitiatorClient:(id)arg1 ;
-(void)remote_simulateAccept;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 ;
-(void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 ;
@end

