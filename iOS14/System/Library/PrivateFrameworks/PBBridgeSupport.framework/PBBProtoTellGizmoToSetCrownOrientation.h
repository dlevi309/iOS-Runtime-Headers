/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying> {

	BOOL _crownOrientationRight;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasCrownOrientationRight; 
@property (assign,nonatomic) BOOL crownOrientationRight;                 //@synthesize crownOrientationRight=_crownOrientationRight - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCrownOrientationRight:(BOOL)arg1 ;
-(BOOL)crownOrientationRight;
-(void)setHasCrownOrientationRight:(BOOL)arg1 ;
-(BOOL)hasCrownOrientationRight;
@end

