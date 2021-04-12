/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDSRTPCryptoSuite, NSData;

@interface HMDSRTPParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDSRTPCryptoSuite* _srtpCryptoSuite;
	NSData* _srtpMasterKey;
	NSData* _srtpMasterSalt;

}

@property (nonatomic,copy,readonly) HMDSRTPCryptoSuite * srtpCryptoSuite;              //@synthesize srtpCryptoSuite=_srtpCryptoSuite - In the implementation block
@property (nonatomic,copy,readonly) NSData * srtpMasterKey;                            //@synthesize srtpMasterKey=_srtpMasterKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * srtpMasterSalt;                           //@synthesize srtpMasterSalt=_srtpMasterSalt - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDSRTPCryptoSuite *)srtpCryptoSuite;
-(BOOL)compatibleWithRemoteEndPoint:(id)arg1 ;
-(NSData *)srtpMasterKey;
-(NSData *)srtpMasterSalt;
-(id)initWithCryptoSuite:(id)arg1 masterKey:(id)arg2 masterSalt:(id)arg3 ;
@end

