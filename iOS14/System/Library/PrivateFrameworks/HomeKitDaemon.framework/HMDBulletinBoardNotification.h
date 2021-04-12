/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSPredicate, HMDBulletinBoardNotificationServiceGroup, NSUUID, NSObject, HMDService, HMFMessageDispatcher, NSString;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {

	id<HMFLocking> _lock;
	BOOL _enabled;
	NSPredicate* _condition;
	HMDBulletinBoardNotificationServiceGroup* _notificationServiceGroup;
	NSUUID* _messageTargetUUID;
	NSObject*<OS_dispatch_queue> _messageReceiveQueue;
	HMDService* _service;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                                                    //@synthesize service=_service - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSPredicate * condition;                                                          //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) HMDBulletinBoardNotificationServiceGroup * notificationServiceGroup;              //@synthesize notificationServiceGroup=_notificationServiceGroup - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                                     //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue;                               //@synthesize messageReceiveQueue=_messageReceiveQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)supportsBulletinNotificationGroup:(id)arg1 ;
-(void)setCondition:(NSPredicate *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)init;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logIdentifier;
-(id)initWithService:(id)arg1 ;
-(id)attributeDescriptions;
-(NSPredicate *)condition;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(HMDBulletinBoardNotificationServiceGroup *)notificationServiceGroup;
-(HMDService *)service;
-(void)dealloc;
-(void)registerForCharacteristicNotifications;
-(void)configureMsgDispatcher:(id)arg1 ;
-(void)configureBulletinNotification;
-(void)registerNotificationHandlers;
-(void)_handleBulletinBoardNotificationCommitRequest:(id)arg1 ;
-(void)setNotificationServiceGroup:(HMDBulletinBoardNotificationServiceGroup *)arg1 ;
@end

