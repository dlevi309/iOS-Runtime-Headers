/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _identifier;
	unsigned long long _timestamp;
	MRProtocolClientConnection* _clientConnection;

}

@property (nonatomic,retain) PBCodable * underlyingCodableMessage;                              //@synthesize underlyingCodableMessage=_underlyingCodableMessage - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) MRProtocolClientConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                                      //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,readonly) NSData * protobufData; 
@property (nonatomic,readonly) unsigned long long encryptionType; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) MSVMultiCallback * messageSentCallbacks; 
@property (nonatomic,readonly) MSVMultiCallback * messagePurgedCallbacks; 
+(unsigned long long)currentProtocolVersion;
+(id)protocolMessageWithProtobufData:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)type;
-(NSString *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)priority;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)encryptionType;
-(BOOL)reply;
-(BOOL)shouldLog;
-(MRProtocolClientConnection *)clientConnection;
-(void)setClientConnection:(MRProtocolClientConnection *)arg1 ;
-(BOOL)isReply;
-(void)setIsReply:(BOOL)arg1 ;
-(void)setUnderlyingCodableMessage:(PBCodable *)arg1 ;
-(PBCodable *)underlyingCodableMessage;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(MSVMultiCallback *)messagePurgedCallbacks;
-(BOOL)replyWithMessage:(id)arg1 ;
-(NSData *)protobufData;
-(MSVMultiCallback *)messageSentCallbacks;
@end

