/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@protocol TBCacheProvider;
@class TBDataSource;

@interface TBRemoteFetchAndCacheDataSource : NSObject {

	TBDataSource* _fetchDataSource;
	id<TBCacheProvider> _cacheProvider;

}

@property (nonatomic,retain) TBDataSource * fetchDataSource;                 //@synthesize fetchDataSource=_fetchDataSource - In the implementation block
@property (nonatomic,retain) id<TBCacheProvider> cacheProvider;              //@synthesize cacheProvider=_cacheProvider - In the implementation block
-(id)initWithFetchDataSource:(id)arg1 cacheProvider:(id)arg2 ;
-(id<TBCacheProvider>)cacheProvider;
-(void)setCacheProvider:(id<TBCacheProvider>)arg1 ;
-(TBDataSource *)fetchDataSource;
-(void)setFetchDataSource:(TBDataSource *)arg1 ;
@end

