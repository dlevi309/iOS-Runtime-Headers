/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSupportOctagonMessage : PBCodable <NSCopying> {

	int _supported;
	SCD_Struct_OT1 _has;

}

@property (assign,nonatomic) BOOL hasSupported; 
@property (assign,nonatomic) int supported;                  //@synthesize supported=_supported - In the implementation block
-(int)supported;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setSupported:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSupported:(BOOL)arg1 ;
-(BOOL)hasSupported;
-(id)supportedAsString:(int)arg1 ;
-(int)StringAsSupported:(id)arg1 ;
@end

