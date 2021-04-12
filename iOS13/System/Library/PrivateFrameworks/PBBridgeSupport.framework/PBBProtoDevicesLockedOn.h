/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDevicesLockedOn : PBCodable <NSCopying> {

	double _intendedFireDate;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasIntendedFireDate; 
@property (assign,nonatomic) double intendedFireDate;               //@synthesize intendedFireDate=_intendedFireDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIntendedFireDate:(double)arg1 ;
-(void)setHasIntendedFireDate:(BOOL)arg1 ;
-(BOOL)hasIntendedFireDate;
-(double)intendedFireDate;
@end

