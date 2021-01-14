/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableDictionary, NSURL;

@interface CLSSocialService : NSObject {

	NSMutableDictionary* _proxy;
	unsigned long long _intent;
	NSURL* _proxyURL;

}

@property (readonly) unsigned long long intent;              //@synthesize intent=_intent - In the implementation block
@property (copy) NSURL * proxyURL;                           //@synthesize proxyURL=_proxyURL - In the implementation block
+(id)defaultFileName;
+(id)socialService;
-(unsigned long long)intent;
-(id)init;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(void)invalidateMemoryCaches;
-(void)updateProxy;
-(NSURL *)proxyURL;
-(void)setProxyURL:(NSURL *)arg1 ;
-(id)proxiedValueForKey:(id)arg1 ;
-(void)setProxiedValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)flushProxy;
@end

