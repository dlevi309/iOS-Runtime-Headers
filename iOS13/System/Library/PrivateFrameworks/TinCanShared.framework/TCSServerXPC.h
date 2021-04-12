/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/


@protocol TCSServerXPC <NSObject>
@required
-(void)disconnectCall:(id)arg1;
-(void)sessionViewControllerViewDidAppear;
-(void)getCall:(/*^block*/id)arg1;
-(void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setClientRecordingInProgress:(BOOL)arg1;
-(void)ensureUplinkMuted;
-(void)queryIsTinCannable:(id)arg1;

@end

