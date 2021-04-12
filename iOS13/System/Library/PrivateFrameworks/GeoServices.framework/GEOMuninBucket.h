/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOMuninBucket : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _bucketURL;
	unsigned _bucketID;
	unsigned _lodLevel;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasBucketID; 
@property (assign,nonatomic) unsigned bucketID; 
@property (nonatomic,readonly) BOOL hasBucketURL; 
@property (nonatomic,retain) NSString * bucketURL; 
@property (assign,nonatomic) BOOL hasLodLevel; 
@property (assign,nonatomic) unsigned lodLevel; 
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
-(BOOL)hasLodLevel;
-(BOOL)hasBucketID;
-(unsigned)bucketID;
-(BOOL)hasBucketURL;
-(unsigned)lodLevel;
-(NSString *)bucketURL;
-(void)setBucketURL:(NSString *)arg1 ;
-(void)setBucketID:(unsigned)arg1 ;
-(void)setHasBucketID:(BOOL)arg1 ;
-(void)setLodLevel:(unsigned)arg1 ;
-(void)setHasLodLevel:(BOOL)arg1 ;
@end

