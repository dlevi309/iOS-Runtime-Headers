/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKDatabaseControlServer.h>

@class NSString;

@interface HDDatabaseControlServer : HDStandardTaskServer <HKDatabaseControlServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_getHealthDirectorySizeInBytesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_performMigrationWithCompletion:(/*^block*/id)arg1 ;
@end

