/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {

	long long _containerIndex;
	long long _itemIndex;
	SCD_Struct_MP23 _has;

}

@property (assign,nonatomic) BOOL hasContainerIndex; 
@property (assign,nonatomic) long long containerIndex;              //@synthesize containerIndex=_containerIndex - In the implementation block
@property (assign,nonatomic) BOOL hasItemIndex; 
@property (assign,nonatomic) long long itemIndex;                   //@synthesize itemIndex=_itemIndex - In the implementation block
-(id)dictionaryRepresentation;
-(long long)itemIndex;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setItemIndex:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)containerIndex;
-(void)setContainerIndex:(long long)arg1 ;
-(void)setHasContainerIndex:(BOOL)arg1 ;
-(BOOL)hasContainerIndex;
-(void)setHasItemIndex:(BOOL)arg1 ;
-(BOOL)hasItemIndex;
@end

