/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/

#import <CoreUARP/CoreUARP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSData;

@interface UARPManifestProperties : NSObject <NSCopying, NSSecureCoding> {

	BOOL _securityMode;
	BOOL _productionMode;
	BOOL _effectiveProductionMode;
	BOOL _effectiveSecurityMode;
	BOOL _supportsImg4;
	unsigned _boardID;
	unsigned _chipID;
	unsigned long long _securityDomain;
	NSNumber* _ecID;
	NSData* _nonce;
	NSNumber* _chipEpoch;
	NSNumber* _enableMixMatch;

}

@property (readonly) unsigned boardID;                               //@synthesize boardID=_boardID - In the implementation block
@property (readonly) unsigned chipID;                                //@synthesize chipID=_chipID - In the implementation block
@property (readonly) unsigned long long securityDomain;              //@synthesize securityDomain=_securityDomain - In the implementation block
@property (readonly) BOOL securityMode;                              //@synthesize securityMode=_securityMode - In the implementation block
@property (readonly) BOOL productionMode;                            //@synthesize productionMode=_productionMode - In the implementation block
@property (retain) NSNumber * ecID;                                  //@synthesize ecID=_ecID - In the implementation block
@property (copy) NSData * nonce;                                     //@synthesize nonce=_nonce - In the implementation block
@property (retain) NSNumber * chipEpoch;                             //@synthesize chipEpoch=_chipEpoch - In the implementation block
@property (retain) NSNumber * enableMixMatch;                        //@synthesize enableMixMatch=_enableMixMatch - In the implementation block
@property (assign) BOOL effectiveProductionMode;                     //@synthesize effectiveProductionMode=_effectiveProductionMode - In the implementation block
@property (assign) BOOL effectiveSecurityMode;                       //@synthesize effectiveSecurityMode=_effectiveSecurityMode - In the implementation block
@property (assign) BOOL supportsImg4;                                //@synthesize supportsImg4=_supportsImg4 - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNonce:(NSData *)arg1 ;
-(NSNumber *)ecID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)chipID;
-(id)description;
-(unsigned)boardID;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)nonce;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)securityMode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)securityDomain;
-(void)setEcID:(NSNumber *)arg1 ;
-(void)setChipEpoch:(NSNumber *)arg1 ;
-(void)setEnableMixMatch:(NSNumber *)arg1 ;
-(void)setEffectiveProductionMode:(BOOL)arg1 ;
-(void)setEffectiveSecurityMode:(BOOL)arg1 ;
-(void)setSupportsImg4:(BOOL)arg1 ;
-(BOOL)productionMode;
-(NSNumber *)chipEpoch;
-(NSNumber *)enableMixMatch;
-(BOOL)effectiveProductionMode;
-(BOOL)effectiveSecurityMode;
-(BOOL)supportsImg4;
-(const char*)securityDomainString;
-(id)initWithBoardID:(unsigned)arg1 chipID:(unsigned)arg2 securityDomain:(unsigned long long)arg3 securityMode:(BOOL)arg4 productionMode:(BOOL)arg5 ;
@end

