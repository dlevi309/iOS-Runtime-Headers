/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDCameraSnapshotSessionID, IDSService, HMFOSTransaction, NSString;

@interface HMDCameraSnapshotIDSStream : HMFObject <IDSServiceDelegate, HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraSnapshotSessionID* _sessionID;
	IDSService* _idsProxyService;
	HMFOSTransaction* _snapshotStreamTransaction;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) IDSService * idsProxyService;                            //@synthesize idsProxyService=_idsProxyService - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * snapshotStreamTransaction;              //@synthesize snapshotStreamTransaction=_snapshotStreamTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraSnapshotSessionID *)sessionID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 ;
-(IDSService *)idsProxyService;
-(HMFOSTransaction *)snapshotStreamTransaction;
-(void)setSnapshotStreamTransaction:(HMFOSTransaction *)arg1 ;
@end

