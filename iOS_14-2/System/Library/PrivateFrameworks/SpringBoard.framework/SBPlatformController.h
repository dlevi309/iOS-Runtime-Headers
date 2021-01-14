/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)defaultIconState;
-(id)init;
-(id)uniqueDeviceIdentifier;
-(id)localizedPlatformName;
-(id)productType;
-(id)deviceClass;
-(BOOL)isDeveloperDevice;
-(long long)medusaCapabilities;
-(BOOL)isiPadMini;
-(id)hardwareModel;
-(BOOL)isCarrierInstall;
-(id)systemBuildVersion;
-(void)_loadDefaultIconInfo;
-(BOOL)isInternalInstall;
-(id)defaultIconStateDisplayIdentifiers;
-(BOOL)isHomeGestureEnabled;
-(BOOL)prefersAlwaysOnOrientation;
-(BOOL)isRoundCornerPhone;
-(BOOL)isRoundCornerPad;
@end

