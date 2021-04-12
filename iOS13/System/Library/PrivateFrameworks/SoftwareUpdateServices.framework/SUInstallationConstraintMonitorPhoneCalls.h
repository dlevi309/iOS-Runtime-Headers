/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class TUCallCenter;

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase {

	TUCallCenter* _queue_callCenter;
	BOOL _queue_satisfied;
	BOOL _inSpringBoard;

}
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 callCenter:(id)arg3 inSpringBoard:(BOOL)arg4 onExistingPhoneCall:(BOOL)arg5 ;
-(void)_callStatusChanged;
-(void)_queue_noteOnExistingPhoneCallDidChange:(BOOL)arg1 ;
@end

