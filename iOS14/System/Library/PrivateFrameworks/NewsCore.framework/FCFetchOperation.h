/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaximumCachedAge:(double)arg1 ;
-(BOOL)wifiOnly;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)setCanSendFetchCompletionSynchronously:(BOOL)arg1 ;
-(BOOL)shouldFailOnMissingObjects;
-(void)setWifiOnly:(BOOL)arg1 ;
-(id)fetchCompletionBlock;
-(void)setShouldFailOnMissingObjects:(BOOL)arg1 ;
-(BOOL)canSendFetchCompletionSynchronously;
-(NSObject*<OS_dispatch_queue>)fetchCompletionQueue;
-(void)finishExecutingWithStatus:(unsigned long long)arg1 ;
-(void)finishExecutingWithError:(id)arg1 ;
-(void)takeInputsFromFetchOperation:(id)arg1 ;
-(void)finishFromEarlyCancellation;
-(double)maximumCachedAge;
-(void)finishExecutingWithFetchedObject:(id)arg1 ;
-(void)finishExecutingWithResult:(id)arg1 ;
-(unsigned long long)cachePolicy;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(FCFetchOperationResult *)result;
-(void)setFetchCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)cancel;
@end

