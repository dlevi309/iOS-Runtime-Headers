/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXPreferencesObserver.h>

@class PXImageModulationSettings, NSHashTable, PXRequestedEDRHeadroomFactorFilter, CAContext, UIViewController, NSString;

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXSettingsKeyObserver, PXPreferencesObserver> {

	struct {
		BOOL enabled;
		BOOL lowPowerModeEnabled;
		BOOL active;
		BOOL HDRFocus;
		BOOL imageModulationIntensity;
		BOOL requestedEDRHeadroomFactor;
		BOOL finalRequestedEDRHeadroomFactor;
		BOOL desiredDynamicRange;
		BOOL imageLayerModulators;
		BOOL currentScreenSupportsHDR;
	}  _needsUpdateFlags;
	double _lastRequestedEDRHeadroomChangeTime;
	BOOL _lowPowerModeEnabled;
	BOOL _applicationActive;
	BOOL _mainScreen;
	BOOL _enabled;
	BOOL _active;
	BOOL _currentScreenSupportsHDR;
	PXImageModulationSettings* _settings;
	NSHashTable* _imageLayerModulators;
	PXRequestedEDRHeadroomFactorFilter* _requestedEDRHeadroomFactorFilter;
	long long _requestedEDRHeadroomSignpost;
	CAContext* _coreAnimationContext;
	UIViewController* _rootViewController;
	double _HDRFocus;
	double _imageModulationIntensity;
	double _requestedEDRHeadroomFactor;

}

@property (nonatomic,readonly) PXImageModulationSettings * settings;                                               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSHashTable * imageLayerModulators;                                                 //@synthesize imageLayerModulators=_imageLayerModulators - In the implementation block
@property (nonatomic,readonly) PXRequestedEDRHeadroomFactorFilter * requestedEDRHeadroomFactorFilter;              //@synthesize requestedEDRHeadroomFactorFilter=_requestedEDRHeadroomFactorFilter - In the implementation block
@property (assign,nonatomic) long long requestedEDRHeadroomSignpost;                                               //@synthesize requestedEDRHeadroomSignpost=_requestedEDRHeadroomSignpost - In the implementation block
@property (nonatomic,retain) CAContext * coreAnimationContext;                                                     //@synthesize coreAnimationContext=_coreAnimationContext - In the implementation block
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled;                                //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
@property (assign,getter=isApplicationActive,nonatomic) BOOL applicationActive;                                    //@synthesize applicationActive=_applicationActive - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * rootViewController;                                       //@synthesize rootViewController=_rootViewController - In the implementation block
@property (getter=isMainScreen,nonatomic,readonly) BOOL mainScreen;                                                //@synthesize mainScreen=_mainScreen - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL currentScreenSupportsHDR;                                                      //@synthesize currentScreenSupportsHDR=_currentScreenSupportsHDR - In the implementation block
@property (nonatomic,readonly) double HDRFocus;                                                                    //@synthesize HDRFocus=_HDRFocus - In the implementation block
@property (nonatomic,readonly) double imageModulationIntensity;                                                    //@synthesize imageModulationIntensity=_imageModulationIntensity - In the implementation block
@property (nonatomic,readonly) double requestedEDRHeadroomFactor;                                                  //@synthesize requestedEDRHeadroomFactor=_requestedEDRHeadroomFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)HDRValueForAsset:(id)arg1 ;
+(long long)_contentFormatForAsset:(id)arg1 ;
+(SCD_Struct_PX99)optionsForAsset:(id)arg1 ;
+(double)_hdrGainForAsset:(id)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(void)preferencesDidChange;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_didEndRequestingEDRHeadroomFactor:(double)arg1 ;
-(void)_updateDesiredDynamicRangeIfNeeded;
-(void)setActive:(BOOL)arg1 ;
-(void)_updateImageLayerModulator:(id)arg1 ;
-(void)_invalidateDesiredDynamicRange;
-(void)_updateRequestedEDRHeadroomFactorIfNeeded;
-(id)init;
-(void)_invalidateFinalRequestedEDRHeadroomFactor;
-(void)_invalidateRequestedEDRHeadroomFactor;
-(CAContext *)coreAnimationContext;
-(void)setHDRFocus:(double)arg1 ;
-(void)_invalidateCurrentScreenSupportsHDR;
-(void)setEnabled:(BOOL)arg1 ;
-(void)didPerformChanges;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)isActive;
-(void)setRequestedEDRHeadroomSignpost:(long long)arg1 ;
-(void)_updateIfNeeded;
-(void)_updateCoreAnimationContext;
-(void)_invalidateEnabled;
-(BOOL)currentScreenSupportsHDR;
-(void)_updateLowPowerModeEnabledIfNeeded;
-(void)_invalidateHDRFocus;
-(void)_invalidateLowPowerModeEnabled;
-(void)_updateImageLayerModulatorsIfNeeded;
-(BOOL)isMainScreen;
-(PXRequestedEDRHeadroomFactorFilter *)requestedEDRHeadroomFactorFilter;
-(long long)requestedEDRHeadroomSignpost;
-(UIViewController *)rootViewController;
-(void)_invalidateActive;
-(void)_updateEnabledIfNeeded;
-(BOOL)isApplicationActive;
-(void)_processInfoPowerStateDidChange:(id)arg1 ;
-(PXImageModulationSettings *)settings;
-(double)HDRFocus;
-(void)_invalidateImageLayerModulators;
-(NSHashTable *)imageLayerModulators;
-(void)setCoreAnimationContext:(CAContext *)arg1 ;
-(void)_invalidateImageModulationIntensity;
-(BOOL)_needsUpdate;
-(id)_checkoutImageLayerModulatorWithOptions:(SCD_Struct_PX99)arg1 contentType:(long long)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)mutableChangeObject;
-(void)_updateActiveIfNeeded;
-(void)setImageModulationIntensity:(double)arg1 ;
-(void)_updateImageModulationIntensityIfNeeded;
-(void)_updateCurrentScreenSupportsHDRIfNeeded;
-(void)_updateHDRFocusIfNeeded;
-(void)setNeedsImageModulationIntensityUpdate;
-(void)checkInImageLayerModulator:(id)arg1 ;
-(BOOL)isEnabled;
-(void)_didStartRequestingEDRHeadroomFactor:(double)arg1 ;
-(void)setNeedsHDRFocusUpdate;
-(void)_setNeedsUpdate;
-(void)checkInLivePhotoViewModulator:(id)arg1 ;
-(void)setRequestedEDRHeadroomFactor:(double)arg1 ;
-(void)_applicationDidResignActive:(id)arg1 ;
-(id)checkoutImageLayerModulatorWithOptions:(SCD_Struct_PX99)arg1 ;
-(void)setApplicationActive:(BOOL)arg1 ;
-(id)checkoutLivePhotoViewModulatorWithOptions:(SCD_Struct_PX99)arg1 ;
-(id)initWithRootViewController:(id)arg1 mainScreen:(BOOL)arg2 ;
-(double)imageModulationIntensity;
-(double)requestedEDRHeadroomFactor;
-(void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setCurrentScreenSupportsHDR:(BOOL)arg1 ;
@end

