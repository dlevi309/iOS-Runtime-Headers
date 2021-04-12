/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface GEOPlatform : NSObject {

	CTServerConnectionRef _telephonyServerConnection;
	NSObject*<OS_dispatch_queue> _coreTelephonyIsolationQueue;

}
+(id)sharedPlatform;
+(BOOL)isRunningInGeod;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
-(id)init;
-(id)hardwareModel;
-(BOOL)isInternalInstall;
-(id)hardwareIdentifier;
-(id)buildVersion;
-(id)productName;
-(id)clientCapabilities;
-(BOOL)supportsNavigation;
-(id)deviceCountrySKUForServiceRequests;
-(id)osVersion;
-(double)deviceScreenScale;
-(id)deviceCountrySKU;
-(BOOL)isCellDataPossible;
-(id)osAndBuildVersion;
-(BOOL)_deviceSupportsNavigation;
-(void)_setupCTServerConnection;
-(void)_logCTError:(SCD_Struct_GE197)arg1 message:(id)arg2 ;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsRealisticTiles;
-(BOOL)supportsForceTouch;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
@end

