/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormattedString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBDataReader, PBUnknownFields, GEOConditionalFormattedString, NSMutableArray, GEOFormattedStringMetaData, NSString;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOConditionalFormattedString* _alternativeString;
	NSMutableArray* _formatArguments;
	NSMutableArray* _formatStrings;
	NSMutableArray* _formatStyles;
	GEOFormattedStringMetaData* _metaData;
	NSMutableArray* _separators;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_alternativeString : 1;
		unsigned read_formatArguments : 1;
		unsigned read_formatStrings : 1;
		unsigned read_formatStyles : 1;
		unsigned read_metaData : 1;
		unsigned read_separators : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * formatStrings; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@property (nonatomic,readonly) NSArray * separators; 
@property (nonatomic,readonly) NSArray * formatStyles; 
@property (nonatomic,readonly) id<GEOServerConditionalString> alternativeString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * formatStrings; 
@property (nonatomic,retain) NSMutableArray * formatArguments; 
@property (nonatomic,retain) NSMutableArray * separators; 
@property (nonatomic,retain) NSMutableArray * formatStyles; 
@property (nonatomic,readonly) BOOL hasAlternativeString; 
@property (nonatomic,retain) GEOConditionalFormattedString * alternativeString; 
@property (nonatomic,readonly) BOOL hasMetaData; 
@property (nonatomic,retain) GEOFormattedStringMetaData * metaData; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)formatStringType;
+(Class)formatArgumentType;
+(Class)separatorType;
+(Class)formatStyleType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(id)initWithString:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSArray *)formatStrings;
-(NSArray *)formatTokens;
-(id<GEOServerConditionalString>)alternativeString;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)addFormatString:(id)arg1 ;
-(void)setMetaData:(GEOFormattedStringMetaData *)arg1 ;
-(void)addFormatArgument:(id)arg1 ;
-(void)addSeparator:(id)arg1 ;
-(void)addFormatStyle:(id)arg1 ;
-(void)setAlternativeString:(id<GEOServerConditionalString>)arg1 ;
-(unsigned long long)formatStringsCount;
-(void)clearFormatStrings;
-(id)formatStringAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)formatArgumentsCount;
-(void)clearFormatArguments;
-(id)formatArgumentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)separatorsCount;
-(void)clearSeparators;
-(id)separatorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)formatStylesCount;
-(void)clearFormatStyles;
-(id)formatStyleAtIndex:(unsigned long long)arg1 ;
-(void)setFormatStrings:(NSArray *)arg1 ;
-(void)setFormatArguments:(NSMutableArray *)arg1 ;
-(void)setSeparators:(NSArray *)arg1 ;
-(NSArray *)formatStyles;
-(void)setFormatStyles:(NSArray *)arg1 ;
-(BOOL)hasAlternativeString;
-(BOOL)hasMetaData;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(GEOFormattedStringMetaData *)metaData;
-(NSMutableArray *)formatArguments;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)separators;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

