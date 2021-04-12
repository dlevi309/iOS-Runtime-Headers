/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSPredicate, HMBulletinBoardNotificationServiceGroup, NSUUID, HMService, NSString, _HMContext;

@interface HMBulletinBoardNotification : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging> {

	HMFUnfairLock* _lock;
	BOOL _enabled;
	NSPredicate* _condition;
	HMBulletinBoardNotificationServiceGroup* _notificationServiceGroup;
	NSUUID* _uniqueIdentifier;
	NSUUID* _targetUUID;
	HMService* _service;
	NSString* _logID;
	_HMContext* _context;

}

@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                        //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * logID;                                                           //@synthesize logID=_logID - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) HMService * service;                                                      //@synthesize service=_service - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSPredicate * condition;                                                           //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) HMBulletinBoardNotificationServiceGroup * notificationServiceGroup;              //@synthesize notificationServiceGroup=_notificationServiceGroup - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)setCondition:(NSPredicate *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)init;
-(NSString *)logID;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)logIdentifier;
-(_HMContext *)context;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(NSPredicate *)condition;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)_commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleBulletinBoardNotificationUpdateNotification:(id)arg1 ;
-(HMBulletinBoardNotificationServiceGroup *)notificationServiceGroup;
-(void)_callBulletinBoardNotificationUpdatedDelegate;
-(NSUUID *)targetUUID;
-(void)__configureWithContext:(id)arg1 ;
-(void)_registerNotificationHandlers;
-(id)initWithEnabled:(BOOL)arg1 condition:(id)arg2 ;
-(HMService *)service;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

