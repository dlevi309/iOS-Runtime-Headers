/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMutableDictionary, NSObject, NSURLSessionConfiguration;

@interface ADNSURLSessionDemultiplexerManager : NSObject {

	NSArray* _protocolClasses;
	NSMutableDictionary* _sessionDemultiplexerForIdentifier;
	NSObject*<OS_dispatch_queue> _demuxManagerQueue;
	NSURLSessionConfiguration* _proxySessionConfigurationLegacy;
	NSURLSessionConfiguration* _proxySessionConfigurationConnect;

}

@property (retain) NSMutableDictionary * sessionDemultiplexerForIdentifier;                             //@synthesize sessionDemultiplexerForIdentifier=_sessionDemultiplexerForIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> demuxManagerQueue;                            //@synthesize demuxManagerQueue=_demuxManagerQueue - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * proxySessionConfigurationLegacy;               //@synthesize proxySessionConfigurationLegacy=_proxySessionConfigurationLegacy - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * proxySessionConfigurationConnect;              //@synthesize proxySessionConfigurationConnect=_proxySessionConfigurationConnect - In the implementation block
@property (copy) NSArray * protocolClasses;                                                             //@synthesize protocolClasses=_protocolClasses - In the implementation block
+(id)sharedManager;
-(void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)sessionDemultiplexerForIdentifier;
-(void)configVersionDidChange;
-(void)contentProxyURLConnectDidChange;
-(id)init;
-(NSArray *)protocolClasses;
-(void)setProtocolClasses:(NSArray *)arg1 ;
-(void)contentProxyURLDidChange;
-(NSURLSessionConfiguration *)proxySessionConfigurationLegacy;
-(NSURLSessionConfiguration *)proxySessionConfigurationConnect;
-(id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2 proxyType:(long long)arg3 ;
-(void)proxyTypeDidChange;
-(void)setDemuxManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)pretapRequestCountForIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)demuxManagerQueue;
-(id)sessionConfigurationForProxyType:(long long)arg1 ;
-(void)setProxySessionConfigurationLegacy:(NSURLSessionConfiguration *)arg1 ;
-(void)setSessionDemultiplexerForIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setProxySessionConfigurationConnect:(NSURLSessionConfiguration *)arg1 ;
@end

