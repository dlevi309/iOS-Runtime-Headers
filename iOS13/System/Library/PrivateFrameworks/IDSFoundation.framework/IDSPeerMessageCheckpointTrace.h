/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange, NSMutableArray;

@interface IDSPeerMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	CUTCheckpointRange* _IDQuery;
	CUTCheckpointRange* _messageOnQueue;
	NSMutableArray* _mutableEncryptionCheckpoints;
	NSMutableArray* _mutableAggregateMessageSendCheckpoints;

}

@property (nonatomic,retain) NSMutableArray * mutableEncryptionCheckpoints;                        //@synthesize mutableEncryptionCheckpoints=_mutableEncryptionCheckpoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableAggregateMessageSendCheckpoints;              //@synthesize mutableAggregateMessageSendCheckpoints=_mutableAggregateMessageSendCheckpoints - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                                    //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * IDQuery;                                       //@synthesize IDQuery=_IDQuery - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * messageOnQueue;                                //@synthesize messageOnQueue=_messageOnQueue - In the implementation block
-(id)checkpoints;
-(NSString *)guid;
-(CUTCheckpointRange *)messageOnQueue;
-(CUTCheckpointRange *)IDQuery;
-(id)initWithGuid:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(NSMutableArray *)mutableEncryptionCheckpoints;
-(NSMutableArray *)mutableAggregateMessageSendCheckpoints;
-(id)checkpointByAppendingEncryptionCheckpoint;
-(id)checkpointByAppendingAggregateMessageSendCheckpoint;
-(id)encryptionCheckpoints;
-(id)aggregateMessageSendCheckpoints;
-(void)setMutableEncryptionCheckpoints:(NSMutableArray *)arg1 ;
-(void)setMutableAggregateMessageSendCheckpoints:(NSMutableArray *)arg1 ;
@end

