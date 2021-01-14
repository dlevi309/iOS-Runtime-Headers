/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLDispatchSilo.h>

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo {

	NSMutableArray* _timerHolders;

}

@property (nonatomic,readonly) NSMutableArray * timerHolders;              //@synthesize timerHolders=_timerHolders - In the implementation block
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(id)newTimer;
-(NSMutableArray *)timerHolders;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(void)updateLatchedAbsoluteTimestamp;
-(void)setLatchedAbsoluteTimestamp:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

