/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>

@class HMFUnfairLock, HMFTimer, NSString;

@interface HMFOperationBudget : HMFObject <HMFLogging, HMFTimerDelegate> {

	HMFUnfairLock* _lock;
	HMFTimer* _timer;
	unsigned long long _value;
	unsigned long long _limit;
	HMFRate _rate;

}

@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) HMFRate rate;                          //@synthesize rate=_rate - In the implementation block
@property (readonly) unsigned long long value;                        //@synthesize value=_value - In the implementation block
@property (getter=isFull,readonly) BOOL full; 
@property (getter=isEmpty,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(id)init;
-(BOOL)isEmpty;
-(unsigned long long)value;
-(void)reset;
-(BOOL)decrement;
-(unsigned long long)limit;
-(HMFRate)rate;
-(void)timerDidFire:(id)arg1 ;
-(BOOL)decrementByCount:(unsigned long long)arg1 ;
-(BOOL)isFull;
-(id)initWithLimit:(unsigned long long)arg1 rate:(HMFRate)arg2 ;
@end

