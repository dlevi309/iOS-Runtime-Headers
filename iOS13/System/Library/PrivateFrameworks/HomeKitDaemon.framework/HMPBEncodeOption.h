/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMPBEncodeOption : PBCodable <NSCopying> {

	BOOL _isSPI;
	BOOL _isXPC;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasIsXPC; 
@property (assign,nonatomic) BOOL isXPC;                 //@synthesize isXPC=_isXPC - In the implementation block
@property (assign,nonatomic) BOOL hasIsSPI; 
@property (assign,nonatomic) BOOL isSPI;                 //@synthesize isSPI=_isSPI - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(void)setHasIsXPC:(BOOL)arg1 ;
-(BOOL)hasIsXPC;
-(void)setIsSPI:(BOOL)arg1 ;
-(void)setHasIsSPI:(BOOL)arg1 ;
-(BOOL)hasIsSPI;
-(BOOL)isXPC;
-(BOOL)isSPI;
@end

