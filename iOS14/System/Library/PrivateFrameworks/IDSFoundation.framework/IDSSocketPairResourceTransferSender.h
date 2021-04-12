/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>
#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString, NSDictionary, NSDate, NSData;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage <IDSSocketPairMessage> {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	NSDictionary* _resourceAttributes;
	BOOL _sentFirstMessage;
	unsigned long long _totalBytes;
	unsigned long long _nextByte;
	BOOL _done;
	int _fileDescriptor;
	unsigned _maxChunkSize;
	BOOL _resumeResourceTransfers;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressPayload;
	BOOL _compressed;
	BOOL _didWakeHint;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) BOOL sentFirstMessage;                          //@synthesize sentFirstMessage=_sentFirstMessage - In the implementation block
@property (nonatomic,readonly) BOOL isDone;                                    //@synthesize done=_done - In the implementation block
@property (assign,nonatomic) unsigned maxChunkSize;                            //@synthesize maxChunkSize=_maxChunkSize - In the implementation block
@property (assign,nonatomic) BOOL resumeResourceTransfers;                     //@synthesize resumeResourceTransfers=_resumeResourceTransfers - In the implementation block
@property (assign,nonatomic) unsigned long long nextByte;                      //@synthesize nextByte=_nextByte - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytes;                  //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) NSString * messageUUID;                         //@synthesize messageUUID=_messageUUID - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) BOOL didWakeHint; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,retain) NSDate * expiryDate; 
-(id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressPayload:(BOOL)arg7 compressed:(BOOL)arg8 didWakeHint:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 expiryDate:(id)arg12 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned long long)totalBytes;
-(unsigned)sequenceNumber;
-(id)description;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(unsigned long long)nextByte;
-(id)nextMessage;
-(void)reset;
-(void)closeFileAndMarkDone;
-(BOOL)readNextBytes:(id*)arg1 byteOffset:(unsigned long long*)arg2 ;
-(id)readNextBytes;
-(id)nextMessage_old;
-(BOOL)sentFirstMessage;
-(unsigned)maxChunkSize;
-(void)setMaxChunkSize:(unsigned)arg1 ;
-(BOOL)resumeResourceTransfers;
-(void)setResumeResourceTransfers:(BOOL)arg1 ;
-(void)setNextByte:(unsigned long long)arg1 ;
-(BOOL)isDone;
-(NSString *)messageUUID;
-(unsigned char)command;
-(void)dealloc;
@end

