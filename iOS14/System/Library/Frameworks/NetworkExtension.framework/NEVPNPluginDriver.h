/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEVPNPluginDriver <NEPluginDriver>
@required
-(void)connectWithParameters:(id)arg1;
-(void)disconnectWithReason:(int)arg1;
-(void)attachIPCWithCompletionHandler:(/*^block*/id)arg1;
-(void)setAppUUIDMap:(id)arg1;

@end

