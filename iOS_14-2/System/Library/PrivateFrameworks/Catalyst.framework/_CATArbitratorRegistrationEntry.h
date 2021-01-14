/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)currentCount;
-(void)invalidate;
-(id)makeResourceProxyIfPossible:(BOOL)arg1 ;
-(id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2 ;
-(void)servicePendingWaitTokens;
-(id)makeResourceProxyIfPossibleWithoutLocking:(BOOL)arg1 ;
-(void)pendingWaitsNeedServicing;
-(id)waitForResourceWithExclusive:(BOOL)arg1 group:(id)arg2 ;
-(void)resourceProxyDidInvalidate:(id)arg1 ;
@end

