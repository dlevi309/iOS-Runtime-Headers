/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasBucketId; 
@property (assign,nonatomic) unsigned bucketId; 
@property (assign,nonatomic) BOOL hasDatasetId; 
@property (assign,nonatomic) unsigned datasetId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)bucketId;
-(void)setBucketId:(unsigned)arg1 ;
-(void)setHasBucketId:(BOOL)arg1 ;
-(BOOL)hasBucketId;
-(unsigned)datasetId;
-(void)setDatasetId:(unsigned)arg1 ;
-(BOOL)hasDatasetId;
-(void)setHasDatasetId:(BOOL)arg1 ;
@end

