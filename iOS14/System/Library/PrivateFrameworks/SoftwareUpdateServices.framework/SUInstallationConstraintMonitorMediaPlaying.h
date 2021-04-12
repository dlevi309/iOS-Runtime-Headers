/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

