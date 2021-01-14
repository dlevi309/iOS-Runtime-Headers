/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOPDStorefrontPresentation;

@interface GEOPDStorefrontBundle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _faces;
	unsigned long long _identifier;
	unsigned long long _matchedMuid;
	GEOPDStorefrontPresentation* _presentation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_identifier : 1;
		unsigned has_matchedMuid : 1;
		unsigned read_faces : 1;
		unsigned read_presentation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,readonly) BOOL hasPresentation; 
@property (nonatomic,retain) GEOPDStorefrontPresentation * presentation; 
@property (nonatomic,retain) NSMutableArray * faces; 
@property (assign,nonatomic) BOOL hasMatchedMuid; 
@property (assign,nonatomic) unsigned long long matchedMuid; 
+(Class)faceType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)faces;
-(void)readAll:(BOOL)arg1 ;
-(void)setPresentation:(GEOPDStorefrontPresentation *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addFace:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)description;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(GEOPDStorefrontPresentation *)presentation;
-(unsigned long long)hash;
-(void)setFaces:(NSMutableArray *)arg1 ;
-(unsigned long long)matchedMuid;
-(void)setMatchedMuid:(unsigned long long)arg1 ;
-(BOOL)hasPresentation;
-(void)setHasMatchedMuid:(BOOL)arg1 ;
-(BOOL)hasMatchedMuid;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)facesCount;
-(void)clearFaces;
@end

