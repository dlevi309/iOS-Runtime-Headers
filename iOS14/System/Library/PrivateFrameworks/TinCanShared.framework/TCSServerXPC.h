/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/


@protocol TCSServerXPC <NSObject>
@required
-(void)disconnectCall:(id)arg1;
-(void)sessionViewControllerViewDidAppear;
-(void)getCall:(/*^block*/id)arg1;
-(void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3;
-(void)ensureUplinkMuted;
-(void)queryIsTinCannable:(id)arg1;

@end

