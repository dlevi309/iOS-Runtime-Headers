/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;
@class NSObject, NSUUID, HMFMessageDispatcher, HMDDevice, HMDUser, HMUserPresenceAuthorization, HMUserPresenceCompute, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, NSDate, HMDUserPresenceFeedRetryTimer, NSString;

@interface HMDUserPresenceFeedSession : HMFObject <HMFLogging, HMFTimerDelegate> {

	id<HMDUserPresenceFeedSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _targetUUID;
	HMFMessageDispatcher* _messageDispatcher;
	HMDDevice* _residentDevice;
	HMDUser* _user;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;
	HMDUserPresenceRegion* _presenceRegionStatus;
	HMDUserPresenceUpdateReason* _reason;
	NSDate* _statusChangeDate;
	NSUUID* _sessionID;
	HMDUserPresenceFeedRetryTimer* _statusUpdateRetryTimer;

}

@property (nonatomic,__weak,readonly) id<HMDUserPresenceFeedSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSUUID * targetUUID;                                                 //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;                            //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMDDevice * residentDevice;                                          //@synthesize residentDevice=_residentDevice - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) HMUserPresenceAuthorization * presenceAuthStatus;                    //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,readonly) HMUserPresenceCompute * presenceComputeStatus;                       //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
@property (nonatomic,readonly) HMDUserPresenceRegion * presenceRegionStatus;                        //@synthesize presenceRegionStatus=_presenceRegionStatus - In the implementation block
@property (nonatomic,retain) HMDUserPresenceUpdateReason * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDate * statusChangeDate;                                           //@synthesize statusChangeDate=_statusChangeDate - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDUserPresenceFeedRetryTimer * statusUpdateRetryTimer;                //@synthesize statusUpdateRetryTimer=_statusUpdateRetryTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)sessionID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDUserPresenceFeedSessionDelegate>)delegate;
-(void)_send;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)attributeDescriptions;
-(HMDUserPresenceUpdateReason *)reason;
-(HMDUser *)user;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(void)send;
-(void)setReason:(HMDUserPresenceUpdateReason *)arg1 ;
-(NSUUID *)targetUUID;
-(HMDDevice *)residentDevice;
-(void)dealloc;
-(HMDUserPresenceRegion *)presenceRegionStatus;
-(id)initWithDelegate:(id)arg1 workQueue:(id)arg2 targetUUID:(id)arg3 messageDispatcher:(id)arg4 residentDevice:(id)arg5 user:(id)arg6 presenceAuthStatus:(id)arg7 presenceComputeStatus:(id)arg8 presenceRegionStatus:(id)arg9 reason:(id)arg10 ;
-(HMDUserPresenceFeedRetryTimer *)statusUpdateRetryTimer;
-(void)_handleStatusUpdateMessageError:(id)arg1 responseTime:(double)arg2 ;
-(NSDate *)statusChangeDate;
-(void)_callDelegate;
-(void)setStatusUpdateRetryTimer:(HMDUserPresenceFeedRetryTimer *)arg1 ;
@end
