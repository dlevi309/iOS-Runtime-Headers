/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <NetworkRelay/NRDeviceProperties.h>

@class NSData;

@interface NRDevicePairingProperties : NRDeviceProperties {

	BOOL _wasInitiallySetupUsingIDSPairing;
	BOOL _pairWithSPPLink;
	NSData* _outOfBandKey;
	NSData* _bluetoothMACAddress;

}

@property (nonatomic,retain) NSData * outOfBandKey;                              //@synthesize outOfBandKey=_outOfBandKey - In the implementation block
@property (assign,nonatomic) BOOL wasInitiallySetupUsingIDSPairing;              //@synthesize wasInitiallySetupUsingIDSPairing=_wasInitiallySetupUsingIDSPairing - In the implementation block
@property (assign,nonatomic) BOOL pairWithSPPLink;                               //@synthesize pairWithSPPLink=_pairWithSPPLink - In the implementation block
@property (nonatomic,retain) NSData * bluetoothMACAddress;                       //@synthesize bluetoothMACAddress=_bluetoothMACAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)bluetoothMACAddress;
-(void)setBluetoothMACAddress:(NSData *)arg1 ;
-(NSData *)outOfBandKey;
-(void)setOutOfBandKey:(NSData *)arg1 ;
-(BOOL)wasInitiallySetupUsingIDSPairing;
-(void)setWasInitiallySetupUsingIDSPairing:(BOOL)arg1 ;
-(BOOL)pairWithSPPLink;
-(void)setPairWithSPPLink:(BOOL)arg1 ;
@end

