/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEFilterExtensionProviderHostDelegate <NEExtensionProviderHostDelegate>
@required
-(void)createPacketChannelForExtension:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)report:(id)arg1;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1;
-(void)provideURLAppendStringMap:(id)arg1;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

