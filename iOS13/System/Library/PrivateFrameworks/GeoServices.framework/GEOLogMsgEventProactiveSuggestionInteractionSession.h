/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(int)listType;
-(void)setListType:(int)arg1 ;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)addProactiveItem:(id)arg1 ;
-(unsigned long long)proactiveItemsCount;
-(void)clearProactiveItems;
-(id)proactiveItemAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)proactiveItems;
-(void)setProactiveItems:(NSMutableArray *)arg1 ;
-(int)interactedItemIndex;
-(void)setInteractedItemIndex:(int)arg1 ;
-(void)setHasInteractedItemIndex:(BOOL)arg1 ;
-(BOOL)hasInteractedItemIndex;
@end

