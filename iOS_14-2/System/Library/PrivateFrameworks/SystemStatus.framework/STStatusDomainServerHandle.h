/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/


@protocol STStatusDomainServerHandle <NSObject>
@required
-(void)reportUserInteraction:(id)arg1 forClient:(id)arg2 domain:(unsigned long long)arg3;
-(void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2;
-(id)dataForDomain:(unsigned long long)arg1;
-(void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2;

@end

