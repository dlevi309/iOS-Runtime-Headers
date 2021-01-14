/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVettingError;
-(int)vettingError;
-(void)setVettingError:(int)arg1 ;
-(void)setHasVettingError:(BOOL)arg1 ;
-(id)vettingErrorAsString:(int)arg1 ;
-(int)StringAsVettingError:(id)arg1 ;
@end

