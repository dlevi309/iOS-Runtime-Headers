/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 networkMonitor:(id)arg3 ;
-(void)_queue_networkDidChange;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
@end

