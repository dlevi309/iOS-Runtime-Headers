/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_MP20 _has;

}

@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                                            //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifierSet; 
@property (nonatomic,retain) _MPCProtoContainerIdentifierSet * identifierSet;              //@synthesize identifierSet=_identifierSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayActivityFeatureName; 
@property (nonatomic,retain) NSString * playActivityFeatureName;                           //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
+(Class)itemType;
-(void)addItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)setHasContainerType:(BOOL)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)clearItems;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)items;
-(id)description;
-(NSString *)playActivityFeatureName;
-(unsigned long long)hash;
-(void)setContainerType:(int)arg1 ;
-(unsigned long long)itemsCount;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasContainerType;
-(int)containerType;
-(void)writeTo:(id)arg1 ;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_MPCProtoContainerIdentifierSet *)identifierSet;
-(void)setIdentifierSet:(_MPCProtoContainerIdentifierSet *)arg1 ;
-(BOOL)hasIdentifierSet;
-(BOOL)hasPlayActivityFeatureName;
@end

