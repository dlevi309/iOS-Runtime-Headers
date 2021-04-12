/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCharacteristicEvent : PBCodable <NSCopying> {

	BOOL _containsValue;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasContainsValue; 
@property (assign,nonatomic) BOOL containsValue;                 //@synthesize containsValue=_containsValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContainsValue:(BOOL)arg1 ;
-(void)setHasContainsValue:(BOOL)arg1 ;
-(BOOL)hasContainsValue;
-(BOOL)containsValue;
@end

