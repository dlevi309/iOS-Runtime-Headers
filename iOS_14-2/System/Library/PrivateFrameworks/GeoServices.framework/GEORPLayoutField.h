/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPFeedbackLayoutFieldName;

@interface GEORPLayoutField : PBCodable <NSCopying> {

	PBDataReader* _reader;
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
		unsigned read_displayText : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
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
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)enabled;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasName;
-(unsigned)ordinal;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasEnabled;
-(id)jsonRepresentation;
-(void)setOrdinal:(unsigned)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasDisplayText;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPFeedbackLayoutFieldName *)name;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(void)setDisplayText:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(GEORPFeedbackLayoutFieldName *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)displayText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasOrdinal;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

