/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
*/


@class NSURLSessionConfiguration, NSArray, NSURL, APUnfairLock;

@interface APProxySessionConfigurationProvider : NSObject {

	NSURLSessionConfiguration* _connectProxyConfig;
	NSArray* _protocolClasses;
	NSURL* _proxyURL;
	NSURL* _defaultProxyURL;
	APUnfairLock* _lock;

}

@property (nonatomic,retain) NSArray * protocolClasses;              //@synthesize protocolClasses=_protocolClasses - In the implementation block
@property (nonatomic,retain) NSURL * proxyURL;                       //@synthesize proxyURL=_proxyURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultProxyURL;                //@synthesize defaultProxyURL=_defaultProxyURL - In the implementation block
@property (nonatomic,readonly) APUnfairLock * lock;                  //@synthesize lock=_lock - In the implementation block
-(NSArray *)protocolClasses;
-(void)setProtocolClasses:(NSArray *)arg1 ;
-(APUnfairLock *)lock;
-(NSURL *)proxyURL;
-(void)setProxyURL:(NSURL *)arg1 ;
-(id)connectProxyConfig;
-(id)_createConnectProxyConfig;
-(NSURL *)defaultProxyURL;
-(id)initWithDefaultProxyURL:(id)arg1 ;
-(void)addProtocolClasses:(id)arg1 ;
-(void)setDefaultProxyURL:(NSURL *)arg1 ;
@end

