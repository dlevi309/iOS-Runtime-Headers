/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)socialService;
+(id)defaultFileName;
-(id)init;
-(unsigned long long)intent;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(void)invalidateMemoryCaches;
-(void)updateProxy;
-(id)proxiedValueForKey:(id)arg1 ;
-(void)setProxiedValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)flushProxy;
-(NSURL *)proxyURL;
-(void)setProxyURL:(NSURL *)arg1 ;
@end

