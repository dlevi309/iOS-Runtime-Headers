/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class HMFUnfairLock, HMEventTrigger, NSUUID, _HMContext, NSString;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	BOOL _endEvent;
	HMEventTrigger* _eventTrigger;
	NSUUID* _uniqueIdentifier;
	_HMContext* _context;
	NSUUID* _uuid;
	NSString* _triggerType;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,getter=isEndEvent,nonatomic) BOOL endEvent;                                 //@synthesize endEvent=_endEvent - In the implementation block
@property (nonatomic,readonly) NSString * triggerType;                                        //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic,__weak) HMEventTrigger * eventTrigger;                            //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(BOOL)sharedTriggerActivationSupportedForHome:(id)arg1 ;
+(BOOL)isSupportedForHome:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setContext:(_HMContext *)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSString *)triggerType;
-(void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2 ;
-(HMEventTrigger *)eventTrigger;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)_updateTriggerType;
-(void)setEventTrigger:(HMEventTrigger *)arg1 ;
-(BOOL)isEndEvent;
-(void)setEndEvent:(BOOL)arg1 ;
@end

