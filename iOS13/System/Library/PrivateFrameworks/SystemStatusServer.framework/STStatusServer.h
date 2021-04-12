/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/STStatusDomainServerHandle.h>
#import <libobjc.A.dylib/STStatusDomainPublisherServerHandle.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, STStatusDomainXPCClientListener, STStatusDomainPublisherXPCClientListener, NSObject, NSString;

@interface STStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle> {

	NSMutableDictionary* _clientsByDomain;
	NSMutableDictionary* _dataByDomain;
	STStatusDomainXPCClientListener* _xpcClientListener;
	STStatusDomainPublisherXPCClientListener* _publisherXPCClientListener;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * clientsByDomain;                                              //@synthesize clientsByDomain=_clientsByDomain - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dataByDomain;                                                 //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,readonly) STStatusDomainXPCClientListener * xpcClientListener;                                //@synthesize xpcClientListener=_xpcClientListener - In the implementation block
@property (nonatomic,readonly) STStatusDomainPublisherXPCClientListener * publisherXPCClientListener;              //@synthesize publisherXPCClientListener=_publisherXPCClientListener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                                         //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                           //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)_internalQueue_dataForDomain:(unsigned long long)arg1 ;
-(id)_internalQueue_dataForDomainCreatingIfNecessary:(unsigned long long)arg1 ;
-(NSMutableDictionary *)dataByDomain;
-(void)_internalQueue_notifyClient:(id)arg1 ofData:(id)arg2 forDomain:(unsigned long long)arg3 ;
-(void)_internalQueue_enumerateClientsForDomain:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)clientsByDomain;
-(id)_newEmptyDataForDomain:(unsigned long long)arg1 ;
-(id)dataForDomain:(unsigned long long)arg1 ;
-(void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id)publishedDataForDomain:(unsigned long long)arg1 ;
-(void)publishData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(STStatusDomainXPCClientListener *)xpcClientListener;
-(STStatusDomainPublisherXPCClientListener *)publisherXPCClientListener;
@end

