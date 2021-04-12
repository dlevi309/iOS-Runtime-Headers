/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STStatusDomainXPCClient.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/STStatusDomainServerHandle.h>

@protocol OS_dispatch_queue;
@class BSMutableIntegerMap, NSObject, NSXPCConnection, NSString;

@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle> {

	BSMutableIntegerMap* _dataByDomain;
	BSMutableIntegerMap* _clientsByDomain;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSXPCConnection* _serverXPCConnection;

}

@property (nonatomic,copy,readonly) BSMutableIntegerMap * dataByDomain;                 //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,copy,readonly) BSMutableIntegerMap * clientsByDomain;              //@synthesize clientsByDomain=_clientsByDomain - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverXPCConnection;                     //@synthesize serverXPCConnection=_serverXPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)succinctDescription;
-(NSXPCConnection *)serverXPCConnection;
-(id)init;
-(BSMutableIntegerMap *)clientsByDomain;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)reportUserInteraction:(id)arg1 forClient:(id)arg2 domain:(unsigned long long)arg3 ;
-(void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(NSString *)description;
-(id)_internalQueue_dataForDomain:(unsigned long long)arg1 ;
-(void)_tearDownXPCConnection;
-(id)dataForDomain:(unsigned long long)arg1 ;
-(void)setServerXPCConnection:(NSXPCConnection *)arg1 ;
-(void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(BSMutableIntegerMap *)dataByDomain;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_internalQueue_setupXPCConnectionIfNecessary;
-(void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)_reregisterForDomains;
-(void)observeDiff:(id)arg1 forDomain:(unsigned long long)arg2 ;
@end

