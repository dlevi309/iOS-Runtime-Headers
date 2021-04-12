/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatTokenCountdownValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSString, PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOCountdownData : PBCodable <GEOServerFormatTokenCountdownValue, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _alternateCountdownTypes;
	SCD_Struct_GE19* _timestampValues;
	NSMutableArray* _alternateFormatStrings;
	NSString* _separator;
	NSString* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_alternateCountdownTypes : 1;
		unsigned read_timestampValues : 1;
		unsigned read_alternateFormatStrings : 1;
		unsigned read_separator : 1;
		unsigned read_timezone : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_alternateCountdownTypes : 1;
		unsigned wrote_timestampValues : 1;
		unsigned wrote_alternateFormatStrings : 1;
		unsigned wrote_separator : 1;
		unsigned wrote_timezone : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long countdownType; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSDictionary * alternativeFormatStringsByType; 
@property (nonatomic,readonly) NSString * separator; 
@property (nonatomic,readonly) unsigned long long timestampValuesCount; 
@property (nonatomic,readonly) unsigned* timestampValues; 
@property (nonatomic,retain) NSMutableArray * alternateFormatStrings; 
@property (nonatomic,readonly) unsigned long long alternateCountdownTypesCount; 
@property (nonatomic,readonly) int* alternateCountdownTypes; 
@property (nonatomic,readonly) BOOL hasSeparator; 
@property (nonatomic,retain) NSString * separator; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) NSString * timezone; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)alternateFormatStringType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSArray *)timestamps;
-(NSString *)timezone;
-(NSString *)separator;
-(BOOL)hasSeparator;
-(void)setSeparator:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTimezone;
-(void)setTimezone:(NSString *)arg1 ;
-(BOOL)hasTimezone;
-(void)_readTimestampValues;
-(void)_addNoFlagsTimestampValue:(unsigned)arg1 ;
-(void)_readAlternateFormatStrings;
-(void)_addNoFlagsAlternateFormatString:(id)arg1 ;
-(void)_readAlternateCountdownTypes;
-(void)_addNoFlagsAlternateCountdownType:(int)arg1 ;
-(void)_readSeparator;
-(NSMutableArray *)alternateFormatStrings;
-(unsigned long long)timestampValuesCount;
-(void)clearTimestampValues;
-(unsigned)timestampValueAtIndex:(unsigned long long)arg1 ;
-(void)addTimestampValue:(unsigned)arg1 ;
-(unsigned long long)alternateFormatStringsCount;
-(void)clearAlternateFormatStrings;
-(id)alternateFormatStringAtIndex:(unsigned long long)arg1 ;
-(void)addAlternateFormatString:(id)arg1 ;
-(unsigned long long)alternateCountdownTypesCount;
-(void)clearAlternateCountdownTypes;
-(int)alternateCountdownTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAlternateCountdownType:(int)arg1 ;
-(unsigned*)timestampValues;
-(void)setTimestampValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setAlternateFormatStrings:(NSMutableArray *)arg1 ;
-(int*)alternateCountdownTypes;
-(void)setAlternateCountdownTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)alternateCountdownTypesAsString:(int)arg1 ;
-(int)StringAsAlternateCountdownTypes:(id)arg1 ;
-(long long)_convertFrom:(int)arg1 ;
-(long long)countdownType;
-(NSDictionary *)alternativeFormatStringsByType;
@end

