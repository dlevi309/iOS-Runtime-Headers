/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

