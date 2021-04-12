/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEVPNPluginDriver <NEPluginDriver>
@optional
-(void)transportUnavailableWithName:(id)arg1;
-(void)transportAvailableWithName:(id)arg1;

@required
-(void)disconnectWithReason:(int)arg1;
-(void)connectWithParameters:(id)arg1;
-(void)attachIPCWithCompletionHandler:(/*^block*/id)arg1;

@end

