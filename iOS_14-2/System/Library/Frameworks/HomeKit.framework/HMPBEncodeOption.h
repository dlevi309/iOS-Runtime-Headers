/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMPBEncodeOption : PBCodable <NSCopying> {

	BOOL _isSPI;
	BOOL _isXPC;
	SCD_Struct_HM7 _has;

}

@property (assign,nonatomic) BOOL hasIsXPC; 
@property (assign,nonatomic) BOOL isXPC;                 //@synthesize isXPC=_isXPC - In the implementation block
@property (assign,nonatomic) BOOL hasIsSPI; 
@property (assign,nonatomic) BOOL isSPI;                 //@synthesize isSPI=_isSPI - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)isXPC;
-(BOOL)isSPI;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasIsXPC;
-(BOOL)hasIsSPI;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIsSPI:(BOOL)arg1 ;
-(void)setHasIsXPC:(BOOL)arg1 ;
-(void)setHasIsSPI:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

