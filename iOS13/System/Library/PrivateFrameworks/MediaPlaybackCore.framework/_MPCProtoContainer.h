/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoContainerIdentifierSet, NSMutableArray, NSString;

@interface _MPCProtoContainer : PBCodable <NSCopying> {

	int _containerType;
	_MPCProtoContainerIdentifierSet* _identifierSet;
	NSMutableArray* _items;
	NSString* _playActivityFeatureName;
	SCD_Struct_MP19 _has;

}

@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                                            //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifierSet; 
@property (nonatomic,retain) _MPCProtoContainerIdentifierSet * identifierSet;              //@synthesize identifierSet=_identifierSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayActivityFeatureName; 
@property (nonatomic,retain) NSString * playActivityFeatureName;                           //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
+(Class)itemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(unsigned long long)itemsCount;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)clearItems;
-(int)containerType;
-(void)setContainerType:(int)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(BOOL)hasContainerType;
-(void)setHasContainerType:(BOOL)arg1 ;
-(_MPCProtoContainerIdentifierSet *)identifierSet;
-(void)setIdentifierSet:(_MPCProtoContainerIdentifierSet *)arg1 ;
-(BOOL)hasIdentifierSet;
-(BOOL)hasPlayActivityFeatureName;
@end

