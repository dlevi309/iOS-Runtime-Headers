/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDMapsSearchHomeResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _mapsSearchHomeSections;

}

@property (nonatomic,retain) NSMutableArray * mapsSearchHomeSections; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)mapsSearchHomeSectionType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)addMapsSearchHomeSection:(id)arg1 ;
-(unsigned long long)mapsSearchHomeSectionsCount;
-(void)clearMapsSearchHomeSections;
-(id)mapsSearchHomeSectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)mapsSearchHomeSections;
-(void)setMapsSearchHomeSections:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

