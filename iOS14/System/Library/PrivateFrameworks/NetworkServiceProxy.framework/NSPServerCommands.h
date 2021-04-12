/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@protocol NSPServerCommands <NSObject>
@optional
-(void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4;
-(void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchAppRuleForLabel:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchCurrentConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)refreshWaldoNowWithCompletionHandler:(/*^block*/id)arg1;
-(void)reportUsage:(id)arg1 fromClient:(id)arg2;
-(void)setTestLatencyMap:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

