/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUSlideshowViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUSlideshowSettingsViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class OKMediaFeederPhotoKit, PUSlideshowContextRegistry, OKProducerPreset, PHFetchResult, PHAssetCollection, PUSlideshowViewModel, PUSlideshowSettingsViewModel, OKPresentationViewController, NSUUID, NSString;

@interface PUSlideshowSession : NSObject <PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewModelChangeObserver, PXSettingsKeyObserver> {

	OKMediaFeederPhotoKit* _mediaFeeder;
	PUSlideshowContextRegistry* _contextRegistry;
	OKProducerPreset* _currentPreset;
	BOOL __disablingIdleTimer;
	BOOL _didStartOnce;
	PHFetchResult* _fetchResult;
	PHAssetCollection* _assetCollection;
	PUSlideshowViewModel* _viewModel;
	PUSlideshowSettingsViewModel* _settingsViewModel;
	OKPresentationViewController* _presentationViewController;
	id __disablingIdleTimerToken;
	NSUUID* _uuid;
	long long _currentState;

}

@property (assign,setter=_setDisablingIdleTimer:,nonatomic) BOOL _disablingIdleTimer;                      //@synthesize _disablingIdleTimer=__disablingIdleTimer - In the implementation block
@property (setter=_setDisablingIdleTimerToken:,nonatomic,retain) id _disablingIdleTimerToken;              //@synthesize _disablingIdleTimerToken=__disablingIdleTimerToken - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long currentState;                                                       //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) BOOL didStartOnce;                                                            //@synthesize didStartOnce=_didStartOnce - In the implementation block
@property (nonatomic,readonly) PHFetchResult * fetchResult;                                                //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                        //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PUSlideshowViewModel * viewModel;                                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PUSlideshowSettingsViewModel * settingsViewModel;                           //@synthesize settingsViewModel=_settingsViewModel - In the implementation block
@property (nonatomic,readonly) OKPresentationViewController * presentationViewController;                  //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentState:(long long)arg1 ;
-(PHFetchResult *)fetchResult;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(NSUUID *)uuid;
-(id)init;
-(void)updatePresentationViewController;
-(void)_distributeSlideshowDisplayContextWithPresentationController:(id)arg1 ;
-(void)registerSlideshowDisplayContext:(id)arg1 ;
-(void)unregisterSlideshowDisplayContext:(id)arg1 ;
-(id)_resolutionSizes;
-(void)_configurePresentationViewController:(id)arg1 ;
-(void)_addCurrentSettingsToPayload:(id)arg1 ;
-(void)_invalidateCurrentState;
-(void)_updateCurrentState;
-(void)_slideshowViewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_slideshowSettingsViewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)didStartOnce;
-(void)_setDisablingIdleTimer:(BOOL)arg1 ;
-(PUSlideshowSettingsViewModel *)settingsViewModel;
-(BOOL)_disablingIdleTimer;
-(void)setDidStartOnce:(BOOL)arg1 ;
-(long long)currentState;
-(id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2 startIndex:(unsigned long long)arg3 ;
-(PUSlideshowViewModel *)viewModel;
-(OKPresentationViewController *)presentationViewController;
-(id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2 ;
-(void)_beginDisablingIdleTimer;
-(void)_endDisablingIdleTimerIfNecessary;
-(id)_disablingIdleTimerToken;
-(void)_setDisablingIdleTimerToken:(id)arg1 ;
-(PHAssetCollection *)assetCollection;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dealloc;
@end

