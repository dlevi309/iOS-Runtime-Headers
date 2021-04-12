/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW7 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)operationType;
-(void)setOperationType:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)errorCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
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

