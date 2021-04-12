/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding> {

	NSUUID* _cbuuid;
	NSData* _BTOutOfBandKey;
	NSData* _bluetoothMACAddress;
	long long _pairingProtocolVersion;
	BOOL _supportsIPsecWithSPPLink;

}

@property (nonatomic,readonly) NSUUID * cbuuid;                               //@synthesize cbuuid=_cbuuid - In the implementation block
@property (nonatomic,readonly) long long pairingProtocolVersion;              //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
@property (nonatomic,readonly) NSData * BTOutOfBandKey;                       //@synthesize BTOutOfBandKey=_BTOutOfBandKey - In the implementation block
@property (assign,nonatomic) BOOL supportsIPsecWithSPPLink;                   //@synthesize supportsIPsecWithSPPLink=_supportsIPsecWithSPPLink - In the implementation block
@property (nonatomic,retain) NSData * bluetoothMACAddress;                    //@synthesize bluetoothMACAddress=_bluetoothMACAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)cbuuid;
-(long long)pairingProtocolVersion;
-(NSData *)BTOutOfBandKey;
-(BOOL)supportsIPsecWithSPPLink;
-(NSData *)bluetoothMACAddress;
-(id)initWithCBUUID:(id)arg1 pairingProtocolVersion:(long long)arg2 BTOutOfBandKey:(id)arg3 ;
-(void)setSupportsIPsecWithSPPLink:(BOOL)arg1 ;
-(void)setBluetoothMACAddress:(NSData *)arg1 ;
@end

