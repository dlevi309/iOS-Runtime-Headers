/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNFCPTOperation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _awdErrorCode;
	unsigned _errorCode;
	unsigned _errorStep;
	unsigned _operationType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) unsigned operationType;                    //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) BOOL hasErrorStep; 
@property (assign,nonatomic) unsigned errorStep;                        //@synthesize errorStep=_errorStep - In the implementation block
@property (assign,nonatomic) BOOL hasAwdErrorCode; 
@property (assign,nonatomic) unsigned awdErrorCode;                     //@synthesize awdErrorCode=_awdErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
-(unsigned)operationType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)errorCode;
-(BOOL)hasErrorCode;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setOperationType:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(void)setErrorStep:(unsigned)arg1 ;
-(void)setHasErrorStep:(BOOL)arg1 ;
-(BOOL)hasErrorStep;
-(void)setAwdErrorCode:(unsigned)arg1 ;
-(void)setHasAwdErrorCode:(BOOL)arg1 ;
-(BOOL)hasAwdErrorCode;
-(unsigned)errorStep;
-(unsigned)awdErrorCode;
@end

