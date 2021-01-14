/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_os_log;
#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSObject;

@interface SGDPowerBudgetThrottlingState : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject*<OS_os_log> _log;
	SCD_Struct_SG8 _state;
	unsigned long long _absTimeAtOpStart;
	unsigned long long _timeSinceOpStart;
	int _fd;
	BOOL _opInProgress;
	BOOL _dirty;
	BOOL _wasOnBattery;

}
-(BOOL)canDoExtraDiscretionaryWork;
-(id)initWithPath:(id)arg1 log:(id)arg2 ;
-(void)didConsumeAnExtraBudgetedOperation;
-(BOOL)canDoDiscretionaryWork;
-(void)endWork;
-(void)_writeThrottleStateLocked;
-(void)_updateOperationProgress;
-(id)state;
-(void)startWork;
-(void)refill;
-(void)_readThrottleState;
-(void)_writeThrottleState;
-(void)dealloc;
@end

