/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDPlaceRequest, GEOPDPlaceResponse, NSMutableArray, NSString;

@interface GEORPSuggestionList : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDPlaceRequest* _autocompleteRequest;
	GEOPDPlaceResponse* _autocompleteResponse;
	NSMutableArray* _entrys;
	NSString* _query;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_autocompleteRequest : 1;
		unsigned read_autocompleteResponse : 1;
		unsigned read_entrys : 1;
		unsigned read_query : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,retain) NSMutableArray * entrys; 
@property (nonatomic,readonly) BOOL hasAutocompleteRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * autocompleteRequest; 
@property (nonatomic,readonly) BOOL hasAutocompleteResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * autocompleteResponse; 
+(BOOL)isValid:(id)arg1 ;
+(Class)entryType;
-(id)dictionaryRepresentation;
-(NSString *)query;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)entrys;
-(void)setEntrys:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)entrysCount;
-(BOOL)hasQuery;
-(void)clearEntrys;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(GEOPDPlaceRequest *)autocompleteRequest;
-(GEOPDPlaceResponse *)autocompleteResponse;
-(BOOL)hasAutocompleteRequest;
-(BOOL)hasAutocompleteResponse;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)description;
-(void)setAutocompleteRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)setAutocompleteResponse:(GEOPDPlaceResponse *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

