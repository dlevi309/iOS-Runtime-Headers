/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueIdentifier, GEOPDViewportInfo;

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _engineTypes;
	double _requestLocalTimestamp;
	GEOPDVenueIdentifier* _venueFilter;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _minimumNumberOfCategories;
	int _suggestionType;
	BOOL _isCarplayRequest;
	BOOL _isFlatCategoryListRequest;
	BOOL _isFromNoQueryState;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned has_minimumNumberOfCategories : 1;
		unsigned has_suggestionType : 1;
		unsigned has_isCarplayRequest : 1;
		unsigned has_isFlatCategoryListRequest : 1;
		unsigned has_isFromNoQueryState : 1;
		unsigned read_unknownFields : 1;
		unsigned read_engineTypes : 1;
		unsigned read_venueFilter : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_engineTypes : 1;
		unsigned wrote_requestLocalTimestamp : 1;
		unsigned wrote_venueFilter : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_minimumNumberOfCategories : 1;
		unsigned wrote_suggestionType : 1;
		unsigned wrote_isCarplayRequest : 1;
		unsigned wrote_isFlatCategoryListRequest : 1;
		unsigned wrote_isFromNoQueryState : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (assign,nonatomic) BOOL hasMinimumNumberOfCategories; 
@property (assign,nonatomic) int minimumNumberOfCategories; 
@property (assign,nonatomic) BOOL hasIsCarplayRequest; 
@property (assign,nonatomic) BOOL isCarplayRequest; 
@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (assign,nonatomic) int suggestionType; 
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueFilter; 
@property (assign,nonatomic) BOOL hasIsFromNoQueryState; 
@property (assign,nonatomic) BOOL isFromNoQueryState; 
@property (assign,nonatomic) BOOL hasIsFlatCategoryListRequest; 
@property (assign,nonatomic) BOOL isFlatCategoryListRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)suggestionType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(double)requestLocalTimestamp;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(void)setVenueFilter:(GEOPDVenueIdentifier *)arg1 ;
-(void)_readEngineTypes;
-(void)_addNoFlagsEngineType:(int)arg1 ;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(void)addEngineType:(int)arg1 ;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(void)_readVenueFilter;
-(GEOPDVenueIdentifier *)venueFilter;
-(int)minimumNumberOfCategories;
-(void)setMinimumNumberOfCategories:(int)arg1 ;
-(void)setHasMinimumNumberOfCategories:(BOOL)arg1 ;
-(BOOL)hasMinimumNumberOfCategories;
-(BOOL)isCarplayRequest;
-(void)setIsCarplayRequest:(BOOL)arg1 ;
-(void)setHasIsCarplayRequest:(BOOL)arg1 ;
-(BOOL)hasIsCarplayRequest;
-(void)setSuggestionType:(int)arg1 ;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(BOOL)hasVenueFilter;
-(BOOL)isFromNoQueryState;
-(void)setIsFromNoQueryState:(BOOL)arg1 ;
-(void)setHasIsFromNoQueryState:(BOOL)arg1 ;
-(BOOL)hasIsFromNoQueryState;
-(BOOL)isFlatCategoryListRequest;
-(void)setIsFlatCategoryListRequest:(BOOL)arg1 ;
-(void)setHasIsFlatCategoryListRequest:(BOOL)arg1 ;
-(BOOL)hasIsFlatCategoryListRequest;
@end

