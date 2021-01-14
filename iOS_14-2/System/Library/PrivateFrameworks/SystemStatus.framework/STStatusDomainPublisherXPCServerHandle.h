/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STStatusDomainPublisherXPCClient.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/STStatusDomainPublisherServerHandle.h>

@protocol OS_dispatch_queue;
@class BSMutableIntegerMap, NSObject, NSXPCConnection, NSString;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle> {

	BSMutableIntegerMap* _dataByDomain;
	BSMutableIntegerMap* _hasSentDataByDomain;
	BSMutableIntegerMap* _dataMutationCompletionsByDomain;
	BSMutableIntegerMap* _volatileDataByDomain;
	BSMutableIntegerMap* _hasSentVolatileDataByDomain;
	BSMutableIntegerMap* _volatileDataMutationCompletionsByDomain;
	BSMutableIntegerMap* _publisherClientsByDomain;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSXPCConnection* _serverXPCConnection;

}

@property (nonatomic,copy,readonly) BSMutableIntegerMap * dataByDomain;                                         //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,copy,readonly) BSMutableIntegerMap * hasSentDataByDomain;                                  //@synthesize hasSentDataByDomain=_hasSentDataByDomain - In the implementation block
@property (nonatomic,copy,readonly) BSMutableIntegerMap * dataMutationCompletionsByDomain;                      //@synthesize dataMutationCompletionsByDomain=_dataMutationCompletionsByDomain - In the implementation block
@property (nonatomic,copy,readonly) BSMutableIntegerMap * volatileDataByDomain;                                 //@synthesize volatileDataByDomain=_volatileDataByDomain - In the implementation block
@property (nonatomic,copy,readonly) BSMutableIntegerMap * hasSentVolatileDataByDomain;                          //@synthesize hasSentVolatileDataByDomain=_hasSentVolatileDataByDomain - In the implementation block
@property (nonatomic,copy,readonly) BSMutableIntegerMap * volatileDataMutationCompletionsByDomain;              //@synthesize volatileDataMutationCompletionsByDomain=_volatileDataMutationCompletionsByDomain - In the implementation block
@property (nonatomic,copy,readonly) BSMutableIntegerMap * publisherClientsByDomain;                             //@synthesize publisherClientsByDomain=_publisherClientsByDomain - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                                      //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverXPCConnection;                                             //@synthesize serverXPCConnection=_serverXPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)registerPublisherClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id)succinctDescription;
-(void)updateVolatileDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(NSXPCConnection *)serverXPCConnection;
-(void)_internalQueue_publishDataToServer:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(BSMutableIntegerMap *)dataMutationCompletionsByDomain;
-(id)init;
-(void)publishVolatileData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_internalQueue_volatileDataForDomain:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)publishData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)publishedVolatileDataForDomain:(unsigned long long)arg1 ;
-(BSMutableIntegerMap *)hasSentDataByDomain;
-(void)_resendData;
-(void)_internalQueue_reregisterForPublishingDomains;
-(void)_internalQueue_publishData:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 dataSendBlock:(/*^block*/id)arg4 diffSendBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(NSString *)description;
-(id)_internalQueue_dataForDomain:(unsigned long long)arg1 ;
-(void)_tearDownXPCConnection;
-(void)_internalQueue_publishData:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setServerXPCConnection:(NSXPCConnection *)arg1 ;
-(void)updateDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BSMutableIntegerMap *)hasSentVolatileDataByDomain;
-(BSMutableIntegerMap *)dataByDomain;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)removePublisherClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(BSMutableIntegerMap *)volatileDataByDomain;
-(BSMutableIntegerMap *)publisherClientsByDomain;
-(void)_internalQueue_setupXPCConnectionIfNecessary;
-(BSMutableIntegerMap *)volatileDataMutationCompletionsByDomain;
-(void)_internalQueue_publishDiffToServer:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(id)publishedDataForDomain:(unsigned long long)arg1 ;
@end

