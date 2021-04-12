/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYLogErrorInfo, NSString, NSMutableArray, NSDictionary;

@interface SYLogSessionState : PBCodable <NSCopying> {

	double _fullSessionTimeout;
	unsigned long long _maxConcurrentMessages;
	double _perMessageTimeout;
	SYLogErrorInfo* _error;
	NSString* _identifier;
	NSMutableArray* _peers;
	NSString* _reason;
	int _state;
	NSMutableArray* _transportOptions;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _canceled;
	BOOL _isReset;
	BOOL _isSending;
	SCD_Struct_SY9 _has;

}

@property (nonatomic,retain) NSDictionary * cocoaTransportOptions; 
@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isSending;                                        //@synthesize isSending=_isSending - In the implementation block
@property (assign,nonatomic) BOOL hasIsReset; 
@property (assign,nonatomic) BOOL isReset;                                          //@synthesize isReset=_isReset - In the implementation block
@property (assign,nonatomic) BOOL hasPerMessageTimeout; 
@property (assign,nonatomic) double perMessageTimeout;                              //@synthesize perMessageTimeout=_perMessageTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasFullSessionTimeout; 
@property (assign,nonatomic) double fullSessionTimeout;                             //@synthesize fullSessionTimeout=_fullSessionTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrentMessages;              //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYLogErrorInfo * error;                                //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasCanRestart; 
@property (assign,nonatomic) BOOL canRestart;                                       //@synthesize canRestart=_canRestart - In the implementation block
@property (assign,nonatomic) BOOL hasCanRollback; 
@property (assign,nonatomic) BOOL canRollback;                                      //@synthesize canRollback=_canRollback - In the implementation block
@property (assign,nonatomic) BOOL hasCanceled; 
@property (assign,nonatomic) BOOL canceled;                                         //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,retain) NSMutableArray * transportOptions;                     //@synthesize transportOptions=_transportOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * peers;                                //@synthesize peers=_peers - In the implementation block
@property (nonatomic,readonly) BOOL hasReason; 
@property (nonatomic,retain) NSString * reason;                                     //@synthesize reason=_reason - In the implementation block
+(Class)transportOptionsType;
+(Class)peerType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(NSString *)identifier;
-(SYLogErrorInfo *)error;
-(void)setError:(SYLogErrorInfo *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)state;
-(void)setState:(int)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)isReset;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)hasError;
-(BOOL)hasCanceled;
-(void)setHasCanceled:(BOOL)arg1 ;
-(NSMutableArray *)peers;
-(void)setPeers:(NSMutableArray *)arg1 ;
-(BOOL)hasReason;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1 ;
-(BOOL)isSending;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)addTransportOptions:(id)arg1 ;
-(unsigned long long)transportOptionsCount;
-(void)clearTransportOptions;
-(id)transportOptionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transportOptions;
-(void)setTransportOptions:(NSMutableArray *)arg1 ;
-(double)fullSessionTimeout;
-(double)perMessageTimeout;
-(void)setCocoaTransportOptions:(NSDictionary *)arg1 ;
-(void)setFullSessionTimeout:(double)arg1 ;
-(void)addPeer:(id)arg1 ;
-(unsigned long long)peersCount;
-(void)clearPeers;
-(id)peerAtIndex:(unsigned long long)arg1 ;
-(void)setIsReset:(BOOL)arg1 ;
-(void)setHasIsReset:(BOOL)arg1 ;
-(BOOL)hasIsReset;
-(void)setPerMessageTimeout:(double)arg1 ;
-(void)setHasPerMessageTimeout:(BOOL)arg1 ;
-(BOOL)hasPerMessageTimeout;
-(void)setHasFullSessionTimeout:(BOOL)arg1 ;
-(BOOL)hasFullSessionTimeout;
-(void)setHasCanRestart:(BOOL)arg1 ;
-(BOOL)hasCanRestart;
-(void)setHasCanRollback:(BOOL)arg1 ;
-(BOOL)hasCanRollback;
-(void)setIsSending:(BOOL)arg1 ;
-(NSDictionary *)cocoaTransportOptions;
@end

