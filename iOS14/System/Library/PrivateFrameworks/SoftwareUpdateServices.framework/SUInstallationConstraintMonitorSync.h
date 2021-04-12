/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>
#import <libobjc.A.dylib/ATConnectionDelegate.h>

@class ATConnection, NSString;

@interface SUInstallationConstraintMonitorSync : SUInstallationConstraintMonitorBase <ATConnectionDelegate> {

	BOOL _queue_isSyncing;
	ATConnection* _queue_airTrafficConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_queue_initilizaSyncState;
-(void)_queue_setSyncing:(BOOL)arg1 ;
@end

