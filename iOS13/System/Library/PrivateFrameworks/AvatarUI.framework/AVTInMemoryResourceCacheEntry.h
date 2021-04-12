/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTCachedResource, AVTCacheableResourceChangeToken;
@class NSString;

@interface AVTInMemoryResourceCacheEntry : NSObject {

	id<AVTCachedResource> _resource;
	id<AVTCacheableResourceChangeToken> _changeToken;
	NSString* _key;
	unsigned long long _cost;

}

@property (nonatomic,readonly) id<AVTCachedResource> resource;                               //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) id<AVTCacheableResourceChangeToken> changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long cost;                                      //@synthesize cost=_cost - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(unsigned long long)cost;
-(id<AVTCachedResource>)resource;
-(id<AVTCacheableResourceChangeToken>)changeToken;
-(id)initWithResource:(id)arg1 changeToken:(id)arg2 key:(id)arg3 cost:(unsigned long long)arg4 ;
@end

