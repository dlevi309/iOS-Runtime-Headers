/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@interface SUInstallationConstraintMonitorRestoreFromITunes : SUInstallationConstraintMonitorBase {

	BOOL _queue_isRestoring;
	int _queue_startNotifyToken;
	int _queue_endNotifyToken;

}
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_queue_beganRestoring;
-(void)_queue_endedRestoring;
-(void)_queue_setRestoring:(BOOL)arg1 ;
@end

