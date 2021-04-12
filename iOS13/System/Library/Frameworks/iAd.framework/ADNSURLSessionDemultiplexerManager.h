/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSArray *)protocolClasses;
-(void)setProtocolClasses:(NSArray *)arg1 ;
-(void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1 ;
-(NSURLSessionConfiguration *)proxySessionConfigurationConnect;
-(NSURLSessionConfiguration *)proxySessionConfigurationLegacy;
-(NSMutableDictionary *)sessionDemultiplexerForIdentifier;
-(id)sessionConfigurationForProxyType:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)demuxManagerQueue;
-(void)contentProxyURLDidChange;
-(void)contentProxyURLConnectDidChange;
-(void)proxyTypeDidChange;
-(void)configVersionDidChange;
-(id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2 proxyType:(long long)arg3 ;
-(long long)pretapRequestCountForIdentifier:(id)arg1 ;
-(void)setSessionDemultiplexerForIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setDemuxManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProxySessionConfigurationLegacy:(NSURLSessionConfiguration *)arg1 ;
-(void)setProxySessionConfigurationConnect:(NSURLSessionConfiguration *)arg1 ;
@end

