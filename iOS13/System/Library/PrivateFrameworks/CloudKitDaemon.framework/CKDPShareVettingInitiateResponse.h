/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPShareVettingInitiateResponse : PBCodable <NSCopying> {

	int _vettingError;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasVettingError; 
@property (assign,nonatomic) int vettingError;                  //@synthesize vettingError=_vettingError - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVettingError;
-(int)vettingError;
-(void)setVettingError:(int)arg1 ;
-(void)setHasVettingError:(BOOL)arg1 ;
-(id)vettingErrorAsString:(int)arg1 ;
-(int)StringAsVettingError:(id)arg1 ;
@end

