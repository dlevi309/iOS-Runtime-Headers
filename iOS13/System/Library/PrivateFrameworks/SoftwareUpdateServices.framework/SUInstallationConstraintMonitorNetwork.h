/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>
#import <libobjc.A.dylib/SUNetworkObserver.h>

@class SUNetworkMonitor, NSString;

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase <SUNetworkObserver> {

	SUNetworkMonitor* _queue_networkMonitor;
	BOOL _queue_hasNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 networkMonitor:(id)arg3 ;
-(void)_queue_networkDidChange;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
@end

