/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <Foundation/NSOperation.h>

@protocol TBFetchRequest, TBFetchResponse;
@class NSDate, TBPreferLocalFetchDataSource, NSOperationQueue, NSArray;

@interface TBPreferLocalFetchOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	id<TBFetchRequest> _fetchRequest;
	id<TBFetchRequest> _fetchRequestCopy;
	id<TBFetchResponse> _response;
	TBPreferLocalFetchDataSource* _dataSource;
	NSOperationQueue* _fetchQueue;
	NSArray* _remoteKeysToFetch;
	NSArray* _satisfiedLocalKeys;

}

@property (nonatomic,retain) id<TBFetchRequest> fetchRequest;                        //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<TBFetchRequest> fetchRequestCopy;                    //@synthesize fetchRequestCopy=_fetchRequestCopy - In the implementation block
@property (nonatomic,retain) id<TBFetchResponse> response;                           //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) TBPreferLocalFetchDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fetchQueue;                          //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,retain) NSArray * remoteKeysToFetch;                            //@synthesize remoteKeysToFetch=_remoteKeysToFetch - In the implementation block
@property (nonatomic,retain) NSArray * satisfiedLocalKeys;                           //@synthesize satisfiedLocalKeys=_satisfiedLocalKeys - In the implementation block
-(void)finish;
-(id<TBFetchRequest>)fetchRequest;
-(void)start;
-(TBPreferLocalFetchDataSource *)dataSource;
-(BOOL)isFinished;
-(id)name;
-(void)setDataSource:(TBPreferLocalFetchDataSource *)arg1 ;
-(void)setFetchRequest:(id<TBFetchRequest>)arg1 ;
-(id<TBFetchResponse>)response;
-(BOOL)isReady;
-(void)setResponse:(id<TBFetchResponse>)arg1 ;
-(NSOperationQueue *)fetchQueue;
-(void)setFetchQueue:(NSOperationQueue *)arg1 ;
-(id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 fetchQueue:(id)arg3 ;
-(void)setFetchRequestCopy:(id<TBFetchRequest>)arg1 ;
-(void)_fetchLocal;
-(id<TBFetchRequest>)fetchRequestCopy;
-(BOOL)_doResults:(id)arg1 satisfyFetchRequest:(id)arg2 keysToFetchRemotely:(id*)arg3 satisfiedKeys:(id*)arg4 ;
-(void)setRemoteKeysToFetch:(NSArray *)arg1 ;
-(void)setSatisfiedLocalKeys:(NSArray *)arg1 ;
-(void)_captureCacheEventWithStatus:(unsigned long long)arg1 userInfo:(id)arg2 error:(id)arg3 type:(unsigned long long)arg4 ;
-(void)_fetchRemote;
-(void)finishAndCallCompletionWithResponse:(id)arg1 ;
-(NSArray *)remoteKeysToFetch;
-(id)_tileItemsFromTileKeys:(id)arg1 ;
-(void)_mergeLocalAndRemoteResults:(id)arg1 ;
-(NSArray *)satisfiedLocalKeys;
@end

