/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORPSuggestionEntry : PBCodable <NSCopying> {

	NSMutableArray* _displayLines;
	unsigned _serverSearchCompletionEntryIndex;
	unsigned _serverSearchCompletionSectionIndex;
	int _type;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSMutableArray * displayLines; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionSectionIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionSectionIndex; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionEntryIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionEntryIndex; 
+(Class)displayLineType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(unsigned)serverSearchCompletionSectionIndex;
-(void)setHasServerSearchCompletionSectionIndex:(BOOL)arg1 ;
-(BOOL)hasServerSearchCompletionSectionIndex;
-(unsigned)serverSearchCompletionEntryIndex;
-(void)setHasServerSearchCompletionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasServerSearchCompletionEntryIndex;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)type;
-(void)setServerSearchCompletionSectionIndex:(unsigned)arg1 ;
-(void)setServerSearchCompletionEntryIndex:(unsigned)arg1 ;
-(NSMutableArray *)displayLines;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

