/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {

	unsigned _dataVersion;
	unsigned _formatVersion;
	unsigned _patchVersion;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasDataVersion; 
@property (assign,nonatomic) unsigned dataVersion; 
@property (assign,nonatomic) BOOL hasFormatVersion; 
@property (assign,nonatomic) unsigned formatVersion; 
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) unsigned patchVersion; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)patchVersion;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)dataVersion;
-(void)setDataVersion:(unsigned)arg1 ;
-(BOOL)hasDataVersion;
-(void)setHasDataVersion:(BOOL)arg1 ;
-(unsigned)formatVersion;
-(void)setFormatVersion:(unsigned)arg1 ;
-(void)setHasFormatVersion:(BOOL)arg1 ;
-(BOOL)hasFormatVersion;
-(void)setPatchVersion:(unsigned)arg1 ;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
@end

