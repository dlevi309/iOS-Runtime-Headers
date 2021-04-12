/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_MP39 _has;

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
-(id)dictionaryRepresentation;
-(void)setFilteringDisabled:(BOOL)arg1 ;
-(int)groupingType;
-(NSMutableArray *)filterPredicates;
-(void)setFilterPredicates:(NSMutableArray *)arg1 ;
-(void)setGroupingType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)entityOrder;
-(void)clearFilterPredicates;
-(void)addFilterPredicates:(id)arg1 ;
-(unsigned long long)filterPredicatesCount;
-(id)filterPredicatesAtIndex:(unsigned long long)arg1 ;
-(void)setHasGroupingType:(BOOL)arg1 ;
-(BOOL)hasGroupingType;
-(id)groupingTypeAsString:(int)arg1 ;
-(int)StringAsGroupingType:(id)arg1 ;
-(void)setEntityOrder:(int)arg1 ;
-(void)setHasFilteringDisabled:(BOOL)arg1 ;
-(BOOL)hasFilteringDisabled;
-(void)setHasEntityOrder:(BOOL)arg1 ;
-(BOOL)hasEntityOrder;
-(int)staticEntityType;
-(id)entityOrderAsString:(int)arg1 ;
-(int)StringAsEntityOrder:(id)arg1 ;
-(void)clearStaticEntityIdentifiers;
-(void)addStaticEntityIdentifiers:(id)arg1 ;
-(unsigned long long)staticEntityIdentifiersCount;
-(id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1 ;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

