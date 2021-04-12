/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _CATArbitratorRegistrationEntry : NSObject {

	id mResource;
	unsigned long long mMaxConcurrentCount;
	NSMutableArray* mPendingWaits;
	NSObject*<OS_dispatch_source> mPendingWaitsSource;
	NSObject*<OS_dispatch_queue> mPendingWaitsQueue;
	unsigned long long _currentCount;

}

@property (nonatomic,readonly) unsigned long long currentCount;              //@synthesize currentCount=_currentCount - In the implementation block
-(void)invalidate;
-(unsigned long long)currentCount;
-(id)makeResourceProxyIfPossible:(BOOL)arg1 ;
-(id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2 ;
-(void)servicePendingWaitTokens;
-(id)makeResourceProxyIfPossibleWithoutLocking:(BOOL)arg1 ;
-(void)pendingWaitsNeedServicing;
-(id)waitForResourceWithExclusive:(BOOL)arg1 group:(id)arg2 ;
-(void)resourceProxyDidInvalidate:(id)arg1 ;
@end

