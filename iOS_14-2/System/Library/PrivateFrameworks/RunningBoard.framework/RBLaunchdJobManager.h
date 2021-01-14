/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBLaunchdInterfacing;
#import <RunningBoard/RunningBoard-Structs.h>
@class NSMutableDictionary, RBPersonaManager, NSMutableOrderedSet;

@interface RBLaunchdJobManager : NSObject {

	NSMutableDictionary* _lock_jobsByIdentifier;
	os_unfair_lock_s _lock;
	id<RBLaunchdInterfacing> _launchdInterface;
	RBPersonaManager* _personaManager;
	NSMutableOrderedSet* _lock_reslideIdentities;

}
+(id)lastExitStatusForLabel:(id)arg1 error:(out id*)arg2 ;
-(id)_createAndSubmitExtensionJob:(id)arg1 UUID:(id)arg2 error:(id*)arg3 ;
-(id)_createLaunchdJobWithIdentity:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)initWithLaunchdInterface:(id)arg1 personaManager:(id)arg2 ;
-(id)_generateDataWithIdentity:(id)arg1 context:(id)arg2 ;
-(BOOL)removeJobWithInstance:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_isRunningBoardLaunched:(id)arg1 ;
-(id)createAndLaunchWithIdentity:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(void)invokeOnProcessDeath:(id)arg1 handler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)_addReslideIdentityIfNeeded:(id)arg1 exitStatus:(id)arg2 ;
-(BOOL)_removeJobWithInstance:(id)arg1 orJob:(id)arg2 error:(out id*)arg3 ;
-(id)synchronizeJobs;
@end

