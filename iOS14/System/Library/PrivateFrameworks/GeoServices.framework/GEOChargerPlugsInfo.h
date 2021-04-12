/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOChargerPlugsInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _suggestedChargerPlugs;
	NSMutableArray* _supportedChargerPlugs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_suggestedChargerPlugs : 1;
		unsigned read_supportedChargerPlugs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * suggestedChargerPlugs; 
@property (nonatomic,retain) NSMutableArray * supportedChargerPlugs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)suggestedChargerPlugType;
+(Class)supportedChargerPlugType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addSuggestedChargerPlug:(id)arg1 ;
-(void)addSupportedChargerPlug:(id)arg1 ;
-(unsigned long long)suggestedChargerPlugsCount;
-(void)clearSuggestedChargerPlugs;
-(id)suggestedChargerPlugAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedChargerPlugsCount;
-(void)clearSupportedChargerPlugs;
-(id)supportedChargerPlugAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)suggestedChargerPlugs;
-(void)setSuggestedChargerPlugs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)supportedChargerPlugs;
-(void)setSupportedChargerPlugs:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

