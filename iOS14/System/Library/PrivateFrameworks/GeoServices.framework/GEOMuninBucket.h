/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	struct {
		unsigned has_bucketID : 1;
		unsigned has_lodLevel : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBucketID; 
@property (assign,nonatomic) unsigned bucketID; 
@property (nonatomic,readonly) BOOL hasBucketURL; 
@property (nonatomic,retain) NSString * bucketURL; 
@property (assign,nonatomic) BOOL hasLodLevel; 
@property (assign,nonatomic) unsigned lodLevel; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setBucketURL:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(void)setBucketID:(unsigned)arg1 ;
-(unsigned)lodLevel;
-(void)setHasBucketID:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBucketURL;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasBucketID;
-(id)description;
-(void)setLodLevel:(unsigned)arg1 ;
-(unsigned)bucketID;
-(void)setHasLodLevel:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)bucketURL;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLodLevel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

