/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEORegionalResourceTileData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributions;
	NSMutableArray* _filenames;
	NSMutableArray* _icons;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_attributions : 1;
		unsigned read_filenames : 1;
		unsigned read_icons : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * icons; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,retain) NSMutableArray * filenames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)filenameType;
+(Class)attributionType;
+(Class)iconType;
+(BOOL)isValid:(id)arg1 ;
-(void)clearAttributions;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)iconsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(NSMutableArray *)icons;
-(id)jsonRepresentation;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)clearIcons;
-(unsigned long long)attributionsCount;
-(void)addFilename:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(id)filenameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)filenamesCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addIcon:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearFilenames;
-(NSMutableArray *)filenames;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFilenames:(NSMutableArray *)arg1 ;
@end

