/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)ignoreCacheCachePolicy;
+(id)cachePolicyWithSoftMaxAge:(double)arg1 ;
+(id)cachedOnlyCachePolicy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)cachePolicy;
-(void)setMaximumCachedAge:(double)arg1 ;
-(double)maximumCachedAge;
@end

