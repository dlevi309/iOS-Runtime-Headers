/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOMapsTransitWidget : PBCodable <NSCopying> {

	NSMutableArray* _transitIncidentItems;
	int _tappedItemIndex;
	int _transitMessageType;
	BOOL _everExpanded;
	BOOL _initiallyExpanded;
	struct {
		unsigned has_tappedItemIndex : 1;
		unsigned has_transitMessageType : 1;
		unsigned has_everExpanded : 1;
		unsigned has_initiallyExpanded : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransitMessageType; 
@property (assign,nonatomic) int transitMessageType; 
@property (nonatomic,retain) NSMutableArray * transitIncidentItems; 
@property (assign,nonatomic) BOOL hasInitiallyExpanded; 
@property (assign,nonatomic) BOOL initiallyExpanded; 
@property (assign,nonatomic) BOOL hasEverExpanded; 
@property (assign,nonatomic) BOOL everExpanded; 
@property (assign,nonatomic) BOOL hasTappedItemIndex; 
@property (assign,nonatomic) int tappedItemIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)transitIncidentItemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)initiallyExpanded;
-(void)setInitiallyExpanded:(BOOL)arg1 ;
-(void)setHasInitiallyExpanded:(BOOL)arg1 ;
-(BOOL)hasInitiallyExpanded;
-(BOOL)everExpanded;
-(void)setEverExpanded:(BOOL)arg1 ;
-(void)setHasEverExpanded:(BOOL)arg1 ;
-(BOOL)hasEverExpanded;
-(int)tappedItemIndex;
-(void)setTappedItemIndex:(int)arg1 ;
-(void)setHasTappedItemIndex:(BOOL)arg1 ;
-(BOOL)hasTappedItemIndex;
-(void)addTransitIncidentItem:(id)arg1 ;
-(unsigned long long)transitIncidentItemsCount;
-(void)clearTransitIncidentItems;
-(id)transitIncidentItemAtIndex:(unsigned long long)arg1 ;
-(int)transitMessageType;
-(void)setTransitMessageType:(int)arg1 ;
-(void)setHasTransitMessageType:(BOOL)arg1 ;
-(BOOL)hasTransitMessageType;
-(id)transitMessageTypeAsString:(int)arg1 ;
-(int)StringAsTransitMessageType:(id)arg1 ;
-(NSMutableArray *)transitIncidentItems;
-(void)setTransitIncidentItems:(NSMutableArray *)arg1 ;
@end

