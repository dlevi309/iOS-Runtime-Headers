/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPRelayStream.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegateHomeKit.h>

@protocol OS_dispatch_queue;
@class HMDRelayManager, NSString, NSData, IDSService, NSObject, NSMutableArray;

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit> {

	BOOL _opened;
	BOOL _suspended;
	HMDRelayManager* _relayManger;
	NSString* _accessoryIdentifier;
	NSData* _accessToken;
	NSString* _controllerIdentifier;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingSentMessageIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * controllerIdentifier;                        //@synthesize controllerIdentifier=_controllerIdentifier - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                       //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isOpened,nonatomic) BOOL opened;                                   //@synthesize opened=_opened - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingSentMessageIdentifiers;              //@synthesize pendingSentMessageIdentifiers=_pendingSentMessageIdentifiers - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                             //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,__weak,readonly) HMDRelayManager * relayManger;                        //@synthesize relayManger=_relayManger - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryIdentifier;                         //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                                   //@synthesize accessToken=_accessToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(unsigned long long)mtu;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)suspend;
-(BOOL)isSuspended;
-(NSData *)accessToken;
-(void)open;
-(void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5 ;
-(void)setSuspended:(BOOL)arg1 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)close;
-(id)logIdentifier;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isOpened;
-(id)writeData:(id)arg1 error:(id*)arg2 ;
-(void)_closeWithError:(id)arg1 ;
-(void)resume;
-(NSString *)accessoryIdentifier;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(NSString *)controllerIdentifier;
-(id)initWithRelayManager:(id)arg1 idsService:(id)arg2 accessoryIdentifier:(id)arg3 accessToken:(id)arg4 ;
-(void)setOpened:(BOOL)arg1 ;
-(NSMutableArray *)pendingSentMessageIdentifiers;
-(HMDRelayManager *)relayManger;
@end

