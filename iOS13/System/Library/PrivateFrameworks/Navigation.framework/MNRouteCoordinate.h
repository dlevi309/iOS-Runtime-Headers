/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNRouteCoordinate : PBCodable <NSCopying> {

	unsigned _index;
	float _offset;
	SCD_Struct_MN21 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) float offset;                //@synthesize offset=_offset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)index;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setOffset:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)offset;
-(void)setIndex:(unsigned)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)hasIndex;
-(void)setHasOffset:(BOOL)arg1 ;
-(BOOL)hasOffset;
@end

