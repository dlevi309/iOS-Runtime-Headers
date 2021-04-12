/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {

	long long _containerIndex;
	long long _itemIndex;
	SCD_Struct_MP22 _has;

}

@property (assign,nonatomic) BOOL hasContainerIndex; 
@property (assign,nonatomic) long long containerIndex;              //@synthesize containerIndex=_containerIndex - In the implementation block
@property (assign,nonatomic) BOOL hasItemIndex; 
@property (assign,nonatomic) long long itemIndex;                   //@synthesize itemIndex=_itemIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)itemIndex;
-(void)setItemIndex:(long long)arg1 ;
-(void)setContainerIndex:(long long)arg1 ;
-(void)setHasContainerIndex:(BOOL)arg1 ;
-(BOOL)hasContainerIndex;
-(void)setHasItemIndex:(BOOL)arg1 ;
-(BOOL)hasItemIndex;
-(long long)containerIndex;
@end

