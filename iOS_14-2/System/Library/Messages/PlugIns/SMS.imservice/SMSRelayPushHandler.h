/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@class IDSService, IDSAccount, NSMutableArray, NSString;

@interface SMSRelayPushHandler : NSObject <IDSServiceDelegatePrivate> {

	IDSService* _relayService;
	IDSService* _smsWatchService;
	IDSAccount* _account;
	NSMutableArray* _handlers;
	BOOL _registeredForPush;
	BOOL _isListening;

}

@property (assign,nonatomic) BOOL registered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
+(id)localCommandToHandlerBlock;
-(void)addListener:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(BOOL)registered;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)replayMessage:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)dealloc;
-(id)copyHandlersForEnumerating;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(void)_service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 isBeingReplayed:(BOOL)arg6 ;
-(void)_service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 isBeingReplayed:(BOOL)arg6 ;
-(id)_messageReplayObjectWithService:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 ;
-(id)_messageReplayObjectWithService:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 ;
-(id)initWithIDSAccount:(id)arg1 ;
@end

