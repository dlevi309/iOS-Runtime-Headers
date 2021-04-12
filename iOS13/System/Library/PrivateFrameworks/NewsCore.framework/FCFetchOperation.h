/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol OS_dispatch_queue;
@class FCFetchOperationResult, NSObject;

@interface FCFetchOperation : FCOperation {

	FCFetchOperationResult* _result;
	BOOL _wifiOnly;
	BOOL _shouldFailOnMissingObjects;
	BOOL _canSendFetchCompletionSynchronously;
	unsigned long long _cachePolicy;
	double _maximumCachedAge;
	/*^block*/id _fetchCompletionBlock;
	NSObject*<OS_dispatch_queue> _fetchCompletionQueue;

}

@property (assign) BOOL wifiOnly;                                                  //@synthesize wifiOnly=_wifiOnly - In the implementation block
@property (assign) unsigned long long cachePolicy;                                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign) double maximumCachedAge;                                        //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
@property (assign) BOOL shouldFailOnMissingObjects;                                //@synthesize shouldFailOnMissingObjects=_shouldFailOnMissingObjects - In the implementation block
@property (copy) id fetchCompletionBlock;                                          //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> fetchCompletionQueue;              //@synthesize fetchCompletionQueue=_fetchCompletionQueue - In the implementation block
@property (assign) BOOL canSendFetchCompletionSynchronously;                       //@synthesize canSendFetchCompletionSynchronously=_canSendFetchCompletionSynchronously - In the implementation block
@property (readonly) FCFetchOperationResult * result;                              //@synthesize result=_result - In the implementation block
-(id)init;
-(void)cancel;
-(FCFetchOperationResult *)result;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)cachePolicy;
-(id)fetchCompletionBlock;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)finishFromEarlyCancellation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)setMaximumCachedAge:(double)arg1 ;
-(void)setFetchCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCanSendFetchCompletionSynchronously:(BOOL)arg1 ;
-(double)maximumCachedAge;
-(void)finishExecutingWithFetchedObject:(id)arg1 ;
-(BOOL)wifiOnly;
-(void)finishExecutingWithResult:(id)arg1 ;
-(BOOL)shouldFailOnMissingObjects;
-(void)setWifiOnly:(BOOL)arg1 ;
-(void)setShouldFailOnMissingObjects:(BOOL)arg1 ;
-(BOOL)canSendFetchCompletionSynchronously;
-(NSObject*<OS_dispatch_queue>)fetchCompletionQueue;
-(void)finishExecutingWithStatus:(unsigned long long)arg1 ;
-(void)finishExecutingWithError:(id)arg1 ;
-(void)takeInputsFromFetchOperation:(id)arg1 ;
@end

