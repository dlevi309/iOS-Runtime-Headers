/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCharacteristicThresholdEvent : PBCodable <NSCopying> {

	BOOL _maxPresent;
	BOOL _minPresent;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasMinPresent; 
@property (assign,nonatomic) BOOL minPresent;                 //@synthesize minPresent=_minPresent - In the implementation block
@property (assign,nonatomic) BOOL hasMaxPresent; 
@property (assign,nonatomic) BOOL maxPresent;                 //@synthesize maxPresent=_maxPresent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMinPresent:(BOOL)arg1 ;
-(void)setHasMinPresent:(BOOL)arg1 ;
-(BOOL)hasMinPresent;
-(void)setMaxPresent:(BOOL)arg1 ;
-(void)setHasMaxPresent:(BOOL)arg1 ;
-(BOOL)hasMaxPresent;
-(BOOL)minPresent;
-(BOOL)maxPresent;
@end

