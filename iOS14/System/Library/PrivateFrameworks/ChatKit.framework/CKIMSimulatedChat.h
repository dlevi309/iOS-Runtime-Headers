/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <IMCore/IMChat.h>
#import <libobjc.A.dylib/CKIMSimulatedChatDelegate.h>
#import <libobjc.A.dylib/CKIMSimulatedDaemonListener.h>

@protocol CKIMSimulatedChatDelegate;
@class CKIMSimulatedAccount, NSString, NSArray, IMHandle;

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener> {

	id<CKIMSimulatedChatDelegate> _delegate;
	CKIMSimulatedAccount* _simulatedAccount;
	NSString* _simulatedGUID;
	NSArray* _incomingHandles;
	IMHandle* _outgoingHandle;
	unsigned long long _currentMessageID;
	NSString* _simulatedChatIdentifier;

}

@property (nonatomic,readonly) CKIMSimulatedAccount * simulatedAccount;                  //@synthesize simulatedAccount=_simulatedAccount - In the implementation block
@property (nonatomic,readonly) NSString * simulatedGUID;                                 //@synthesize simulatedGUID=_simulatedGUID - In the implementation block
@property (nonatomic,readonly) NSArray * incomingHandles;                                //@synthesize incomingHandles=_incomingHandles - In the implementation block
@property (nonatomic,readonly) IMHandle * outgoingHandle;                                //@synthesize outgoingHandle=_outgoingHandle - In the implementation block
@property (nonatomic,readonly) unsigned long long currentMessageID;                      //@synthesize currentMessageID=_currentMessageID - In the implementation block
@property (nonatomic,copy) NSString * simulatedChatIdentifier;                           //@synthesize simulatedChatIdentifier=_simulatedChatIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CKIMSimulatedChatDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)prepopulatedChat;
-(id)account;
-(id)guid;
-(void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5 ;
-(unsigned char)chatStyle;
-(void)sendMessage:(id)arg1 ;
-(IMHandle *)outgoingHandle;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(id<CKIMSimulatedChatDelegate>)delegate;
-(void)markAsAutoSpamReported;
-(void)setDelegate:(id<CKIMSimulatedChatDelegate>)arg1 ;
-(id)participants;
-(void)chat:(id)arg1 didSendMessage:(id)arg2 finished:(BOOL)arg3 ;
-(void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3 ;
-(unsigned long long)currentMessageID;
-(NSArray *)incomingHandles;
-(BOOL)_handleIncomingItem:(id)arg1 ;
-(NSString *)simulatedChatIdentifier;
-(void)setSimulatedChatIdentifier:(NSString *)arg1 ;
-(id)_messageWithGUID:(id)arg1 ;
-(CKIMSimulatedAccount *)simulatedAccount;
-(NSString *)simulatedGUID;
-(id)initWithIncomingIDs:(id)arg1 outgoingID:(id)arg2 messageIDOffset:(unsigned long long)arg3 service:(id)arg4 ;
-(id)chatIdentifier;
-(id)recipient;
@end

