/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/STStatusDomainXPCServer.h>
#import <libobjc.A.dylib/STStatusDomainClientHandle.h>

@protocol STStatusDomainServerHandle, OS_dispatch_queue;
@class NSObject, NSXPCConnection, BSMutableIntegerMap, NSSet, NSMutableSet, NSString;

@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle> {

	id<STStatusDomainServerHandle> _serverHandle;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _clientXPCConnection;
	BSMutableIntegerMap* _dataByDomain;
	NSSet* _entitledDomains;
	NSMutableSet* _observingDomains;

}

@property (nonatomic,__weak,readonly) id<STStatusDomainServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                      //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientXPCConnection;                           //@synthesize clientXPCConnection=_clientXPCConnection - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * dataByDomain;                              //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSSet * entitledDomains;                                    //@synthesize entitledDomains=_entitledDomains - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * observingDomains;                            //@synthesize observingDomains=_observingDomains - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id<STStatusDomainServerHandle>)serverHandle;
-(NSSet *)entitledDomains;
-(NSXPCConnection *)clientXPCConnection;
-(BSMutableIntegerMap *)dataByDomain;
-(id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2 ;
-(void)observeDomains:(id)arg1 ;
-(void)stopObservingDomains:(id)arg1 ;
-(void)reportUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(NSMutableSet *)observingDomains;
-(void)_internalQueue_observeData:(id)arg1 forDomain:(unsigned long long)arg2 dataSendBlock:(/*^block*/id)arg3 diffSendBlock:(/*^block*/id)arg4 ;
@end

