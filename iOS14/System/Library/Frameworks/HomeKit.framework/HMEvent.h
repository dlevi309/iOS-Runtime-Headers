/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)uuid;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2 ;
-(HMEventTrigger *)eventTrigger;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)triggerType;
-(void)setEndEvent:(BOOL)arg1 ;
-(void)_registerNotificationHandlers;
-(void)_updateTriggerType;
-(void)setEventTrigger:(HMEventTrigger *)arg1 ;
-(BOOL)isEndEvent;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithDict:(id)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
@end

