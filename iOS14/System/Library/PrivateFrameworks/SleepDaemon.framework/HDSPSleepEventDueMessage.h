/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <SleepDaemon/HDSPSleepMessage.h>

@class HKSPSleepEvent;

@interface HDSPSleepEventDueMessage : HDSPSleepMessage {

	HKSPSleepEvent* _event;

}

@property (nonatomic,copy,readonly) HKSPSleepEvent * event;              //@synthesize event=_event - In the implementation block
-(unsigned long long)messageType;
-(void)encodeWithCoder:(id)arg1 ;
-(HKSPSleepEvent *)event;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEvent:(id)arg1 syncAnchor:(id)arg2 ;
@end

