/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@protocol VCControlChannelTransactionDelegate;
@class NSData, NSNumber;

@interface VCControlChannelTransaction : VCObject {

	NSData* _data;
	unsigned _sessionID;
	NSNumber* _participantID;
	opaque_pthread_mutex_t _transactionLock;
	opaque_pthread_cond_t _transactionDone;
	BOOL _isConfirmed;
	BOOL _isFlushed;
	id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;

}
+(BOOL)sendUnreliableMessage:(id)arg1 sessionID:(unsigned)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4 ;
-(void)dealloc;
-(id)initWithTransportSessionID:(unsigned)arg1 transactionData:(id)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4 ;
-(void)flushTransactions;
-(void)confirmedTransactionByParticipantID:(id)arg1 sessionID:(unsigned)arg2 ;
-(BOOL)sendReliableMessage:(id)arg1 sessionID:(unsigned)arg2 participantID:(id)arg3 timeout:(id)arg4 ;
@end

