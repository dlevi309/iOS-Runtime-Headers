/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@class CARSessionStatus, NSString;

@interface SUInstallationConstraintMonitorCarplay : SUInstallationConstraintMonitorBase <CARSessionObserving> {

	BOOL _queue_CarplayConnected;
	CARSessionStatus* _queue_carSessionStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)sessionDidConnect:(id)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_queue_carplayDidChange;
@end

