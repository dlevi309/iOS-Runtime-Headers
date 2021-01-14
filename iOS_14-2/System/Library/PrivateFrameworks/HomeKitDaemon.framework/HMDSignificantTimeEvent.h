/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class NSString, NSDateComponents, NSSet, NSUUID;

@interface HMDSignificantTimeEvent : HMDTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	os_unfair_lock_s _lock;
	NSString* _significantEvent;
	NSDateComponents* _offset;

}

@property (retain) NSString * significantEvent;                                               //@synthesize significantEvent=_significantEvent - In the implementation block
@property (retain) NSDateComponents * offset;                                                 //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(NSDateComponents *)offset;
-(NSString *)description;
-(void)setOffset:(NSDateComponents *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)significantEvent;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)_nextTimerDate;
-(id)analyticsTriggerEventData;
@end

