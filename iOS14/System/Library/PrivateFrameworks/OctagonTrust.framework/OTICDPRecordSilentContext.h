/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTEscrowAuthenticationInformation, OTCDPRecoveryInformation;

@interface OTICDPRecordSilentContext : PBCodable <NSCopying> {

	OTEscrowAuthenticationInformation* _authInfo;
	OTCDPRecoveryInformation* _cdpInfo;

}

@property (nonatomic,readonly) BOOL hasCdpInfo; 
@property (nonatomic,retain) OTCDPRecoveryInformation * cdpInfo;                        //@synthesize cdpInfo=_cdpInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthInfo; 
@property (nonatomic,retain) OTEscrowAuthenticationInformation * authInfo;              //@synthesize authInfo=_authInfo - In the implementation block
-(id)dictionaryRepresentation;
-(OTCDPRecoveryInformation *)cdpInfo;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasCdpInfo;
-(BOOL)hasAuthInfo;
-(void)setCdpInfo:(OTCDPRecoveryInformation *)arg1 ;
-(void)setAuthInfo:(OTEscrowAuthenticationInformation *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(OTEscrowAuthenticationInformation *)authInfo;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

