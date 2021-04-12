/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)scanType;
-(void)setHasScanType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setScanType:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasScanType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumScans:(unsigned)arg1 ;
-(void)setHasNumScans:(BOOL)arg1 ;
-(BOOL)hasNumScans;
-(void)setDurScans:(unsigned)arg1 ;
-(void)setHasDurScans:(BOOL)arg1 ;
-(BOOL)hasDurScans;
-(unsigned)numScans;
-(unsigned)durScans;
@end

