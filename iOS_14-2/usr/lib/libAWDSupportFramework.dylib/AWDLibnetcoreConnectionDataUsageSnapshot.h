/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _multipathBytesInCell;
	unsigned long long _multipathBytesInInitial;
	unsigned long long _multipathBytesInWiFi;
	unsigned long long _multipathBytesOutCell;
	unsigned long long _multipathBytesOutInitial;
	unsigned long long _multipathBytesOutWiFi;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                               //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                              //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInCell; 
@property (assign,nonatomic) unsigned long long multipathBytesInCell;                  //@synthesize multipathBytesInCell=_multipathBytesInCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutCell; 
@property (assign,nonatomic) unsigned long long multipathBytesOutCell;                 //@synthesize multipathBytesOutCell=_multipathBytesOutCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesInWiFi;                  //@synthesize multipathBytesInWiFi=_multipathBytesInWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesOutWiFi;                 //@synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesInInitial;               //@synthesize multipathBytesInInitial=_multipathBytesInInitial - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesOutInitial;              //@synthesize multipathBytesOutInitial=_multipathBytesOutInitial - In the implementation block
-(void)setBytesOut:(unsigned long long)arg1 ;
-(unsigned long long)bytesOut;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(BOOL)hasBytesIn;
-(BOOL)hasBytesOut;
-(id)dictionaryRepresentation;
-(unsigned long long)bytesIn;
-(void)setHasMultipathBytesOutInitial:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInCell;
-(unsigned long long)multipathBytesInWiFi;
-(unsigned long long)multipathBytesOutInitial;
-(BOOL)hasMultipathBytesInInitial;
-(void)setHasMultipathBytesInInitial:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutCell;
-(void)setMultipathBytesInWiFi:(unsigned long long)arg1 ;
-(BOOL)hasMultipathBytesInWiFi;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMultipathBytesOutCell:(BOOL)arg1 ;
-(void)setHasMultipathBytesInCell:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutWiFi;
-(BOOL)hasMultipathBytesOutInitial;
-(void)setHasMultipathBytesInWiFi:(BOOL)arg1 ;
-(unsigned long long)multipathBytesOutWiFi;
-(id)description;
-(unsigned long long)multipathBytesInInitial;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(void)setMultipathBytesOutInitial:(unsigned long long)arg1 ;
-(unsigned long long)multipathBytesInCell;
-(void)setMultipathBytesInCell:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setMultipathBytesInInitial:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutWiFi:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMultipathBytesOutCell:(unsigned long long)arg1 ;
-(unsigned long long)multipathBytesOutCell;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMultipathBytesOutWiFi:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

