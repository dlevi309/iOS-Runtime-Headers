/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class NSNumber, NSString, NSSet, NSUUID;

@interface HMDCharacteristicThresholdRangeEvent : HMDCharacteristicEventBase <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	NSNumber* _min;
	NSNumber* _max;

}

@property (nonatomic,retain) NSNumber * min;                                                  //@synthesize min=_min - In the implementation block
@property (nonatomic,retain) NSNumber * max;                                                  //@synthesize max=_max - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)setMin:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)min;
-(NSString *)description;
-(NSNumber *)max;
-(id)initWithCoder:(id)arg1 ;
-(void)setMax:(NSNumber *)arg1 ;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)analyticsTriggerEventData;
-(BOOL)_evaluateNewValue:(id)arg1 ;
-(BOOL)_isValueInRange:(id)arg1 ;
@end

