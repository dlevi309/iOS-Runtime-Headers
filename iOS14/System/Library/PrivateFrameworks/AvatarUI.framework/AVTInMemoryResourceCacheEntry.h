/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(id<AVTCachedResource>)resource;
-(id)initWithResource:(id)arg1 changeToken:(id)arg2 key:(id)arg3 cost:(unsigned long long)arg4 ;
-(NSString *)key;
-(id<AVTCacheableResourceChangeToken>)changeToken;
-(unsigned long long)cost;
-(void)dealloc;
@end

