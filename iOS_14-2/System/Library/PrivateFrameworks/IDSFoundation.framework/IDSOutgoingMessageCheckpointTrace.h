/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange, IDSPeerMessageCheckpointTrace;

@interface IDSOutgoingMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	NSString* _service;
	long long _command;
	long long _priority;
	CUTCheckpointRange* _sendToDaemon;
	CUTCheckpointRange* _storeInDatabase;
	CUTCheckpointRange* _compressPayload;
	IDSPeerMessageCheckpointTrace* _peerMessageTrace;
	unsigned long long _uncompressedMessageSize;
	unsigned long long _compressedMessageSize;

}

@property (nonatomic,readonly) NSString * guid;                                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * service;                                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long command;                                             //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) long long priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * sendToDaemon;                             //@synthesize sendToDaemon=_sendToDaemon - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInDatabase;                          //@synthesize storeInDatabase=_storeInDatabase - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * compressPayload;                          //@synthesize compressPayload=_compressPayload - In the implementation block
@property (nonatomic,readonly) IDSPeerMessageCheckpointTrace * peerMessageTrace;              //@synthesize peerMessageTrace=_peerMessageTrace - In the implementation block
@property (assign,nonatomic) unsigned long long uncompressedMessageSize;                      //@synthesize uncompressedMessageSize=_uncompressedMessageSize - In the implementation block
@property (assign,nonatomic) unsigned long long compressedMessageSize;                        //@synthesize compressedMessageSize=_compressedMessageSize - In the implementation block
-(NSString *)guid;
-(id)_reportMetadata;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(long long)command;
-(CUTCheckpointRange *)sendToDaemon;
-(long long)priority;
-(unsigned long long)uncompressedMessageSize;
-(unsigned long long)compressedMessageSize;
-(CUTCheckpointRange *)storeInDatabase;
-(CUTCheckpointRange *)compressPayload;
-(IDSPeerMessageCheckpointTrace *)peerMessageTrace;
-(void)setUncompressedMessageSize:(unsigned long long)arg1 ;
-(void)setCompressedMessageSize:(unsigned long long)arg1 ;
-(id)initWithGuid:(id)arg1 service:(id)arg2 command:(long long)arg3 priority:(long long)arg4 ;
-(NSString *)service;
@end

