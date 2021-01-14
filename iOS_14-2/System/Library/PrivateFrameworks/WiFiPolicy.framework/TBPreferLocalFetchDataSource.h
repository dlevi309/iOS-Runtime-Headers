/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@protocol TBCacheProvider;
@class TBDataSource;

@interface TBPreferLocalFetchDataSource : NSObject {

	TBDataSource* _localDataSource;
	TBDataSource* _remoteDataSource;
	id<TBCacheProvider> _cacheProvider;

}

@property (nonatomic,retain) TBDataSource * localDataSource;                 //@synthesize localDataSource=_localDataSource - In the implementation block
@property (nonatomic,retain) TBDataSource * remoteDataSource;                //@synthesize remoteDataSource=_remoteDataSource - In the implementation block
@property (nonatomic,retain) id<TBCacheProvider> cacheProvider;              //@synthesize cacheProvider=_cacheProvider - In the implementation block
-(TBDataSource *)localDataSource;
-(void)setLocalDataSource:(TBDataSource *)arg1 ;
-(id)initWithLocalDataSource:(id)arg1 remoteDataSource:(id)arg2 cacheProvider:(id)arg3 ;
-(TBDataSource *)remoteDataSource;
-(void)setRemoteDataSource:(TBDataSource *)arg1 ;
-(id<TBCacheProvider>)cacheProvider;
-(void)setCacheProvider:(id<TBCacheProvider>)arg1 ;
@end

