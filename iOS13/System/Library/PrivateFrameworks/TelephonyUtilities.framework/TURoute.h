/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface TURoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _currentlyPicked;
	BOOL _defaultRoute;
	BOOL _receiver;
	BOOL _speaker;
	BOOL _wiredHeadphones;
	BOOL _wiredHeadset;
	BOOL _wirelessHeadset;
	BOOL _airTunes;
	BOOL _carAudio;
	BOOL _guest;
	BOOL _bluetooth;
	BOOL _bluetoothLE;
	BOOL _preferred;
	BOOL _preferredAndActive;
	BOOL _supportsPreferredAndActive;
	BOOL _supportsRelay;
	NSString* _uniqueIdentifier;
	NSString* _name;
	long long _deviceType;
	long long _bluetoothEndpointType;
	NSArray* _identifiersOfOtherConnectedDevices;

}

@property (assign,nonatomic) long long deviceType;                                             //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,getter=isCurrentlyPicked,nonatomic) BOOL currentlyPicked;                    //@synthesize currentlyPicked=_currentlyPicked - In the implementation block
@property (assign,getter=isDefaultRoute,nonatomic) BOOL defaultRoute;                          //@synthesize defaultRoute=_defaultRoute - In the implementation block
@property (assign,getter=isReceiver,nonatomic) BOOL receiver;                                  //@synthesize receiver=_receiver - In the implementation block
@property (assign,getter=isSpeaker,nonatomic) BOOL speaker;                                    //@synthesize speaker=_speaker - In the implementation block
@property (assign,getter=isWiredHeadphones,nonatomic) BOOL wiredHeadphones;                    //@synthesize wiredHeadphones=_wiredHeadphones - In the implementation block
@property (assign,getter=isWiredHeadset,nonatomic) BOOL wiredHeadset;                          //@synthesize wiredHeadset=_wiredHeadset - In the implementation block
@property (assign,getter=isWirelessHeadset,nonatomic) BOOL wirelessHeadset;                    //@synthesize wirelessHeadset=_wirelessHeadset - In the implementation block
@property (assign,getter=isAirTunes,nonatomic) BOOL airTunes;                                  //@synthesize airTunes=_airTunes - In the implementation block
@property (assign,getter=isCarAudio,nonatomic) BOOL carAudio;                                  //@synthesize carAudio=_carAudio - In the implementation block
@property (assign,getter=isGuest,nonatomic) BOOL guest;                                        //@synthesize guest=_guest - In the implementation block
@property (assign,getter=isBluetooth,nonatomic) BOOL bluetooth;                                //@synthesize bluetooth=_bluetooth - In the implementation block
@property (assign,getter=isBluetoothLE,nonatomic) BOOL bluetoothLE;                            //@synthesize bluetoothLE=_bluetoothLE - In the implementation block
@property (assign,nonatomic) long long bluetoothEndpointType;                                  //@synthesize bluetoothEndpointType=_bluetoothEndpointType - In the implementation block
@property (assign,getter=isPreferred,nonatomic) BOOL preferred;                                //@synthesize preferred=_preferred - In the implementation block
@property (assign,getter=isPreferredAndActive,nonatomic) BOOL preferredAndActive;              //@synthesize preferredAndActive=_preferredAndActive - In the implementation block
@property (assign,nonatomic) BOOL supportsPreferredAndActive;                                  //@synthesize supportsPreferredAndActive=_supportsPreferredAndActive - In the implementation block
@property (nonatomic,copy) NSArray * identifiersOfOtherConnectedDevices;                       //@synthesize identifiersOfOtherConnectedDevices=_identifiersOfOtherConnectedDevices - In the implementation block
@property (assign,nonatomic) BOOL supportsRelay;                                               //@synthesize supportsRelay=_supportsRelay - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(long long)deviceType;
-(BOOL)isPreferred;
-(void)setDeviceType:(long long)arg1 ;
-(void)setReceiver:(BOOL)arg1 ;
-(BOOL)isGuest;
-(void)setGuest:(BOOL)arg1 ;
-(BOOL)isEqualToRoute:(id)arg1 ;
-(BOOL)isCurrentlyPicked;
-(BOOL)isReceiver;
-(BOOL)isSpeaker;
-(BOOL)isDefaultRoute;
-(BOOL)isWiredHeadphones;
-(BOOL)isWiredHeadset;
-(BOOL)isWirelessHeadset;
-(BOOL)isAirTunes;
-(BOOL)isCarAudio;
-(BOOL)isBluetooth;
-(BOOL)isBluetoothLE;
-(long long)bluetoothEndpointType;
-(BOOL)isPreferredAndActive;
-(BOOL)supportsPreferredAndActive;
-(NSArray *)identifiersOfOtherConnectedDevices;
-(BOOL)supportsRelay;
-(id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2 ;
-(void)setCurrentlyPicked:(BOOL)arg1 ;
-(void)setDefaultRoute:(BOOL)arg1 ;
-(void)setSpeaker:(BOOL)arg1 ;
-(void)setWiredHeadphones:(BOOL)arg1 ;
-(void)setWiredHeadset:(BOOL)arg1 ;
-(void)setWirelessHeadset:(BOOL)arg1 ;
-(void)setAirTunes:(BOOL)arg1 ;
-(void)setCarAudio:(BOOL)arg1 ;
-(void)setBluetooth:(BOOL)arg1 ;
-(void)setBluetoothLE:(BOOL)arg1 ;
-(void)setBluetoothEndpointType:(long long)arg1 ;
-(void)setPreferred:(BOOL)arg1 ;
-(void)setPreferredAndActive:(BOOL)arg1 ;
-(void)setSupportsPreferredAndActive:(BOOL)arg1 ;
-(void)setIdentifiersOfOtherConnectedDevices:(NSArray *)arg1 ;
-(void)setSupportsRelay:(BOOL)arg1 ;
@end

