/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class HMDBackgroundTaskAgentTimer, NSString, NSUUID, NSSet;

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
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidAbsoluteDateComponents:(id)arg1 ;
+(BOOL)isValidOffsetDateComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(void)timerFired:(id)arg1 ;
-(void)_initialize;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(id)_nextTimerDate;
-(void)_reactiveTriggerAfterDelay;
-(void)_updateRepetitive;
-(HMDBackgroundTaskAgentTimer *)btaTimer;
-(BOOL)repetitive;
@end

