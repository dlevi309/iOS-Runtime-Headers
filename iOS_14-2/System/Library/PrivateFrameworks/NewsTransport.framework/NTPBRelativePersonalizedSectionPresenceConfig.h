/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBRelativePersonalizedSectionPresenceConfig : PBCodable <NSCopying> {

	double _scalar;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasScalar; 
@property (assign,nonatomic) double scalar;               //@synthesize scalar=_scalar - In the implementation block
-(id)dictionaryRepresentation;
-(double)scalar;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasScalar;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setScalar:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasScalar:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

