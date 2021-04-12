/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject {

	NSDictionary* _defaultIconState;
	NSOrderedSet* _defaultIconStateDisplayIdentifiers;
	NSString* _localizedDeviceName;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	long long _medusaCapabilities;

}
+(id)sharedInstance;
-(id)init;
-(id)hardwareModel;
-(id)productType;
-(id)deviceClass;
-(id)uniqueDeviceIdentifier;
-(BOOL)isInternalInstall;
-(BOOL)isCarrierInstall;
-(id)systemBuildVersion;
-(id)defaultIconState;
-(BOOL)prefersAlwaysOnOrientation;
-(long long)medusaCapabilities;
-(BOOL)supportsGestureInitiatedAutoPiP;
-(id)defaultIconStateDisplayIdentifiers;
-(id)localizedPlatformName;
-(BOOL)isHomeGestureEnabled;
-(void)_loadDefaultIconInfo;
-(BOOL)isDeveloperDevice;
-(BOOL)isiPadMini;
-(BOOL)isRoundCornerPhone;
-(BOOL)isRoundCornerPad;
@end

