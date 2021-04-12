/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)maxCachedAge;
-(void)setRefresh:(BOOL)arg1 ;
-(void)setMaxCachedAge:(double)arg1 ;
-(unsigned long long)cachePolicy;
-(void)setCachePolicy:(unsigned long long)arg1 ;
@end

