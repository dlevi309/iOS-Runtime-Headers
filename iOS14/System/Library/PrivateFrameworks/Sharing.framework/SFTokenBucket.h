/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@interface SFTokenBucket : NSObject {

	unsigned long long _bucketSize;
	unsigned long long _tokensAvailable;
	unsigned long long _tokenDurationTicks;
	unsigned long long _lastRefreshTicks;

}
-(id)init;
-(BOOL)acquireToken;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2 ;
@end

