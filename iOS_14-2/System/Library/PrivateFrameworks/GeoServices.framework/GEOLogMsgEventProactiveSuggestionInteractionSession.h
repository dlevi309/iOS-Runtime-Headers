/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying> {

	NSMutableArray* _proactiveItems;
	int _duration;
	int _interactedItemIndex;
	int _listType;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType; 
@property (nonatomic,retain) NSMutableArray * proactiveItems; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) BOOL hasInteractedItemIndex; 
@property (assign,nonatomic) int interactedItemIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)proactiveItemType;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)listType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setListType:(int)arg1 ;
-(void)addProactiveItem:(id)arg1 ;
-(void)setInteractedItemIndex:(int)arg1 ;
-(unsigned long long)proactiveItemsCount;
-(void)clearProactiveItems;
-(id)proactiveItemAtIndex:(unsigned long long)arg1 ;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(NSMutableArray *)proactiveItems;
-(void)setProactiveItems:(NSMutableArray *)arg1 ;
-(int)interactedItemIndex;
-(void)setHasInteractedItemIndex:(BOOL)arg1 ;
-(BOOL)hasInteractedItemIndex;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

