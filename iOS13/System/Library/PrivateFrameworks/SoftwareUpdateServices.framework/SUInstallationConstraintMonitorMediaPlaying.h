/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SUInstallationConstraintMonitorMediaPlaying : SUInstallationConstraintMonitorBase {

	BOOL _queue_mediaPlaying;
	NSObject*<OS_dispatch_queue> _mediaRemoteQueue;

}
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_handlePlaybackChangeNotification:(id)arg1 ;
-(void)_queue_pollSatisfied;
@end

