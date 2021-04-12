/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCharacteristicThresholdEvent : PBCodable <NSCopying> {

	BOOL _maxPresent;
	BOOL _minPresent;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasMinPresent; 
@property (assign,nonatomic) BOOL minPresent;                 //@synthesize minPresent=_minPresent - In the implementation block
@property (assign,nonatomic) BOOL hasMaxPresent; 
@property (assign,nonatomic) BOOL maxPresent;                 //@synthesize maxPresent=_maxPresent - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMinPresent:(BOOL)arg1 ;
-(void)setHasMinPresent:(BOOL)arg1 ;
-(BOOL)hasMinPresent;
-(void)setMaxPresent:(BOOL)arg1 ;
-(void)setHasMaxPresent:(BOOL)arg1 ;
-(BOOL)hasMaxPresent;
-(BOOL)minPresent;
-(BOOL)maxPresent;
@end

