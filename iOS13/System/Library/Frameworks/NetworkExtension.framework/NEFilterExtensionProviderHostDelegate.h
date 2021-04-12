/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEFilterExtensionProviderHostDelegate <NEExtensionProviderHostDelegate>
@required
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1;
-(void)provideURLAppendStringMap:(id)arg1;
-(void)report:(id)arg1;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createPacketChannelForExtension:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

