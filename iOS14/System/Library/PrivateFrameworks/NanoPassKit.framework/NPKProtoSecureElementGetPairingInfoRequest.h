/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoSecureElementGetPairingInfoRequest : PBRequest <NSCopying> {

	BOOL _setAuthRandomIfNotPaired;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasSetAuthRandomIfNotPaired; 
@property (assign,nonatomic) BOOL setAuthRandomIfNotPaired;                 //@synthesize setAuthRandomIfNotPaired=_setAuthRandomIfNotPaired - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSetAuthRandomIfNotPaired:(BOOL)arg1 ;
-(void)setHasSetAuthRandomIfNotPaired:(BOOL)arg1 ;
-(BOOL)hasSetAuthRandomIfNotPaired;
-(BOOL)setAuthRandomIfNotPaired;
@end

