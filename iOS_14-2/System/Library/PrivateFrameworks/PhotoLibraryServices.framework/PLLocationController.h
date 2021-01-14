/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSMutableArray, NSDictionary, NSString, PLPhotoLibrary;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSMutableArray* _locationPendingAssets;
	NSDictionary* _exifDictionary;
	NSString* _locationStr;
	BOOL _isEnabled;
	BOOL _isUpdating;
	BOOL _isHeadingEnabled;
	PLPhotoLibrary* _photoLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)usesEffectiveBundleIdentifier;
+(void)setUsesEffectiveBundleIdentifier:(BOOL)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(id)locationString;
-(id)photoLibrary;
-(id)location;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(void)_startUpdating;
-(void)_stopUpdating;
-(void)_updateLocationRunState;
-(id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(BOOL)arg2 ;
-(BOOL)_addLocationToAsset:(id)arg1 ;
-(void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(BOOL)arg3 ;
-(void)_updatePendingAssets;
-(void)_assetContainerChanged:(id)arg1 ;
-(void)dealloc;
@end

