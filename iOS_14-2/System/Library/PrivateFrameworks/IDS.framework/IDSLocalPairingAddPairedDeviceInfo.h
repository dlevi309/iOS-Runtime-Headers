/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding> {

	NSUUID* _cbuuid;
	NSData* _BTOutOfBandKey;
	NSData* _bluetoothMACAddress;
	long long _pairingProtocolVersion;
	long long _pairingType;
	BOOL _supportsIPsecWithSPPLink;
	BOOL _shouldPairDirectlyOverIPsec;

}

@property (nonatomic,readonly) NSUUID * cbuuid;                               //@synthesize cbuuid=_cbuuid - In the implementation block
@property (nonatomic,readonly) long long pairingProtocolVersion;              //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
@property (nonatomic,readonly) NSData * BTOutOfBandKey;                       //@synthesize BTOutOfBandKey=_BTOutOfBandKey - In the implementation block
@property (assign,nonatomic) BOOL supportsIPsecWithSPPLink;                   //@synthesize supportsIPsecWithSPPLink=_supportsIPsecWithSPPLink - In the implementation block
@property (assign,nonatomic) long long pairingType;                           //@synthesize pairingType=_pairingType - In the implementation block
@property (nonatomic,retain) NSData * bluetoothMACAddress;                    //@synthesize bluetoothMACAddress=_bluetoothMACAddress - In the implementation block
@property (assign,nonatomic) BOOL shouldPairDirectlyOverIPsec;                //@synthesize shouldPairDirectlyOverIPsec=_shouldPairDirectlyOverIPsec - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)cbuuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)pairingType;
-(NSData *)BTOutOfBandKey;
-(long long)pairingProtocolVersion;
-(BOOL)supportsIPsecWithSPPLink;
-(BOOL)shouldPairDirectlyOverIPsec;
-(NSData *)bluetoothMACAddress;
-(void)setBluetoothMACAddress:(NSData *)arg1 ;
-(void)setPairingType:(long long)arg1 ;
-(id)initWithCBUUID:(id)arg1 pairingProtocolVersion:(long long)arg2 BTOutOfBandKey:(id)arg3 ;
-(void)setSupportsIPsecWithSPPLink:(BOOL)arg1 ;
-(void)setShouldPairDirectlyOverIPsec:(BOOL)arg1 ;
@end

