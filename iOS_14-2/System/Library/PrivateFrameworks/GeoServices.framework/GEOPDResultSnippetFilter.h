/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDResultSnippetFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _supportedChildActions;
	int _maxChildItems;
	int _maxChildPlaces;
	BOOL _supportChildItems;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasMaxChildPlaces; 
@property (assign,nonatomic) int maxChildPlaces; 
@property (assign,nonatomic) BOOL hasSupportChildItems; 
@property (assign,nonatomic) BOOL supportChildItems; 
@property (assign,nonatomic) BOOL hasMaxChildItems; 
@property (assign,nonatomic) int maxChildItems; 
@property (nonatomic,readonly) unsigned long long supportedChildActionsCount; 
@property (nonatomic,readonly) int* supportedChildActions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addSupportedChildAction:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)supportedChildActionAtIndex:(unsigned long long)arg1 ;
-(int)StringAsSupportedChildActions:(id)arg1 ;
-(int)maxChildItems;
-(void)setMaxChildItems:(int)arg1 ;
-(BOOL)hasSupportChildItems;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)supportChildItems;
-(id)description;
-(void)setMaxChildPlaces:(int)arg1 ;
-(int*)supportedChildActions;
-(void)setSupportedChildActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMaxChildPlaces:(BOOL)arg1 ;
-(void)setSupportChildItems:(BOOL)arg1 ;
-(unsigned long long)supportedChildActionsCount;
-(BOOL)hasMaxChildItems;
-(int)maxChildPlaces;
-(unsigned long long)hash;
-(void)clearSupportedChildActions;
-(BOOL)readFrom:(id)arg1 ;
-(id)supportedChildActionsAsString:(int)arg1 ;
-(BOOL)hasMaxChildPlaces;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSupportChildItems:(BOOL)arg1 ;
-(void)setHasMaxChildItems:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

