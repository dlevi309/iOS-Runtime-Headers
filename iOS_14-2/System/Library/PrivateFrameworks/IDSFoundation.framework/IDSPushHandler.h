/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, NSData, NSMutableSet, NSMapTable, NSRecursiveLock, NSString;

@interface IDSPushHandler : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSData* _cachedPushToken;
	NSMutableSet* _topicsCache;
	NSMapTable* _handlerMap;
	NSRecursiveLock* _recursiveLock;
	BOOL _shouldWaitToSetTopics;

}

@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) BOOL shouldWaitToSetTopics;              //@synthesize shouldWaitToSetTopics=_shouldWaitToSetTopics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceWithPortName:(id)arg1 ;
-(BOOL)isConnected;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)_updateTopics;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(NSData *)pushToken;
-(id)init;
-(SecIdentityRef)copyPushIdentity;
-(id)initWithPort:(id)arg1 ;
-(void)_recalculateTopicsCache;
-(id)_apsConnectionPushToken;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)setShouldWaitToSetTopics:(BOOL)arg1 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2 ;
-(BOOL)shouldWaitToSetTopics;
-(void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(id)_getValidPushHandlersWithSelector:(SEL)arg1 topic:(id)arg2 command:(id)arg3 ;
-(void)setCommands:(id)arg1 forListener:(id)arg2 ;
-(BOOL)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4 ;
-(void)setTopics:(id)arg1 forListener:(id)arg2 ;
-(void)dealloc;
@end

