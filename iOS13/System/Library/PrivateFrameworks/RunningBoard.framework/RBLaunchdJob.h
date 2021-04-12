/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


#import <RunningBoard/RunningBoard-Structs.h>
@class RBLaunchdJobLabel, BSMachPortTaskNameRight, NSString, NSArray, NSDictionary, RBSProcessExitStatus;

@interface RBLaunchdJob : NSObject {

	os_unfair_lock_s _lock;
	BOOL _lock_started;
	BOOL _lock_invalid;
	BOOL _disableASLR;
	BOOL _runAtLoad;
	BOOL _waitForDebugger;
	BOOL _buildDYLDClosure;
	RBLaunchdJobLabel* _label;
	BSMachPortTaskNameRight* _lock_taskNameRight;
	NSString* _executablePath;
	NSArray* _arguments;
	NSDictionary* _environment;
	NSArray* _machServices;
	NSString* _standardOutputPath;
	NSString* _standardErrorPath;
	NSString* _posixSpawnType;
	NSString* _managedPersona;

}

@property (nonatomic,copy,readonly) NSString * executablePath;                                 //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                                       //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSArray * machServices;                                    //@synthesize machServices=_machServices - In the implementation block
@property (nonatomic,copy,readonly) NSString * standardOutputPath;                             //@synthesize standardOutputPath=_standardOutputPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * standardErrorPath;                              //@synthesize standardErrorPath=_standardErrorPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * posixSpawnType;                                 //@synthesize posixSpawnType=_posixSpawnType - In the implementation block
@property (nonatomic,copy,readonly) NSString * managedPersona;                                 //@synthesize managedPersona=_managedPersona - In the implementation block
@property (nonatomic,readonly) BOOL disableASLR;                                               //@synthesize disableASLR=_disableASLR - In the implementation block
@property (nonatomic,readonly) BOOL runAtLoad;                                                 //@synthesize runAtLoad=_runAtLoad - In the implementation block
@property (nonatomic,readonly) BOOL waitForDebugger;                                           //@synthesize waitForDebugger=_waitForDebugger - In the implementation block
@property (nonatomic,copy,readonly) RBLaunchdJobLabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain,readonly) id<RBSProcessIdentifier> processIdentifier; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight;                 //@synthesize lock_taskNameRight=_lock_taskNameRight - In the implementation block
@property (nonatomic,retain,readonly) RBSProcessExitStatus * lastExitStatus; 
@property (nonatomic,readonly) BOOL buildDYLDClosure;                                          //@synthesize buildDYLDClosure=_buildDYLDClosure - In the implementation block
+(id)lastExitStatusForLabel:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_startJobLabel:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_stopJobLabel:(id)arg1 error:(out id*)arg2 ;
+(int)pidForJobLabel:(id)arg1 error:(out id*)arg2 ;
+(id)sharedPersonaManager;
+(id)newJobWithIdentity:(id)arg1 launchContext:(id)arg2 error:(out id*)arg3 ;
+(id)jobWithLabel:(id)arg1 launchdData:(launch_dataRef)arg2 error:(out id*)arg3 ;
+(BOOL)startJobLabel:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)invalidate;
-(id<RBSProcessIdentifier>)processIdentifier;
-(NSString *)executablePath;
-(NSArray *)arguments;
-(NSDictionary *)environment;
-(RBLaunchdJobLabel *)label;
-(NSString *)standardOutputPath;
-(NSString *)standardErrorPath;
-(NSString *)managedPersona;
-(NSArray *)machServices;
-(BSMachPortTaskNameRight *)taskNameRight;
-(BOOL)stopWithError:(out id*)arg1 ;
-(BOOL)waitForDebugger;
-(BOOL)disableASLR;
-(BOOL)startWithError:(out id*)arg1 ;
-(id)_initWithLabel:(id)arg1 executablePath:(id)arg2 arguments:(id)arg3 environment:(id)arg4 machServices:(id)arg5 standardOutputPath:(id)arg6 standardErrorPath:(id)arg7 posixSpawnType:(id)arg8 options:(unsigned long long)arg9 managedPersona:(id)arg10 ;
-(BOOL)_lock_acquireTaskNameRightForOperation:(id)arg1 error:(out id*)arg2 ;
-(RBSProcessExitStatus *)lastExitStatus;
-(BOOL)isRunningWithError:(out id*)arg1 ;
-(launch_dataRef)generateData;
-(NSString *)posixSpawnType;
-(BOOL)runAtLoad;
-(BOOL)buildDYLDClosure;
@end

