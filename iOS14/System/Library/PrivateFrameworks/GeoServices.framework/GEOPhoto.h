/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _photoInfos;
	NSString* _uid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _photoType;
	struct {
		unsigned has_photoType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_photoInfos : 1;
		unsigned read_uid : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPhotoType; 
@property (assign,nonatomic) int photoType; 
@property (nonatomic,retain) NSMutableArray * photoInfos; 
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)photoInfoType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUid:(NSString *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)uid;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasUid;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPhotoType:(int)arg1 ;
-(unsigned long long)photoInfosCount;
-(void)clearPhotoInfos;
-(id)photoInfoAtIndex:(unsigned long long)arg1 ;
-(int)photoType;
-(void)setHasPhotoType:(BOOL)arg1 ;
-(BOOL)hasPhotoType;
-(id)photoTypeAsString:(int)arg1 ;
-(int)StringAsPhotoType:(id)arg1 ;
-(NSMutableArray *)photoInfos;
-(void)setPhotoInfos:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithPlaceDataPhoto:(id)arg1 ;
-(void)addPhotoInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

