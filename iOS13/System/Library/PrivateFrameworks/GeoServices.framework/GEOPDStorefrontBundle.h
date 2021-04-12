/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_faces : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_matchedMuid : 1;
		unsigned wrote_presentation : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,readonly) BOOL hasPresentation; 
@property (nonatomic,retain) GEOPDStorefrontPresentation * presentation; 
@property (nonatomic,retain) NSMutableArray * faces; 
@property (assign,nonatomic) BOOL hasMatchedMuid; 
@property (assign,nonatomic) unsigned long long matchedMuid; 
+(BOOL)isValid:(id)arg1 ;
+(Class)faceType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setFaces:(NSMutableArray *)arg1 ;
-(NSMutableArray *)faces;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPresentation:(GEOPDStorefrontPresentation *)arg1 ;
-(GEOPDStorefrontPresentation *)presentation;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)_readPresentation;
-(void)_readFaces;
-(void)_addNoFlagsFace:(id)arg1 ;
-(unsigned long long)facesCount;
-(void)clearFaces;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(void)addFace:(id)arg1 ;
-(BOOL)hasPresentation;
-(unsigned long long)matchedMuid;
-(void)setMatchedMuid:(unsigned long long)arg1 ;
-(void)setHasMatchedMuid:(BOOL)arg1 ;
-(BOOL)hasMatchedMuid;
@end

