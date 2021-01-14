/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>
#import <libobjc.A.dylib/SUKeybagInterfaceObserver.h>

@class SUKeybagInterface, BSTimer, NSString;

@interface SUInstallationConstraintMonitorForBatteryDiskAndKeybag : SUInstallationConstraintMonitorBase <SUKeybagInterfaceObserver> {

	SUKeybagInterface* _queue_keybag;
	BSTimer* _queue_timer;
	unsigned long long _queue_deltaSpaceNeeded;
	BOOL _queue_diskSatisfied;
	BOOL _queue_keybagSatisfied;
	BOOL _queue_passcodeSatisfied;
	BOOL _queue_batterySatisfied;

}

@property (nonatomic,readonly) unsigned long long deltaSpaceNeeded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_queue_pollSatisfied;
-(void)keybagInterface:(id)arg1 hasPasscodeSetDidChange:(BOOL)arg2 ;
-(void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(BOOL)arg2 ;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 pollDuration:(double)arg3 keybag:(id)arg4 ;
-(BOOL)_queue_evaluateBattery;
-(BOOL)_queue_evaluateDisk;
-(BOOL)_queue_evaluateKeybag;
-(BOOL)_queue_evaluatePasscodeLocked;
-(unsigned long long)deltaSpaceNeeded;
-(void)refreshConstraints;
@end

