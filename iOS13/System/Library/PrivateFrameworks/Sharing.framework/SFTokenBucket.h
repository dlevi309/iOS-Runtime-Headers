/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@interface SFTokenBucket : NSObject {

	unsigned long long _bucketSize;
	unsigned long long _tokensAvailable;
	unsigned long long _tokenDurationTicks;
	unsigned long long _lastRefreshTicks;

}
-(id)init;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2 ;
-(BOOL)acquireToken;
@end

