/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(BOOL)hasIndex;
-(float)offset;
-(id)description;
-(unsigned long long)hash;
-(void)setOffset:(float)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasOffset;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

