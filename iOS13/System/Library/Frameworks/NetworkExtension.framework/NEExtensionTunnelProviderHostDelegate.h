/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEExtensionTunnelProviderHostDelegate <NEExtensionProviderHostDelegate>
@required
-(void)extension:(id)arg1 didRequestSocket:(BOOL)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(/*^block*/id)arg7;
-(void)extension:(id)arg1 didSetStatus:(long long)arg2;
-(void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)extensionDidDetachIPC:(id)arg1;

@end

