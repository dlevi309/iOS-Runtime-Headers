/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPEventRecordMessage.h>

@class NSDate;

@interface HDSPConfirmWakeUpIDSMessage : HDSPEventRecordMessage {

	NSDate* _wakeUpConfirmedUntilDate;

}

@property (nonatomic,readonly) NSDate * wakeUpConfirmedDate; 
@property (nonatomic,readonly) NSDate * wakeUpConfirmedUntilDate;              //@synthesize wakeUpConfirmedUntilDate=_wakeUpConfirmedUntilDate - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)wakeUpConfirmedUntilDate;
-(id)succinctDescriptionBuilder;
-(NSDate *)wakeUpConfirmedDate;
-(id)initWithWakeUpConfirmedDate:(id)arg1 wakeUpConfirmedUntilDate:(id)arg2 timeout:(double)arg3 ;
@end

