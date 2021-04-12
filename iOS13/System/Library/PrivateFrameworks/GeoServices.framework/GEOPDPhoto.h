/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_photoId : 1;
		unsigned wrote_photoVersions : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId; 
@property (nonatomic,retain) NSMutableArray * photoVersions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)photoVersionType;
+(id)photosForPlaceData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)bestURL;
-(void)_readPhotoId;
-(void)_readPhotoVersions;
-(void)_addNoFlagsPhotoVersion:(id)arg1 ;
-(NSString *)photoId;
-(void)setPhotoId:(NSString *)arg1 ;
-(unsigned long long)photoVersionsCount;
-(void)clearPhotoVersions;
-(id)photoVersionAtIndex:(unsigned long long)arg1 ;
-(void)addPhotoVersion:(id)arg1 ;
-(NSMutableArray *)photoVersions;
-(BOOL)hasPhotoId;
-(void)setPhotoVersions:(NSMutableArray *)arg1 ;
@end

