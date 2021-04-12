/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDMapsIdentifier, NSMutableArray;

@interface GEOPDTransitConnection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _entityNameString;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _muid;
	NSMutableArray* _transitLabels;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_muid : 1;
		unsigned read_unknownFields : 1;
		unsigned read_entityNameString : 1;
		unsigned read_mapsId : 1;
		unsigned read_transitLabels : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_entityNameString : 1;
		unsigned wrote_mapsId : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_transitLabels : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,retain) NSMutableArray * transitLabels; 
@property (nonatomic,readonly) BOOL hasEntityNameString; 
@property (nonatomic,retain) NSString * entityNameString; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)transitLabelType;
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
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(GEOPDMapsIdentifier *)mapsId;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readMapsId;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMapsId;
-(NSString *)entityNameString;
-(NSMutableArray *)transitLabels;
-(void)_readTransitLabels;
-(void)_addNoFlagsTransitLabel:(id)arg1 ;
-(void)_readEntityNameString;
-(unsigned long long)transitLabelsCount;
-(void)clearTransitLabels;
-(id)transitLabelAtIndex:(unsigned long long)arg1 ;
-(void)addTransitLabel:(id)arg1 ;
-(void)setEntityNameString:(NSString *)arg1 ;
-(void)setTransitLabels:(NSMutableArray *)arg1 ;
-(BOOL)hasEntityNameString;
@end

