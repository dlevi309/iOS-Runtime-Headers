/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDABClientDatasetMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _bucketId;
	unsigned _datasetId;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasBucketId; 
@property (assign,nonatomic) unsigned bucketId; 
@property (assign,nonatomic) BOOL hasDatasetId; 
@property (assign,nonatomic) unsigned datasetId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDatasetId:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setBucketId:(unsigned)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasDatasetId;
-(void)setHasDatasetId:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBucketId;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasBucketId:(BOOL)arg1 ;
-(id)description;
-(unsigned)bucketId;
-(unsigned)datasetId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

