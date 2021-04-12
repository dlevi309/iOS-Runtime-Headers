/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEORPFeedbackLayoutFieldName;

@interface GEORPLayoutField : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _displayText;
	GEORPFeedbackLayoutFieldName* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _ordinal;
	int _type;
	BOOL _enabled;
	struct {
		unsigned has_ordinal : 1;
		unsigned has_type : 1;
		unsigned has_enabled : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayText : 1;
		unsigned read_name : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayText : 1;
		unsigned wrote_name : 1;
		unsigned wrote_ordinal : 1;
		unsigned wrote_type : 1;
		unsigned wrote_enabled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEORPFeedbackLayoutFieldName * name; 
@property (nonatomic,readonly) BOOL hasDisplayText; 
@property (nonatomic,retain) NSString * displayText; 
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) unsigned ordinal; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEORPFeedbackLayoutFieldName *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(GEORPFeedbackLayoutFieldName *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasName;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(unsigned)ordinal;
-(void)setOrdinal:(unsigned)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(BOOL)hasOrdinal;
-(void)_readDisplayText;
-(BOOL)hasDisplayText;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
@end

