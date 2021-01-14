/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOSuggestionEntryList : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _localizedSectionHeader;
	NSMutableArray* _suggestionEntries;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_localizedSectionHeader : 1;
		unsigned read_suggestionEntries : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * suggestionEntries; 
@property (nonatomic,readonly) BOOL hasLocalizedSectionHeader; 
@property (nonatomic,retain) NSString * localizedSectionHeader; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)suggestionEntriesType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)suggestionEntries;
-(void)addSuggestionEntries:(id)arg1 ;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(unsigned long long)suggestionEntriesCount;
-(void)clearSuggestionEntries;
-(id)suggestionEntriesAtIndex:(unsigned long long)arg1 ;
-(void)setSuggestionEntries:(NSMutableArray *)arg1 ;
-(BOOL)hasLocalizedSectionHeader;
-(NSString *)localizedSectionHeader;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

