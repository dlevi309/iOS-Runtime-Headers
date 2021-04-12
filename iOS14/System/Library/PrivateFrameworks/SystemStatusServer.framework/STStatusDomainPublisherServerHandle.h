/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/


@protocol STStatusDomainPublisherServerHandle <NSObject>
@required
-(void)registerPublisherClient:(id)arg1 forDomain:(unsigned long long)arg2;
-(void)updateVolatileDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;
-(void)publishVolatileData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)publishData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(id)publishedVolatileDataForDomain:(unsigned long long)arg1;
-(void)updateDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;
-(void)removePublisherClient:(id)arg1 forDomain:(unsigned long long)arg2;
-(id)publishedDataForDomain:(unsigned long long)arg1;

@end

