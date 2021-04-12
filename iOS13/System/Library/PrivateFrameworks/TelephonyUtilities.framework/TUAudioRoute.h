/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TURoute.h>

@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute {

	NSString* _avAudioRouteName;
	NSDictionary* _route;

}

@property (nonatomic,copy,readonly) NSString * avAudioRouteName;                                         //@synthesize avAudioRouteName=_avAudioRouteName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bluetoothProductIdentifier; 
@property (getter=isHeadphoneJackConnected,nonatomic,readonly) BOOL headphoneJackConnected; 
@property (nonatomic,copy,readonly) NSDictionary * route;                                                //@synthesize route=_route - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(long long)deviceType;
-(BOOL)isPreferred;
-(NSDictionary *)route;
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
-(id)identifiersOfOtherConnectedDevices;
-(NSString *)avAudioRouteName;
-(BOOL)isHeadphoneJackConnected;
-(BOOL)_routeTypeEqualTo:(id)arg1 ;
-(NSString *)bluetoothProductIdentifier;
-(BOOL)isHandset;
@end

