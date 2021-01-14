/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CUTCheckpointRange *)IDQuery;
-(NSString *)guid;
-(NSMutableArray *)mutableEncryptionCheckpoints;
-(NSMutableArray *)mutableAggregateMessageSendCheckpoints;
-(id)checkpointByAppendingEncryptionCheckpoint;
-(CUTCheckpointRange *)messageOnQueue;
-(id)checkpointByAppendingAggregateMessageSendCheckpoint;
-(id)encryptionCheckpoints;
-(id)aggregateMessageSendCheckpoints;
-(void)setMutableEncryptionCheckpoints:(NSMutableArray *)arg1 ;
-(void)setMutableAggregateMessageSendCheckpoints:(NSMutableArray *)arg1 ;
-(id)checkpoints;
-(id)initWithGuid:(id)arg1 uniqueIdentifier:(id)arg2 ;
@end

