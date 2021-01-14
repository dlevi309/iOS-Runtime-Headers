/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerForServiceUpdates:(/*^block*/id)arg1 forCallUID:(id)arg2 ;
-(void)cancelCallPromptDisplay;
-(id)init;
-(void)setSystemOutputAudioMuted:(BOOL)arg1 withCallID:(id)arg2 ;
-(void)resetConnection;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(id)valueForTTYSetting:(id)arg1 ;
-(BOOL)shouldRestartOnInterruption;
-(void)terminateConnectionAndNotify:(BOOL)arg1 ;
-(BKSProcessAssertion *)assertion;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(void)findConversationForCallUID:(id)arg1 andResult:(/*^block*/id)arg2 ;
-(id)actionCompletionBlock;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)registerForUpdates:(/*^block*/id)arg1 forCallUID:(id)arg2 ;
-(BOOL)isEmergencyNumber:(id)arg1 ;
-(void)registerForRemoteUpdates:(/*^block*/id)arg1 forCallUID:(id)arg2 ;
-(void)sendString:(id)arg1 forCallUID:(id)arg2 ;
-(void)registerResponseBlock:(/*^block*/id)arg1 forUUID:(id)arg2 ;
-(void)displayCallPromptForContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)primeRTTServer;
-(void)setViewControllerIsVisible:(BOOL)arg1 withCallID:(id)arg2 ;
-(void)handleMessageError:(id)arg1 destructive:(BOOL)arg2 ;
-(void)setTTYDictionaryAvailability:(BOOL)arg1 ;
-(void)setShouldSuppressIncomingNotification:(BOOL)arg1 ;
-(void)_managerAXPIDState:(BOOL)arg1 ;
-(void)_registerForServerSettingsUpdates;
-(void)setActionCompletionBlock:(id)arg1 ;
-(void)dealloc;
-(void)_takeStackshot;
@end

