/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTask.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSPort;

@interface NSConcreteTask : NSTask {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	NSPort* _tmpPort;
	long long _suspendCount;
	int _pid;
	AQ __exitRunningInfo;
	char _qos;
	AB _isSpawnedProcessDisclaimed;

}
-(id)init;
-(void)dealloc;
-(BOOL)resume;
-(int)processIdentifier;
-(id)arguments;
-(id)currentDirectoryPath;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(id)environment;
-(void)setArguments:(id)arg1 ;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(id)launchPath;
-(void)setLaunchPath:(id)arg1 ;
-(BOOL)launchWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)terminationHandler;
-(int)terminationStatus;
-(long long)terminationReason;
-(BOOL)isRunning;
-(void)launch;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)setEnvironment:(id)arg1 ;
-(void)interrupt;
-(void)terminate;
-(BOOL)suspend;
-(long long)suspendCount;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)setSpawnedProcessDisclaimed:(BOOL)arg1 ;
-(BOOL)isSpawnedProcessDisclaimed;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(long long)_platformExitInformation;
-(void)waitUntilExit;
-(void)setPreferredArchitectures:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setTaskDictionary:(id)arg1 ;
-(id)taskDictionary;
-(void)terminateTask;
-(int)_procid;
-(void)setStartsNewProcessGroup:(BOOL)arg1 ;
@end

