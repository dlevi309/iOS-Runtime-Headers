/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsScanObj : PBCodable <NSCopying> {

	unsigned _durScans;
	unsigned _numScans;
	unsigned _scanType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasScanType; 
@property (assign,nonatomic) unsigned scanType;              //@synthesize scanType=_scanType - In the implementation block
@property (assign,nonatomic) BOOL hasNumScans; 
@property (assign,nonatomic) unsigned numScans;              //@synthesize numScans=_numScans - In the implementation block
@property (assign,nonatomic) BOOL hasDurScans; 
@property (assign,nonatomic) unsigned durScans;              //@synthesize durScans=_durScans - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)scanType;
-(void)setScanType:(unsigned)arg1 ;
-(void)setHasScanType:(BOOL)arg1 ;
-(BOOL)hasScanType;
-(void)setNumScans:(unsigned)arg1 ;
-(void)setHasNumScans:(BOOL)arg1 ;
-(BOOL)hasNumScans;
-(void)setDurScans:(unsigned)arg1 ;
-(void)setHasDurScans:(BOOL)arg1 ;
-(BOOL)hasDurScans;
-(unsigned)numScans;
-(unsigned)durScans;
@end

