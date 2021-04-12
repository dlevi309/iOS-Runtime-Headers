/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCRecordSourceFetchContext : NSObject {

	BOOL _refresh;
	unsigned long long _cachePolicy;
	double _maxCachedAge;

}

@property (assign,nonatomic) BOOL refresh;                                //@synthesize refresh=_refresh - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy;              //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) double maxCachedAge;                         //@synthesize maxCachedAge=_maxCachedAge - In the implementation block
-(BOOL)refresh;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)cachePolicy;
-(void)setRefresh:(BOOL)arg1 ;
-(double)maxCachedAge;
-(void)setMaxCachedAge:(double)arg1 ;
@end

