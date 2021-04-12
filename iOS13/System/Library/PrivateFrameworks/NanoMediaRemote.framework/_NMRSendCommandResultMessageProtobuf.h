/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _NMRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_NM13* _handlerReturnStatus;
	double _timestamp;
	unsigned _errorCode;
	int _originIdentifier;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) unsigned long long handlerReturnStatusCount; 
@property (nonatomic,readonly) unsigned* handlerReturnStatus; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                                       //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)originIdentifier;
-(unsigned)errorCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned long long)handlerReturnStatusCount;
-(void)clearHandlerReturnStatus;
-(unsigned)handlerReturnStatusAtIndex:(unsigned long long)arg1 ;
-(void)addHandlerReturnStatus:(unsigned)arg1 ;
-(unsigned*)handlerReturnStatus;
-(void)setHandlerReturnStatus:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
@end

