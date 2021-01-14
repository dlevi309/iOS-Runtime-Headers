/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
@required
-(void)report:(id)arg1;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getSourceAppInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

