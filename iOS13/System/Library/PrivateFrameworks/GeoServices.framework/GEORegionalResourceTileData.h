/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSMutableArray* _icons;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_attributions : 1;
		unsigned read_icons : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_attributions : 1;
		unsigned wrote_icons : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * icons; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)attributionType;
+(Class)iconType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)icons;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAttributions;
-(void)_addNoFlagsAttribution:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(NSMutableArray *)attributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)_readIcons;
-(void)_addNoFlagsIcon:(id)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(void)addIcon:(id)arg1 ;
@end

