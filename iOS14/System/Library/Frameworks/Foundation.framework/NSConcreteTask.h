/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTask.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface NSConcreteTask : NSTask {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	long long _suspendCount;
	int _pid;
	AQ __exitRunningInfo;
	char _qos;
	AB _isSpawnedProcessDisclaimed;

}
-(void)setQualityOfService:(long long)arg1 ;
-(void)launch;
-(int)_procid;
-(BOOL)suspend;
-(int)processIdentifier;
-(id)init;
-(void)interrupt;
-(void)setArguments:(id)arg1 ;
-(long long)suspendCount;
-(long long)terminationReason;
-(/*^block*/id)terminationHandler;
-(void)terminate;
-(id)launchPath;
-(id)currentDirectoryPath;
-(id)arguments;
-(void)setSpawnedProcessDisclaimed:(BOOL)arg1 ;
-(id)standardInput;
-(id)standardError;
-(void)waitUntilExit;
-(void)terminateTask;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(long long)_platformExitInformation;
-(int)terminationStatus;
-(BOOL)launchWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(void)setStartsNewProcessGroup:(BOOL)arg1 ;
-(BOOL)isSpawnedProcessDisclaimed;
-(void)setPreferredArchitectures:(id)arg1 ;
-(void)setLaunchPath:(id)arg1 ;
-(id)standardOutput;
-(id)taskDictionary;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)setEnvironment:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setStandardOutput:(id)arg1 ;
-(void)setTaskDictionary:(id)arg1 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(BOOL)isRunning;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(id)environment;
-(long long)qualityOfService;
-(BOOL)resume;
-(void)dealloc;
@end

