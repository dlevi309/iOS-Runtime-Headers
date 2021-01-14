/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMCameraSignificantEvent, HMCameraProfile, HFHomePersonItemProvider, HFPhotosPersonItemProvider, HMPersonManager, HMHome, HMFaceClassification, NAFuture;

@interface HUFaceRecognitionAddPersonItemManager : HFItemManager {

	HMCameraSignificantEvent* _significantEvent;
	HMCameraProfile* _cameraProfile;
	HFHomePersonItemProvider* _homePersonItemProvider;
	HFPhotosPersonItemProvider* _photosPersonItemProvider;
	HMPersonManager* _personManager;
	HMHome* _overrideHome;

}

@property (nonatomic,readonly) HMCameraSignificantEvent * significantEvent;                        //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,readonly) HMCameraProfile * cameraProfile;                                    //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) HFHomePersonItemProvider * homePersonItemProvider;                  //@synthesize homePersonItemProvider=_homePersonItemProvider - In the implementation block
@property (nonatomic,readonly) HFPhotosPersonItemProvider * photosPersonItemProvider;              //@synthesize photosPersonItemProvider=_photosPersonItemProvider - In the implementation block
@property (nonatomic,readonly) HMPersonManager * personManager;                                    //@synthesize personManager=_personManager - In the implementation block
@property (nonatomic,readonly) HMHome * overrideHome;                                              //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,readonly) HMFaceClassification * faceClassification; 
@property (nonatomic,readonly) NAFuture * faceCropImageFuture; 
-(HMCameraProfile *)cameraProfile;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMPersonManager *)personManager;
-(id)initWithDelegate:(id)arg1 ;
-(id)_homeFuture;
-(HMHome *)overrideHome;
-(HMFaceClassification *)faceClassification;
-(HMCameraSignificantEvent *)significantEvent;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithSignificantEvent:(id)arg1 home:(id)arg2 delegate:(id)arg3 ;
-(NAFuture *)faceCropImageFuture;
-(id)associateFaceClassificationWithExistingPerson:(id)arg1 ;
-(id)associateFaceClassificationWithNewPersonNamed:(id)arg1 ;
-(HFHomePersonItemProvider *)homePersonItemProvider;
-(HFPhotosPersonItemProvider *)photosPersonItemProvider;
@end

