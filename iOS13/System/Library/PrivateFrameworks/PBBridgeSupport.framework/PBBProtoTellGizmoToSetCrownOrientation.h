/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCrownOrientationRight:(BOOL)arg1 ;
-(BOOL)crownOrientationRight;
-(void)setHasCrownOrientationRight:(BOOL)arg1 ;
-(BOOL)hasCrownOrientationRight;
@end

