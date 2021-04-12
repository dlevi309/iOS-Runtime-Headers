/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSMutableArray * displayLines; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionSectionIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionSectionIndex; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionEntryIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionEntryIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLineType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(void)setServerSearchCompletionSectionIndex:(unsigned)arg1 ;
-(void)setServerSearchCompletionEntryIndex:(unsigned)arg1 ;
-(NSMutableArray *)displayLines;
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
@end

