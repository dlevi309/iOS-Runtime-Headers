/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@class IDSService, IDSAccount, NSMutableArray, NSString;

@interface MessagePushHandler : NSObject <IDSServiceDelegatePrivate> {

	IDSService* _idsService;
	IDSAccount* _account;
	NSMutableArray* _handlers;
	BOOL _registeredForPush;
	BOOL _isListening;

}

@property (nonatomic,retain,readonly) IDSService * service;              //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain,readonly) IDSAccount * account;              //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
+(id)localCommandToHandlerBlock;
-(void)addListener:(id)arg1 ;
-(IDSAccount *)account;
-(void)service:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingPendingMessageOfType:(long long)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)replayMessage:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(IDSService *)service;
-(void)dealloc;
-(id)copyHandlersForEnumerating;
-(void)_service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 isBeingReplayed:(BOOL)arg6 ;
-(id)initWithIDSAccount:(id)arg1 ;
-(void)sendManualAckForMessageWithContext:(id)arg1 ;
-(BOOL)_shouldImmediatelySendAckForMessage:(id)arg1 command:(id)arg2 ;
-(id)messageReplayObjectWithService:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 ;
@end

