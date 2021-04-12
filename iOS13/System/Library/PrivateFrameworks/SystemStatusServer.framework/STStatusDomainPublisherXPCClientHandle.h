/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/STStatusDomainPublisherXPCServer.h>

@protocol STStatusDomainPublisherServerHandle, OS_dispatch_queue;
@class NSObject, NSXPCConnection, BSMutableIntegerMap, NSSet, NSString;

@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer> {

	id<STStatusDomainPublisherServerHandle> _serverHandle;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _clientXPCConnection;
	BSMutableIntegerMap* _dataByDomain;
	NSSet* _entitledDomains;

}

@property (nonatomic,__weak,readonly) id<STStatusDomainPublisherServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientXPCConnection;                                    //@synthesize clientXPCConnection=_clientXPCConnection - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * dataByDomain;                                       //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSSet * entitledDomains;                                             //@synthesize entitledDomains=_entitledDomains - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)clientXPCConnection;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)_internalQueue_dataForDomainCreatingIfNecessary:(unsigned long long)arg1 ;
-(BSMutableIntegerMap *)dataByDomain;
-(id)_newEmptyDataForDomain:(unsigned long long)arg1 ;
-(id<STStatusDomainPublisherServerHandle>)serverHandle;
-(id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2 ;
-(NSSet *)entitledDomains;
-(void)_publishData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)_publishDataDiff:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)publishBatteryData:(id)arg1 ;
-(void)publishBatteryDataDiff:(id)arg1 ;
-(void)publishTelephonyData:(id)arg1 ;
-(void)publishTelephonyDataDiff:(id)arg1 ;
-(void)publishVoiceControlData:(id)arg1 ;
-(void)publishVoiceControlDataDiff:(id)arg1 ;
-(void)publishWifiData:(id)arg1 ;
-(void)publishWifiDataDiff:(id)arg1 ;
@end

