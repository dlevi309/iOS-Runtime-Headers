/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying> {

	NSMutableArray* _proactiveItems;
	int _tappedItemIndex;
	BOOL _everExpanded;
	BOOL _initiallyExpanded;
	SCD_Struct_GE85 _flags;

}

@property (nonatomic,retain) NSMutableArray * proactiveItems; 
@property (assign,nonatomic) BOOL hasInitiallyExpanded; 
@property (assign,nonatomic) BOOL initiallyExpanded; 
@property (assign,nonatomic) BOOL hasEverExpanded; 
@property (assign,nonatomic) BOOL everExpanded; 
@property (assign,nonatomic) BOOL hasTappedItemIndex; 
@property (assign,nonatomic) int tappedItemIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)proactiveItemType;
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
-(void)addProactiveItem:(id)arg1 ;
-(unsigned long long)proactiveItemsCount;
-(void)clearProactiveItems;
-(id)proactiveItemAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)proactiveItems;
-(void)setProactiveItems:(NSMutableArray *)arg1 ;
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
@end

