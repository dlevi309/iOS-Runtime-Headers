/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TURoute.h>

@class NSArray;

@interface TUMutableRoute : TURoute

@property (assign,nonatomic) long long deviceType; 
@property (assign,getter=isCurrentlyPicked,nonatomic) BOOL currentlyPicked; 
@property (assign,getter=isDefaultRoute,nonatomic) BOOL defaultRoute; 
@property (assign,getter=isReceiver,nonatomic) BOOL receiver; 
@property (assign,getter=isSpeaker,nonatomic) BOOL speaker; 
@property (assign,getter=isWiredHeadphones,nonatomic) BOOL wiredHeadphones; 
@property (assign,getter=isWiredHeadset,nonatomic) BOOL wiredHeadset; 
@property (assign,getter=isWirelessHeadset,nonatomic) BOOL wirelessHeadset; 
@property (assign,getter=isAirTunes,nonatomic) BOOL airTunes; 
@property (assign,getter=isCarAudio,nonatomic) BOOL carAudio; 
@property (assign,getter=isGuest,nonatomic) BOOL guest; 
@property (assign,getter=isBluetooth,nonatomic) BOOL bluetooth; 
@property (assign,getter=isBluetoothLE,nonatomic) BOOL bluetoothLE; 
@property (assign,nonatomic) long long bluetoothEndpointType; 
@property (assign,getter=isPreferred,nonatomic) BOOL preferred; 
@property (assign,getter=isPreferredAndActive,nonatomic) BOOL preferredAndActive; 
@property (assign,nonatomic) BOOL supportsPreferredAndActive; 
@property (nonatomic,copy) NSArray * identifiersOfOtherConnectedDevices; 
@property (assign,nonatomic) BOOL supportsRelay; 
+(BOOL)supportsSecureCoding;
@end

