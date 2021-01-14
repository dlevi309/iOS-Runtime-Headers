/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCCachePolicy : NSObject <NSCopying> {

	unsigned long long _cachePolicy;
	double _maximumCachedAge;

}

@property (assign,nonatomic) unsigned long long cachePolicy;              //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) double maximumCachedAge;                     //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
+(id)defaultCachePolicy;
+(id)cachedOnlyCachePolicy;
+(id)cachePolicyWithSoftMaxAge:(double)arg1 ;
+(id)ignoreCacheCachePolicy;
-(void)setMaximumCachedAge:(double)arg1 ;
-(double)maximumCachedAge;
-(unsigned long long)cachePolicy;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

