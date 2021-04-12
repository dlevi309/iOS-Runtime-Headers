/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormattedString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBDataReader, PBUnknownFields, GEOConditionalFormattedString, NSMutableArray, NSString;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOConditionalFormattedString* _alternativeString;
	NSMutableArray* _formatArguments;
	NSMutableArray* _formatStrings;
	NSMutableArray* _formatStyles;
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
		unsigned read_separators : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_alternativeString : 1;
		unsigned wrote_formatArguments : 1;
		unsigned wrote_formatStrings : 1;
		unsigned wrote_formatStyles : 1;
		unsigned wrote_separators : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * formatStrings; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@property (nonatomic,readonly) NSArray * separators; 
@property (nonatomic,readonly) NSArray * formatStyles; 
@property (nonatomic,readonly) id<GEOServerConditionalString> alternativeString; 
@property (nonatomic,retain) NSMutableArray * formatStrings; 
@property (nonatomic,retain) NSMutableArray * formatArguments; 
@property (nonatomic,retain) NSMutableArray * separators; 
@property (nonatomic,retain) NSMutableArray * formatStyles; 
@property (nonatomic,readonly) BOOL hasAlternativeString; 
@property (nonatomic,retain) GEOConditionalFormattedString * alternativeString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)formatStringType;
+(Class)formatArgumentType;
+(Class)separatorType;
+(Class)formatStyleType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSArray *)formatStrings;
-(NSArray *)separators;
-(NSArray *)formatTokens;
-(id<GEOServerConditionalString>)alternativeString;
-(void)_readFormatStrings;
-(void)_addNoFlagsFormatString:(id)arg1 ;
-(void)_readFormatArguments;
-(void)_addNoFlagsFormatArgument:(id)arg1 ;
-(void)_readSeparators;
-(void)_addNoFlagsSeparator:(id)arg1 ;
-(void)_readFormatStyles;
-(void)_addNoFlagsFormatStyle:(id)arg1 ;
-(void)_readAlternativeString;
-(unsigned long long)formatStringsCount;
-(void)clearFormatStrings;
-(id)formatStringAtIndex:(unsigned long long)arg1 ;
-(void)addFormatString:(id)arg1 ;
-(unsigned long long)formatArgumentsCount;
-(void)clearFormatArguments;
-(id)formatArgumentAtIndex:(unsigned long long)arg1 ;
-(void)addFormatArgument:(id)arg1 ;
-(unsigned long long)separatorsCount;
-(void)clearSeparators;
-(id)separatorAtIndex:(unsigned long long)arg1 ;
-(void)addSeparator:(id)arg1 ;
-(unsigned long long)formatStylesCount;
-(void)clearFormatStyles;
-(id)formatStyleAtIndex:(unsigned long long)arg1 ;
-(void)addFormatStyle:(id)arg1 ;
-(void)setAlternativeString:(id<GEOServerConditionalString>)arg1 ;
-(NSMutableArray *)formatArguments;
-(NSArray *)formatStyles;
-(void)setFormatStrings:(NSArray *)arg1 ;
-(void)setFormatArguments:(NSMutableArray *)arg1 ;
-(void)setSeparators:(NSArray *)arg1 ;
-(void)setFormatStyles:(NSArray *)arg1 ;
-(BOOL)hasAlternativeString;
@end

