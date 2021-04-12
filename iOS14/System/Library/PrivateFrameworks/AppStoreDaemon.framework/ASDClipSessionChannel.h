/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol ASDClipSessionChannel <NSObject>
@required
-(void)channelNotifyDidComplete;
-(void)channelNotifyDidFailWithError:(id)arg1;
-(void)channelNotifyDidInstallPlaceholder;
-(void)channelNotifyDidProgress:(double)arg1;
-(void)channelStateDidOpen;
-(void)channelStateDidClose;

@end

