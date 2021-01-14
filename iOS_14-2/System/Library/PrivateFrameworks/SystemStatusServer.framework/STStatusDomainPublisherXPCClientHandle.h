/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/STStatusDomainPublisherXPCServer.h>
#import <libobjc.A.dylib/STStatusDomainPublisherClientHandle.h>

@protocol STStatusDomainPublisherServerHandle, OS_dispatch_queue;
@class NSObject, NSXPCConnection, BSMutableIntegerMap, NSSet, NSMutableSet, NSString;

@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle> {

	id<STStatusDomainPublisherServerHandle> _serverHandle;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _clientXPCConnection;
	BSMutableIntegerMap* _dataByDomain;
	BSMutableIntegerMap* _volatileDataByDomain;
	NSSet* _entitledDomains;
	NSMutableSet* _publishingDomains;

}

@property (nonatomic,__weak,readonly) id<STStatusDomainPublisherServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientXPCConnection;                                    //@synthesize clientXPCConnection=_clientXPCConnection - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * dataByDomain;                                       //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * volatileDataByDomain;                               //@synthesize volatileDataByDomain=_volatileDataByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSSet * entitledDomains;                                             //@synthesize entitledDomains=_entitledDomains - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * publishingDomains;                                    //@synthesize publishingDomains=_publishingDomains - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerToPublishDomains:(id)arg1 ;
-(id)_internalQueue_volatileDataForDomain:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(NSMutableSet *)publishingDomains;
-(void)publishDiff:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(id)_internalQueue_dataForDomain:(unsigned long long)arg1 ;
-(id<STStatusDomainPublisherServerHandle>)serverHandle;
-(NSSet *)entitledDomains;
-(void)publishData:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(NSXPCConnection *)clientXPCConnection;
-(BSMutableIntegerMap *)dataByDomain;
-(void)_internalQueue_unregisterFromPublishingDomains:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2 ;
-(BSMutableIntegerMap *)volatileDataByDomain;
-(void)unregisterFromPublishingDomains:(id)arg1 ;
@end

