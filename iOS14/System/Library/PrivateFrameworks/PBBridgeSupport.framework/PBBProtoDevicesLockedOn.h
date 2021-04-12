/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIntendedFireDate:(double)arg1 ;
-(void)setHasIntendedFireDate:(BOOL)arg1 ;
-(BOOL)hasIntendedFireDate;
-(double)intendedFireDate;
@end

