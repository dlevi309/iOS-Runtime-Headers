/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/STStatusDomainServerHandle.h>
#import <libobjc.A.dylib/STStatusDomainPublisherServerHandle.h>

@protocol OS_dispatch_queue;
@class BSMutableIntegerMap, STStatusDomainXPCClientListener, STStatusDomainPublisherXPCClientListener, NSObject, NSString;

@interface STStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle> {

	BSMutableIntegerMap* _clientsByDomain;
	BSMutableIntegerMap* _publisherClientsByDomain;
	BSMutableIntegerMap* _dataByDomain;
	BSMutableIntegerMap* _volatileDataByDomain;
	STStatusDomainXPCClientListener* _xpcClientListener;
	STStatusDomainPublisherXPCClientListener* _publisherXPCClientListener;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) BSMutableIntegerMap * clientsByDomain;                                              //@synthesize clientsByDomain=_clientsByDomain - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * publisherClientsByDomain;                                     //@synthesize publisherClientsByDomain=_publisherClientsByDomain - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * dataByDomain;                                                 //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * volatileDataByDomain;                                         //@synthesize volatileDataByDomain=_volatileDataByDomain - In the implementation block
@property (nonatomic,readonly) STStatusDomainXPCClientListener * xpcClientListener;                                //@synthesize xpcClientListener=_xpcClientListener - In the implementation block
@property (nonatomic,readonly) STStatusDomainPublisherXPCClientListener * publisherXPCClientListener;              //@synthesize publisherXPCClientListener=_publisherXPCClientListener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                                         //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                           //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)registerPublisherClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id)succinctDescription;
-(void)updateVolatileDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(BSMutableIntegerMap *)clientsByDomain;
-(void)_internalQueue_publishData:(id)arg1 forDomain:(unsigned long long)arg2 inMap:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)publishVolatileData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_internalQueue_volatileDataForDomain:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)publishData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)reportUserInteraction:(id)arg1 forClient:(id)arg2 domain:(unsigned long long)arg3 ;
-(id)publishedVolatileDataForDomain:(unsigned long long)arg1 ;
-(void)_internalQueue_notifyClient:(id)arg1 ofData:(id)arg2 forDomain:(unsigned long long)arg3 ;
-(id)_internalQueue_presentationDataForDomain:(unsigned long long)arg1 ;
-(STStatusDomainPublisherXPCClientListener *)publisherXPCClientListener;
-(void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(NSString *)description;
-(id)_internalQueue_dataForDomain:(unsigned long long)arg1 ;
-(id)dataForDomain:(unsigned long long)arg1 ;
-(STStatusDomainXPCClientListener *)xpcClientListener;
-(void)updateDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_internalQueue_enumeratePublisherClientsForDomain:(unsigned long long)arg1 withClientQueueBlock:(/*^block*/id)arg2 ;
-(void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)_internalQueue_enumerateClientsForDomain:(unsigned long long)arg1 withClientQueueBlock:(/*^block*/id)arg2 ;
-(BSMutableIntegerMap *)dataByDomain;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)removePublisherClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(BSMutableIntegerMap *)volatileDataByDomain;
-(BSMutableIntegerMap *)publisherClientsByDomain;
-(id)publishedDataForDomain:(unsigned long long)arg1 ;
@end

