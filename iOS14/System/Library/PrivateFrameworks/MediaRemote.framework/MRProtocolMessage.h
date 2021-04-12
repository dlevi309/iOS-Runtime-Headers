/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSData, MSVMultiCallback, PBCodable, NSError, NSString, MRProtocolClientConnection;

@interface MRProtocolMessage : NSObject {

	NSData* _protobufData;
	BOOL _replied;
	MSVMultiCallback* _messageSentCallbacks;
	MSVMultiCallback* _messagePurgedCallbacks;
	BOOL _isReply;
	PBCodable* _underlyingCodableMessage;
	NSError* _error;
	NSString* _replyIdentifier;
	NSString* _uniqueIdentifier;
	unsigned long long _timestamp;
	MRProtocolClientConnection* _clientConnection;

}

@property (nonatomic,retain) PBCodable * underlyingCodableMessage;                              //@synthesize underlyingCodableMessage=_underlyingCodableMessage - In the implementation block
@property (nonatomic,copy) NSString * replyIdentifier;                                          //@synthesize replyIdentifier=_replyIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) MRProtocolClientConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                                      //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,readonly) NSData * protobufData; 
@property (nonatomic,readonly) unsigned long long encryptionType; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) MSVMultiCallback * messageSentCallbacks; 
@property (nonatomic,readonly) MSVMultiCallback * messagePurgedCallbacks; 
+(unsigned long long)currentProtocolVersion;
+(id)protocolMessageWithProtobufData:(id)arg1 error:(id*)arg2 ;
-(MRProtocolClientConnection *)clientConnection;
-(void)setClientConnection:(MRProtocolClientConnection *)arg1 ;
-(MSVMultiCallback *)messagePurgedCallbacks;
-(BOOL)replyWithMessage:(id)arg1 ;
-(unsigned long long)timestamp;
-(NSString *)uniqueIdentifier;
-(unsigned long long)encryptionType;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSData *)protobufData;
-(BOOL)shouldLog;
-(MSVMultiCallback *)messageSentCallbacks;
-(NSString *)description;
-(BOOL)reply;
-(unsigned long long)type;
-(PBCodable *)underlyingCodableMessage;
-(void)setUnderlyingCodableMessage:(PBCodable *)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(unsigned long long)priority;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isReply;
-(NSString *)replyIdentifier;
-(void)setReplyIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)setIsReply:(BOOL)arg1 ;
@end

