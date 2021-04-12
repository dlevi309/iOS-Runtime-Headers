/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface GEOPlatform : NSObject {

	CTServerConnectionRef _telephonyServerConnection;
	NSObject*<OS_dispatch_queue> _coreTelephonyIsolationQueue;

}
+(BOOL)isRunningInGeod;
+(id)sharedPlatform;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
-(id)hardwareIdentifier;
-(id)productName;
-(id)clientCapabilities;
-(id)init;
-(void)_logCTError:(SCD_Struct_GE201)arg1 message:(id)arg2 ;
-(long long)deviceScreenHeightInPixels;
-(BOOL)supportsRealisticTiles;
-(BOOL)supportsForceTouch;
-(id)osVersion;
-(BOOL)supportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(void)_setupCTServerConnection;
-(BOOL)isCellDataPossible;
-(id)hardwareModel;
-(BOOL)_deviceSupportsNavigation;
-(id)buildVersion;
-(double)deviceScreenScale;
-(BOOL)isInternalInstall;
-(long long)deviceScreenWidthInPixels;
-(id)deviceCountrySKUForServiceRequests;
-(id)deviceCountrySKU;
-(id)osAndBuildVersion;
@end

