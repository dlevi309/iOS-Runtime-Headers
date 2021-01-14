/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class TBCoreDataSource, TBDataSource, NSOperationQueue;

@interface TBDataSourceMediator : NSObject {

	TBCoreDataSource* _local;
	TBDataSource* _remote;
	NSOperationQueue* _fetchQueue;

}

@property (nonatomic,retain) TBCoreDataSource * local;                   //@synthesize local=_local - In the implementation block
@property (nonatomic,retain) TBDataSource * remote;                      //@synthesize remote=_remote - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fetchQueue;              //@synthesize fetchQueue=_fetchQueue - In the implementation block
-(TBDataSource *)remote;
-(TBCoreDataSource *)local;
-(void)setLocal:(TBCoreDataSource *)arg1 ;
-(NSOperationQueue *)fetchQueue;
-(void)executeFetchRequest:(id)arg1 ;
-(void)setFetchQueue:(NSOperationQueue *)arg1 ;
-(void)setRemote:(TBDataSource *)arg1 ;
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithLocalStoreDescriptor:(id)arg1 remoteStore:(id)arg2 ;
-(id)initWithLocalStoreDescriptor:(id)arg1 ;
-(void)removeWithFetchRequest:(id)arg1 ;
@end

