/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCThrottleBase.h>

@class NSMutableDictionary, BRCMinHeap;

@interface BRCThrottle : BRCThrottleBase {

	NSMutableDictionary* _retryCounters;
	BRCMinHeap* _retryHeap;

}
+(long long)throttleHashFormat:(id)arg1 ;
+(long long)throttleHashBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)reset;
-(void)incrementRetryCount:(long long)arg1 ;
-(long long)nsecsToNextRetry:(long long)arg1 now:(long long)arg2 increment:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(void)_cleanupStaleCounters:(long long)arg1 ;
@end

