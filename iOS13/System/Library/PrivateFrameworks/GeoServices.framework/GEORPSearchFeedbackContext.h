/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEORPPlaceRequestResponse;

@interface GEORPSearchFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _autocompleteSuggestionLists;
	GEORPPlaceRequestResponse* _requestContext;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_autocompleteSuggestionLists : 1;
		unsigned read_requestContext : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_autocompleteSuggestionLists : 1;
		unsigned wrote_requestContext : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * autocompleteSuggestionLists; 
@property (nonatomic,readonly) BOOL hasRequestContext; 
@property (nonatomic,retain) GEORPPlaceRequestResponse * requestContext; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)autocompleteSuggestionListType;
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAutocompleteSuggestionLists;
-(void)_addNoFlagsAutocompleteSuggestionList:(id)arg1 ;
-(unsigned long long)autocompleteSuggestionListsCount;
-(void)clearAutocompleteSuggestionLists;
-(id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1 ;
-(void)addAutocompleteSuggestionList:(id)arg1 ;
-(NSMutableArray *)autocompleteSuggestionLists;
-(void)setAutocompleteSuggestionLists:(NSMutableArray *)arg1 ;
-(void)_readRequestContext;
-(GEORPPlaceRequestResponse *)requestContext;
-(void)setRequestContext:(GEORPPlaceRequestResponse *)arg1 ;
-(BOOL)hasRequestContext;
@end

