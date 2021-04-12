/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>
#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage <IDSSocketPairMessage> {

	unsigned long long _offset;
	unsigned char _versionNumber;
	BOOL _encrypted;
	BOOL _shouldEncrypt;
	unsigned char _protectionClass;
	unsigned short _streamID;
	unsigned short _priority;
	unsigned _sequenceNumber;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned char versionNumber;                    //@synthesize versionNumber=_versionNumber - In the implementation block
@property (nonatomic,readonly) BOOL encrypted;                                 //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) BOOL shouldEncrypt;                             //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (nonatomic,readonly) unsigned char protectionClass;                  //@synthesize protectionClass=_protectionClass - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) unsigned short priority;                        //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
-(id)description;
-(NSData *)data;
-(unsigned char)versionNumber;
-(unsigned short)priority;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(BOOL)encrypted;
-(unsigned char)protectionClass;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(id)initWithVersion:(unsigned char)arg1 encrypted:(BOOL)arg2 shouldEncrypt:(BOOL)arg3 protectionClass:(unsigned char)arg4 streamID:(unsigned short)arg5 priority:(unsigned short)arg6 sequenceNumber:(unsigned)arg7 data:(id)arg8 ;
-(BOOL)shouldEncrypt;
@end

