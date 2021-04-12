/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying> {

	int _entityOrder;
	NSMutableArray* _filterPredicates;
	int _groupingType;
	NSMutableArray* _staticEntityIdentifiers;
	int _staticEntityType;
	BOOL _filteringDisabled;
	BOOL _includeNonLibraryEntities;
	SCD_Struct_MP38 _has;

}

@property (nonatomic,retain) NSMutableArray * filterPredicates;                     //@synthesize filterPredicates=_filterPredicates - In the implementation block
@property (assign,nonatomic) BOOL hasGroupingType; 
@property (assign,nonatomic) int groupingType;                                      //@synthesize groupingType=_groupingType - In the implementation block
@property (assign,nonatomic) BOOL hasFilteringDisabled; 
@property (assign,nonatomic) BOOL filteringDisabled;                                //@synthesize filteringDisabled=_filteringDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasEntityOrder; 
@property (assign,nonatomic) int entityOrder;                                       //@synthesize entityOrder=_entityOrder - In the implementation block
@property (nonatomic,retain) NSMutableArray * staticEntityIdentifiers;              //@synthesize staticEntityIdentifiers=_staticEntityIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasStaticEntityType; 
@property (assign,nonatomic) int staticEntityType;                                  //@synthesize staticEntityType=_staticEntityType - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeNonLibraryEntities; 
@property (assign,nonatomic) BOOL includeNonLibraryEntities;                        //@synthesize includeNonLibraryEntities=_includeNonLibraryEntities - In the implementation block
+(Class)filterPredicatesType;
+(Class)staticEntityIdentifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)filterPredicates;
-(void)setFilterPredicates:(NSMutableArray *)arg1 ;
-(int)groupingType;
-(void)setGroupingType:(int)arg1 ;
-(void)setFilteringDisabled:(BOOL)arg1 ;
-(void)clearFilterPredicates;
-(void)addFilterPredicates:(id)arg1 ;
-(unsigned long long)filterPredicatesCount;
-(id)filterPredicatesAtIndex:(unsigned long long)arg1 ;
-(void)setHasGroupingType:(BOOL)arg1 ;
-(BOOL)hasGroupingType;
-(id)groupingTypeAsString:(int)arg1 ;
-(int)StringAsGroupingType:(id)arg1 ;
-(void)setHasFilteringDisabled:(BOOL)arg1 ;
-(BOOL)hasFilteringDisabled;
-(int)entityOrder;
-(void)setEntityOrder:(int)arg1 ;
-(void)setHasEntityOrder:(BOOL)arg1 ;
-(BOOL)hasEntityOrder;
-(id)entityOrderAsString:(int)arg1 ;
-(int)StringAsEntityOrder:(id)arg1 ;
-(void)clearStaticEntityIdentifiers;
-(void)addStaticEntityIdentifiers:(id)arg1 ;
-(unsigned long long)staticEntityIdentifiersCount;
-(id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1 ;
-(int)staticEntityType;
-(void)setStaticEntityType:(int)arg1 ;
-(void)setHasStaticEntityType:(BOOL)arg1 ;
-(BOOL)hasStaticEntityType;
-(id)staticEntityTypeAsString:(int)arg1 ;
-(int)StringAsStaticEntityType:(id)arg1 ;
-(void)setIncludeNonLibraryEntities:(BOOL)arg1 ;
-(void)setHasIncludeNonLibraryEntities:(BOOL)arg1 ;
-(BOOL)hasIncludeNonLibraryEntities;
-(BOOL)filteringDisabled;
-(NSMutableArray *)staticEntityIdentifiers;
-(void)setStaticEntityIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)includeNonLibraryEntities;
@end

