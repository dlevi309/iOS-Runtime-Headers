/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGLazyResult.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SGLazyPurgeableResult : SGLazyResult {

	id _weakData;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	NSObject*<OS_dispatch_source> _idleTimeoutSource;
	double _idleTimeout;
	AB _nil;

}
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)resultIfAvailable;
-(id)result;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 idleTimeout:(double)arg2 ;
@end

