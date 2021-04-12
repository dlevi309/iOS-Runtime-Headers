/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@protocol IKAppContextDelegate <NSObject>
@optional
-(id)navigationControllerForContext:(id)arg1;
-(id)modalControllerForContext:(id)arg1;
-(id)tabBarForContext:(id)arg1;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
-(id)objectForPlayer:(id)arg1;
-(id)objectForPlaylist:(id)arg1;
-(id)objectForMediaItem:(id)arg1;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
-(id)xhrSessionConfigurationForContext:(id)arg1;
-(id)sourceApplicationBundleIdentifierForContext:(id)arg1;
-(id)sourceApplicationAuditTokenDataForContext:(id)arg1;

@required
-(id)deviceConfigForContext:(id)arg1;

@end

