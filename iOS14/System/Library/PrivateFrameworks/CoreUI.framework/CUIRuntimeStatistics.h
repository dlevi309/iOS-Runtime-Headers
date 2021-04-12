/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CUIRuntimeStatistics : NSObject {

	Aq _wasted_size;
	Aq _total_size;
	Aq _shortCircuitImageLookup;
	Aq _total_lookup;
	Aq _total_probes;
	Aq _total_initial_lookups;
	Aq _missed_lookup;
	NSObject*<OS_dispatch_queue> _queue;
	int _notify_token;

}
+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(id)init;
-(void)incrementStaticsProbe;
-(void)incrementStatisticDidShortCircuitImageLookup;
-(void)incrementMissedLookup;
-(void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2 ;
-(long long)shortCircuitImageLookup;
-(void)incrementStatisticLookup;
-(void)incrementStaticsInitialLookup;
-(void)dealloc;
@end

