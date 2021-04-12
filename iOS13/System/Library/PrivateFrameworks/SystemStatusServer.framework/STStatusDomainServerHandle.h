/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/


@protocol STStatusDomainServerHandle <NSObject>
@required
-(id)dataForDomain:(unsigned long long)arg1;
-(void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2;
-(void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2;

@end

