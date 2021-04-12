/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <HearingCore/HCServer.h>

@protocol OS_dispatch_queue;
@class NSLock, NSMutableDictionary, NSObject, BKSProcessAssertion;

@interface RTTServer : HCServer {

	NSLock* _dataResponseBlocksLock;
	NSMutableDictionary* _databaseResponseBlocks;
	NSObject*<OS_dispatch_queue> _commonRequestQueue;
	/*^block*/id _actionCompletionBlock;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,copy) id actionCompletionBlock;                       //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(void)resetConnection;
-(void)setActionCompletionBlock:(id)arg1 ;
-(id)actionCompletionBlock;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(void)setTTYDictionaryAvailability:(BOOL)arg1 ;
-(void)setShouldSuppressIncomingNotification:(BOOL)arg1 ;
-(void)primeRTTServer;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)_registerForServerSettingsUpdates;
-(void)registerResponseBlock:(/*^block*/id)arg1 forUUID:(id)arg2 ;
-(void)_managerAXPIDState:(BOOL)arg1 ;
-(void)_takeStackshot;
-(void)terminateConnectionAndNotify:(BOOL)arg1 ;
-(void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)handleMessageError:(id)arg1 destructive:(BOOL)arg2 ;
-(void)displayCallPromptForContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelCallPromptDisplay;
-(void)findConversationForCallUID:(id)arg1 andResult:(/*^block*/id)arg2 ;
-(void)setSystemOutputAudioMuted:(BOOL)arg1 withCallID:(id)arg2 ;
-(void)sendString:(id)arg1 forCallUID:(id)arg2 ;
-(void)registerForUpdates:(/*^block*/id)arg1 forCallUID:(id)arg2 ;
-(void)registerForRemoteUpdates:(/*^block*/id)arg1 forCallUID:(id)arg2 ;
-(void)registerForServiceUpdates:(/*^block*/id)arg1 forCallUID:(id)arg2 ;
-(id)valueForTTYSetting:(id)arg1 ;
@end

