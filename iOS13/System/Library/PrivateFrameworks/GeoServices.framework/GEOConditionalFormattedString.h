/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_condition : 1;
		unsigned wrote_formattedString : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOServerFormattedString> formattedString; 
@property (nonatomic,readonly) id<GEOServerCondition> condition; 
@property (nonatomic,readonly) BOOL hasFormattedString; 
@property (nonatomic,retain) GEOFormattedString * formattedString; 
@property (nonatomic,readonly) BOOL hasCondition; 
@property (nonatomic,retain) GEOCondition * condition; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id<GEOServerCondition>)condition;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCondition:(id<GEOServerCondition>)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id<GEOServerFormattedString>)formattedString;
-(void)_readFormattedString;
-(void)_readCondition;
-(void)setFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(BOOL)hasFormattedString;
-(BOOL)hasCondition;
@end

