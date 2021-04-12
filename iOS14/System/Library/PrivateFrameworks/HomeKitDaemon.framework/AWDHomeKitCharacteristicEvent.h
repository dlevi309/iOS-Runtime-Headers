/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCharacteristicEvent : PBCodable <NSCopying> {

	BOOL _containsValue;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasContainsValue; 
@property (assign,nonatomic) BOOL containsValue;                 //@synthesize containsValue=_containsValue - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContainsValue:(BOOL)arg1 ;
-(void)setHasContainsValue:(BOOL)arg1 ;
-(BOOL)hasContainsValue;
-(BOOL)containsValue;
@end

