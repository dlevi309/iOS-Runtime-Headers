/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSPredicate, HMDBulletinBoardNotificationServiceGroup, NSUUID, HMDService, NSObject, HMFMessageDispatcher, NSString;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {

	BOOL _enabled;
	NSPredicate* _condition;
	HMDBulletinBoardNotificationServiceGroup* _notificationServiceGroup;
	NSUUID* _targetUUID;
	HMDService* _service;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                                       //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                       //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                                                    //@synthesize service=_service - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSPredicate * condition;                                                          //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) HMDBulletinBoardNotificationServiceGroup * notificationServiceGroup;              //@synthesize notificationServiceGroup=_notificationServiceGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)supportsBulletinNotificationGroup:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)condition;
-(BOOL)isEnabled;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDService *)service;
-(void)setCondition:(NSPredicate *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)dumpState;
-(NSUUID *)targetUUID;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMDBulletinBoardNotificationServiceGroup *)notificationServiceGroup;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerForCharacteristicNotifications;
-(void)configureMsgDispatcher:(id)arg1 ;
-(void)configureBulletinNotification;
-(void)registerNotificationHandlers;
-(void)_handleBulletinBoardNotificationCommitRequest:(id)arg1 ;
-(void)setNotificationServiceGroup:(HMDBulletinBoardNotificationServiceGroup *)arg1 ;
@end

