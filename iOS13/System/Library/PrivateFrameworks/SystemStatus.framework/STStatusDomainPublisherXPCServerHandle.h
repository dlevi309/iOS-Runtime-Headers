/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/STStatusDomainPublisherServerHandle.h>

@protocol OS_dispatch_queue;
@class BSMutableIntegerMap, NSObject, NSXPCConnection, NSString;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <BSDescriptionProviding, STStatusDomainPublisherServerHandle> {

	BSMutableIntegerMap* _dataByDomain;
	BSMutableIntegerMap* _hasSentDataByDomain;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _serverXPCConnection;

}

@property (nonatomic,retain) BSMutableIntegerMap * dataByDomain;                      //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * hasSentDataByDomain;               //@synthesize hasSentDataByDomain=_hasSentDataByDomain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverXPCConnection;                   //@synthesize serverXPCConnection=_serverXPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_internalQueue_setupXPCConnectionIfNecessary;
-(void)_tearDownXPCConnection;
-(id)_internalQueue_dataForDomainCreatingIfNecessary:(unsigned long long)arg1 ;
-(BSMutableIntegerMap *)dataByDomain;
-(id)_newEmptyDataForDomain:(unsigned long long)arg1 ;
-(id)publishedDataForDomain:(unsigned long long)arg1 ;
-(void)publishData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(NSXPCConnection *)serverXPCConnection;
-(void)setServerXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setDataByDomain:(BSMutableIntegerMap *)arg1 ;
-(void)_internalQueue_publishData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)_internalQueue_publishData:(id)arg1 forDomain:(unsigned long long)arg2 dataSendBlock:(/*^block*/id)arg3 diffSendBlock:(/*^block*/id)arg4 ;
-(BSMutableIntegerMap *)hasSentDataByDomain;
-(void)_resendData;
-(void)setHasSentDataByDomain:(BSMutableIntegerMap *)arg1 ;
@end

