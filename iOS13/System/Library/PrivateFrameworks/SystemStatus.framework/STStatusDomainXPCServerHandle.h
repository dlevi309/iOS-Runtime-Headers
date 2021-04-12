/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STStatusDomainXPCClient.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/STStatusDomainServerHandle.h>

@protocol OS_dispatch_queue;
@class BSMutableIntegerMap, NSMutableDictionary, NSObject, NSXPCConnection, NSString;

@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle> {

	BSMutableIntegerMap* _dataByDomain;
	NSMutableDictionary* _clientsByDomain;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _serverXPCConnection;

}

@property (nonatomic,retain) BSMutableIntegerMap * dataByDomain;                      //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientsByDomain;                   //@synthesize clientsByDomain=_clientsByDomain - In the implementation block
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
-(id)_internalQueue_dataForDomain:(unsigned long long)arg1 ;
-(BSMutableIntegerMap *)dataByDomain;
-(NSMutableDictionary *)clientsByDomain;
-(id)dataForDomain:(unsigned long long)arg1 ;
-(void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)observeBatteryData:(id)arg1 ;
-(void)observeBatteryDataDiff:(id)arg1 ;
-(void)observeTelephonyData:(id)arg1 ;
-(void)observeTelephonyDataDiff:(id)arg1 ;
-(void)observeVoiceControlData:(id)arg1 ;
-(void)observeVoiceControlDataDiff:(id)arg1 ;
-(void)observeWifiData:(id)arg1 ;
-(void)observeWifiDataDiff:(id)arg1 ;
-(NSXPCConnection *)serverXPCConnection;
-(void)_observeData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)_observeDataDiff:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)setServerXPCConnection:(NSXPCConnection *)arg1 ;
-(void)_reregisterForDomains;
-(void)setDataByDomain:(BSMutableIntegerMap *)arg1 ;
-(void)setClientsByDomain:(NSMutableDictionary *)arg1 ;
@end

