/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDCameraStreamSessionID, IDSService, IDSSession, NSString;

@interface HMDCameraIDSSessionHandler : HMFObject <HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraStreamSessionID* _sessionID;
	IDSService* _idsStreamService;
	IDSSession* _idsSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) IDSService * idsStreamService;                       //@synthesize idsStreamService=_idsStreamService - In the implementation block
@property (nonatomic,retain) IDSSession * idsSession;                               //@synthesize idsSession=_idsSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraStreamSessionID *)sessionID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)dealloc;
-(void)startKeepAlive;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 ;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(IDSService *)idsStreamService;
@end

