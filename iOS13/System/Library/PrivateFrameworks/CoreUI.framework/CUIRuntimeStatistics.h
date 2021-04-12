/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CUIRuntimeStatistics : NSObject {

	Aq _wasted_size;
	Aq _total_size;
	Aq _shortCircuitImageLookup;
	Aq _total_lookup;
	Aq _missed_lookup;
	NSObject*<OS_dispatch_queue> _queue;
	int _notify_token;

}
+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(id)init;
-(void)dealloc;
-(void)_logStatistics:(int)arg1 ;
-(void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2 ;
-(void)incrementStatisticDidShortCircuitImageLookup;
-(void)incrementStatisticLookup;
-(void)incrementMissedLookup;
@end

