/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <Foundation/NSOperation.h>

@protocol TBFetchResponse, TBFetchRequest;
@class NSDate, TBRemoteFetchAndCacheDataSource;

@interface TBRemoteFetchAndCacheOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	id<TBFetchResponse> _response;
	id<TBFetchRequest> _fetchRequest;
	TBRemoteFetchAndCacheDataSource* _dataSource;

}

@property (nonatomic,retain) id<TBFetchRequest> fetchRequest;                           //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<TBFetchResponse> response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) TBRemoteFetchAndCacheDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)finish;
-(id<TBFetchRequest>)fetchRequest;
-(void)start;
-(TBRemoteFetchAndCacheDataSource *)dataSource;
-(BOOL)isFinished;
-(id)name;
-(void)setDataSource:(TBRemoteFetchAndCacheDataSource *)arg1 ;
-(void)setFetchRequest:(id<TBFetchRequest>)arg1 ;
-(id<TBFetchResponse>)response;
-(BOOL)isReady;
-(void)setResponse:(id<TBFetchResponse>)arg1 ;
-(id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 ;
@end

