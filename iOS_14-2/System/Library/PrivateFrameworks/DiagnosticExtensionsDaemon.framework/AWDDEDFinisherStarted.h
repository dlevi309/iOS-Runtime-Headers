/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDDEDFinisherStarted : PBCodable <NSCopying> {

	unsigned long long _numbytes;
	unsigned long long _numfiles;
	unsigned long long _timestamp;
	int _type;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumfiles; 
@property (assign,nonatomic) unsigned long long numfiles;               //@synthesize numfiles=_numfiles - In the implementation block
@property (assign,nonatomic) BOOL hasNumbytes; 
@property (assign,nonatomic) unsigned long long numbytes;               //@synthesize numbytes=_numbytes - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)numfiles;
-(unsigned long long)numbytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumfiles:(unsigned long long)arg1 ;
-(void)setNumbytes:(unsigned long long)arg1 ;
-(void)setHasNumfiles:(BOOL)arg1 ;
-(BOOL)hasNumfiles;
-(void)setHasNumbytes:(BOOL)arg1 ;
-(BOOL)hasNumbytes;
@end

