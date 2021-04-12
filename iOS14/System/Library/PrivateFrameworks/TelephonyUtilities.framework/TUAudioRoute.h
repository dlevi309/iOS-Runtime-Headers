/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isBluetooth;
-(BOOL)isCarAudio;
-(BOOL)supportsPreferredAndActive;
-(long long)deviceType;
-(BOOL)isSpeaker;
-(BOOL)isDefaultRoute;
-(BOOL)isWirelessHeadset;
-(NSDictionary *)route;
-(id)identifiersOfOtherConnectedDevices;
-(BOOL)isPreferredAndActive;
-(BOOL)isBluetoothLE;
-(long long)bluetoothEndpointType;
-(BOOL)isPreferred;
-(id)customDescription;
-(BOOL)isReceiver;
-(BOOL)isCurrentlyPicked;
-(BOOL)isHeadphoneJackConnected;
-(BOOL)isWiredHeadset;
-(BOOL)isWiredHeadphones;
-(BOOL)isAirTunes;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)_routeTypeEqualTo:(id)arg1 ;
-(NSString *)avAudioRouteName;
-(BOOL)isHandset;
-(NSString *)bluetoothProductIdentifier;
@end

