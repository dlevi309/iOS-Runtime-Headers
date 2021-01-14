/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerConditionalString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOCondition, GEOFormattedString, NSString;

@interface GEOConditionalFormattedString : PBCodable <GEOServerConditionalString, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOCondition* _condition;
	GEOFormattedString* _formattedString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_condition : 1;
		unsigned read_formattedString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) id<GEOServerFormattedString> formattedString; 
@property (nonatomic,readonly) id<GEOServerCondition> condition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasFormattedString; 
@property (nonatomic,retain) GEOFormattedString * formattedString; 
@property (nonatomic,readonly) BOOL hasCondition; 
@property (nonatomic,retain) GEOCondition * condition; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setCondition:(id<GEOServerCondition>)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(BOOL)hasFormattedString;
-(BOOL)hasCondition;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id<GEOServerCondition>)condition;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id<GEOServerFormattedString>)formattedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

