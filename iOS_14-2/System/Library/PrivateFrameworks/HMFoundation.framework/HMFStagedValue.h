/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>

@protocol HMFStagedValueDelegate;
@class HMFUnfairLock, HMFTimer, NSString;

@interface HMFStagedValue : NSObject <HMFLogging, HMFTimerDelegate> {

	id _stagedValue;
	BOOL _isStaged;
	HMFUnfairLock* _lock;
	id _committedValue;
	HMFTimer* _timer;
	id<HMFStagedValueDelegate> _delegate;
	/*^block*/id _timerFactory;

}

@property (retain) id committedValue;                                //@synthesize committedValue=_committedValue - In the implementation block
@property (retain) HMFTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
@property (copy) id timerFactory;                                    //@synthesize timerFactory=_timerFactory - In the implementation block
@property (readonly) id value; 
@property (__weak) id<HMFStagedValueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)timer;
-(void)setTimer:(HMFTimer *)arg1 ;
-(id<HMFStagedValueDelegate>)delegate;
-(id)initWithValue:(id)arg1 ;
-(void)_commitValue:(id)arg1 ;
-(void)setDelegate:(id<HMFStagedValueDelegate>)arg1 ;
-(id)value;
-(id)timerFactory;
-(void)setTimerFactory:(id)arg1 ;
-(void)stageValue:(id)arg1 withTimeout:(double)arg2 ;
-(void)commitValue:(id)arg1 ;
-(void)_stageValue:(id)arg1 withTimeout:(double)arg2 ;
-(void)_unstageValue;
-(id)committedValue;
-(void)setCommittedValue:(id)arg1 ;
@end

