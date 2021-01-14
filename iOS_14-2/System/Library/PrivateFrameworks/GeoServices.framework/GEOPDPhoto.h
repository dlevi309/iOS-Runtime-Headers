/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDPhoto : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _photoId;
	NSMutableArray* _photoVersions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_photoId : 1;
		unsigned read_photoVersions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId; 
@property (nonatomic,retain) NSMutableArray * photoVersions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)photoVersionType;
+(BOOL)isValid:(id)arg1 ;
+(id)photosForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(id)bestURL;
-(NSString *)photoId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPhotoId:(NSString *)arg1 ;
-(void)addPhotoVersion:(id)arg1 ;
-(unsigned long long)photoVersionsCount;
-(void)clearPhotoVersions;
-(id)photoVersionAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoVersions:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasPhotoId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)photoVersions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

