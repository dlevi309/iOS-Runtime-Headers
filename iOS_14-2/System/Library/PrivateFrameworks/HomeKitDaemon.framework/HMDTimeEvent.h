/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class HMDBackgroundTaskAgentTimer, NSString, NSSet, NSUUID;

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	BOOL _repetitive;
	HMDBackgroundTaskAgentTimer* _btaTimer;

}

@property (nonatomic,readonly) BOOL repetitive;                                               //@synthesize repetitive=_repetitive - In the implementation block
@property (nonatomic,readonly) HMDBackgroundTaskAgentTimer * btaTimer;                        //@synthesize btaTimer=_btaTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidAbsoluteDateComponents:(id)arg1 ;
+(BOOL)isValidOffsetDateComponents:(id)arg1 ;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_initialize;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(id)_nextTimerDate;
-(void)_updateRepetitive;
-(HMDBackgroundTaskAgentTimer *)btaTimer;
-(BOOL)repetitive;
-(void)_reactivateTriggerAfterDelay;
@end

