/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOVLFCorrection;

@interface GEOVLFSuccessDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _inlierSuccessIndices;
	GEOVLFCorrection* _correction;
	double _poseConfidence;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_poseConfidence : 1;
		unsigned read_inlierSuccessIndices : 1;
		unsigned read_correction : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCorrection; 
@property (nonatomic,retain) GEOVLFCorrection * correction; 
@property (assign,nonatomic) BOOL hasPoseConfidence; 
@property (assign,nonatomic) double poseConfidence; 
@property (nonatomic,readonly) unsigned long long inlierSuccessIndicesCount; 
@property (nonatomic,readonly) unsigned* inlierSuccessIndices; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCorrection:(GEOVLFCorrection *)arg1 ;
-(void)setPoseConfidence:(double)arg1 ;
-(void)addInlierSuccessIndices:(unsigned)arg1 ;
-(unsigned long long)inlierSuccessIndicesCount;
-(void)clearInlierSuccessIndices;
-(unsigned)inlierSuccessIndicesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCorrection;
-(double)poseConfidence;
-(void)setHasPoseConfidence:(BOOL)arg1 ;
-(BOOL)hasPoseConfidence;
-(unsigned*)inlierSuccessIndices;
-(void)setInlierSuccessIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(GEOVLFCorrection *)correction;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

