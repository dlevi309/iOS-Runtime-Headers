/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/


@protocol STStatusDomainPublisherXPCServer <NSObject>
@required
-(void)registerToPublishDomains:(id)arg1;
-(void)publishDiff:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)publishData:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)unregisterFromPublishingDomains:(id)arg1;

@end

