/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@protocol VCControlChannelTransactionDelegate;
@class NSNumber, NSMutableDictionary;

@interface VCControlChannelDialog : VCObject {

	unsigned _sessionID;
	unsigned _transactionID;
	NSNumber* _participantID;
	id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;
	NSMutableDictionary* _transactions;

}
+(BOOL)sendUnreliableMessage:(id)arg1 sessionID:(unsigned)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4 ;
+(BOOL)encryptMessage:(id)arg1 buffer:(char*)arg2 size:(unsigned)arg3 sequenceNumber:(unsigned short)arg4 transactionDelegate:(id)arg5 ;
+(id)newEncryptedMessageFromMessage:(id)arg1 sequenceNumber:(unsigned short)arg2 transactionDelegate:(id)arg3 ;
+(void)sendConfirmationToParticipantID:(id)arg1 transactionID:(id)arg2 sessionID:(unsigned)arg3 transactionDelegate:(id)arg4 ;
+(BOOL)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned)arg3 sessionID:(unsigned)arg4 transactionDelegate:(id)arg5 ;
-(void)dealloc;
-(void)removeTransactionForTransactionID:(int)arg1 ;
-(id)initWithSessionID:(unsigned)arg1 participantID:(id)arg2 transactionDelegate:(id)arg3 ;
-(void)flushActiveDialogs;
-(BOOL)sendReliableMessage:(id)arg1 transactionDelegate:(id)arg2 timeout:(id)arg3 ;
-(BOOL)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned)arg3 ;
@end
