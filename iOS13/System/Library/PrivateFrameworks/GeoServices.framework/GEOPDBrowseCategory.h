/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOStyleAttributes, NSMutableArray, NSData;

@interface GEOPDBrowseCategory : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _displayString;
	NSString* _popularDisplayToken;
	NSString* _shortDisplayString;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _subCategorys;
	NSData* _suggestionEntryMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _displayMode;
	int _sortOrder;
	int _subCategoryType;
	BOOL _isSubCategorySameAsTopLevel;
	struct {
		unsigned has_displayMode : 1;
		unsigned has_sortOrder : 1;
		unsigned has_subCategoryType : 1;
		unsigned has_isSubCategorySameAsTopLevel : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayString : 1;
		unsigned read_popularDisplayToken : 1;
		unsigned read_shortDisplayString : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_subCategorys : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayString : 1;
		unsigned wrote_popularDisplayToken : 1;
		unsigned wrote_shortDisplayString : 1;
		unsigned wrote_styleAttributes : 1;
		unsigned wrote_subCategorys : 1;
		unsigned wrote_suggestionEntryMetadata : 1;
		unsigned wrote_displayMode : 1;
		unsigned wrote_sortOrder : 1;
		unsigned wrote_subCategoryType : 1;
		unsigned wrote_isSubCategorySameAsTopLevel : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,retain) NSString * displayString; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,retain) NSMutableArray * subCategorys; 
@property (nonatomic,readonly) BOOL hasShortDisplayString; 
@property (nonatomic,retain) NSString * shortDisplayString; 
@property (nonatomic,readonly) BOOL hasPopularDisplayToken; 
@property (nonatomic,retain) NSString * popularDisplayToken; 
@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder; 
@property (assign,nonatomic) BOOL hasDisplayMode; 
@property (assign,nonatomic) int displayMode; 
@property (assign,nonatomic) BOOL hasSubCategoryType; 
@property (assign,nonatomic) int subCategoryType; 
@property (assign,nonatomic) BOOL hasIsSubCategorySameAsTopLevel; 
@property (assign,nonatomic) BOOL isSubCategorySameAsTopLevel; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)subCategoryType;
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
-(int)displayMode;
-(GEOStyleAttributes *)styleAttributes;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readStyleAttributes;
-(BOOL)hasStyleAttributes;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(void)_readSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(unsigned long long)subCategorysCount;
-(NSMutableArray *)subCategorys;
-(BOOL)hasShortDisplayString;
-(NSString *)shortDisplayString;
-(BOOL)hasPopularDisplayToken;
-(NSString *)popularDisplayToken;
-(int)subCategoryType;
-(BOOL)isSubCategorySameAsTopLevel;
-(void)_readDisplayString;
-(void)_readSubCategorys;
-(void)_addNoFlagsSubCategory:(id)arg1 ;
-(void)_readShortDisplayString;
-(void)_readPopularDisplayToken;
-(void)clearSubCategorys;
-(id)subCategoryAtIndex:(unsigned long long)arg1 ;
-(void)addSubCategory:(id)arg1 ;
-(void)setShortDisplayString:(NSString *)arg1 ;
-(void)setPopularDisplayToken:(NSString *)arg1 ;
-(BOOL)hasDisplayString;
-(void)setSubCategorys:(NSMutableArray *)arg1 ;
-(void)setDisplayMode:(int)arg1 ;
-(void)setHasDisplayMode:(BOOL)arg1 ;
-(BOOL)hasDisplayMode;
-(id)displayModeAsString:(int)arg1 ;
-(int)StringAsDisplayMode:(id)arg1 ;
-(void)setSubCategoryType:(int)arg1 ;
-(void)setHasSubCategoryType:(BOOL)arg1 ;
-(BOOL)hasSubCategoryType;
-(id)subCategoryTypeAsString:(int)arg1 ;
-(int)StringAsSubCategoryType:(id)arg1 ;
-(void)setIsSubCategorySameAsTopLevel:(BOOL)arg1 ;
-(void)setHasIsSubCategorySameAsTopLevel:(BOOL)arg1 ;
-(BOOL)hasIsSubCategorySameAsTopLevel;
@end

