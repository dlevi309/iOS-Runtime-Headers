/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>
#import <libobjc.A.dylib/PXFavoritesSettingsDelegate.h>

@class PUCompositeVideoSettings, PUTabbedLibrarySettings, PUPhotosGridSettings, PUPhotoEditProtoSettings, PUFeedSettings, PUMomentsSettings, PUMedusaSettings, PUOneUpSettings, PUTilingViewSettings, PUAirPlaySettings, PUSlideshowSettings, PUAlbumListSettings, PUWelcomeSettings, PUWorkaroundSettings, PUSceneSettings, PUAudioClassificationSettings, PXSharingSettings, PUCurationSettings, PUSuggestionsSettings, PUIrisSettings, PUPerformanceDiagnosticsSettings, PXImportSettings, NSString, UIImage;

@interface PURootSettings : PXSettings <PXFavoritesSettingsDelegate> {

	BOOL _enforceDisableIrisUI;
	BOOL _allowIrisUI;
	PUCompositeVideoSettings* _compositeVideoSettings;
	PUTabbedLibrarySettings* _tabbedLibrarySettings;
	PUPhotosGridSettings* _photosGridSettings;
	PUPhotoEditProtoSettings* _photoEditingSettings;
	PUFeedSettings* _feedSettings;
	PUMomentsSettings* _momentsSettings;
	PUMedusaSettings* _medusaSettings;
	PUOneUpSettings* _oneUpSettings;
	PUTilingViewSettings* _tilingViewSettings;
	Class _interfaceThemeClass;
	PUAirPlaySettings* _airPlaySettings;
	PUSlideshowSettings* _slideshowSettings;
	PUAlbumListSettings* _albumListSettings;
	PUWelcomeSettings* _welcomeSettings;
	PUWorkaroundSettings* _workaroundSettings;
	PUSceneSettings* _sceneSettings;
	PUAudioClassificationSettings* _audioClassificationSettings;
	PXSharingSettings* _sharingSettings;
	PUCurationSettings* _curation;
	PUSuggestionsSettings* _suggestions;
	PUIrisSettings* _irisSettings;
	PUPerformanceDiagnosticsSettings* _performanceDiagnosticsSettings;
	PXImportSettings* _importSettings;
	NSString* __internal_libraryStateBriefDescription;
	UIImage* __internal_libraryStateImage;

}

@property (nonatomic,retain) NSString * _internal_libraryStateBriefDescription;                              //@synthesize _internal_libraryStateBriefDescription=__internal_libraryStateBriefDescription - In the implementation block
@property (nonatomic,retain) UIImage * _internal_libraryStateImage;                                          //@synthesize _internal_libraryStateImage=__internal_libraryStateImage - In the implementation block
@property (assign,nonatomic) BOOL allowIrisUI;                                                               //@synthesize allowIrisUI=_allowIrisUI - In the implementation block
@property (nonatomic,retain) PUCompositeVideoSettings * compositeVideoSettings;                              //@synthesize compositeVideoSettings=_compositeVideoSettings - In the implementation block
@property (nonatomic,retain) PUTabbedLibrarySettings * tabbedLibrarySettings;                                //@synthesize tabbedLibrarySettings=_tabbedLibrarySettings - In the implementation block
@property (nonatomic,retain) PUPhotosGridSettings * photosGridSettings;                                      //@synthesize photosGridSettings=_photosGridSettings - In the implementation block
@property (nonatomic,retain) PUPhotoEditProtoSettings * photoEditingSettings;                                //@synthesize photoEditingSettings=_photoEditingSettings - In the implementation block
@property (nonatomic,retain) PUFeedSettings * feedSettings;                                                  //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,retain) PUMomentsSettings * momentsSettings;                                            //@synthesize momentsSettings=_momentsSettings - In the implementation block
@property (nonatomic,retain) PUMedusaSettings * medusaSettings;                                              //@synthesize medusaSettings=_medusaSettings - In the implementation block
@property (nonatomic,retain) PUOneUpSettings * oneUpSettings;                                                //@synthesize oneUpSettings=_oneUpSettings - In the implementation block
@property (nonatomic,retain) PUTilingViewSettings * tilingViewSettings;                                      //@synthesize tilingViewSettings=_tilingViewSettings - In the implementation block
@property (nonatomic,retain) Class interfaceThemeClass;                                                      //@synthesize interfaceThemeClass=_interfaceThemeClass - In the implementation block
@property (nonatomic,retain) PUAirPlaySettings * airPlaySettings;                                            //@synthesize airPlaySettings=_airPlaySettings - In the implementation block
@property (nonatomic,retain) PUSlideshowSettings * slideshowSettings;                                        //@synthesize slideshowSettings=_slideshowSettings - In the implementation block
@property (nonatomic,retain) PUAlbumListSettings * albumListSettings;                                        //@synthesize albumListSettings=_albumListSettings - In the implementation block
@property (nonatomic,retain) PUWelcomeSettings * welcomeSettings;                                            //@synthesize welcomeSettings=_welcomeSettings - In the implementation block
@property (nonatomic,retain) PUWorkaroundSettings * workaroundSettings;                                      //@synthesize workaroundSettings=_workaroundSettings - In the implementation block
@property (nonatomic,retain) PUSceneSettings * sceneSettings;                                                //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (nonatomic,retain) PUAudioClassificationSettings * audioClassificationSettings;                    //@synthesize audioClassificationSettings=_audioClassificationSettings - In the implementation block
@property (nonatomic,retain) PXSharingSettings * sharingSettings;                                            //@synthesize sharingSettings=_sharingSettings - In the implementation block
@property (nonatomic,retain) PUCurationSettings * curation;                                                  //@synthesize curation=_curation - In the implementation block
@property (nonatomic,retain) PUSuggestionsSettings * suggestions;                                            //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) PUIrisSettings * irisSettings;                                                  //@synthesize irisSettings=_irisSettings - In the implementation block
@property (nonatomic,retain) PUPerformanceDiagnosticsSettings * performanceDiagnosticsSettings;              //@synthesize performanceDiagnosticsSettings=_performanceDiagnosticsSettings - In the implementation block
@property (nonatomic,retain) PXImportSettings * importSettings;                                              //@synthesize importSettings=_importSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentAsset;
+(void)dismissSettingsController:(id)arg1 ;
+(id)sharedInstance;
+(id)_saveScreenshot:(id)arg1 ;
+(id)settingsControllerModule;
+(void)_deleteAllDiagnosticFiles;
+(id)_photosUIAppsSettings;
+(id)photosUITesterRootViewController;
+(id)_debugRowsForViewControllerStack:(id)arg1 ;
+(void)presentSettingsController;
+(void)setupStatusBarInternalSettingsGestureOnInternalDevices;
+(id)_photoKitSettings;
+(void)_setCurrentAsset:(id)arg1 ;
+(void)setupStatusBarDoubleTapOnInternalDevices;
+(void)_presentTapToRadar;
+(id)_photosUICoreSettings;
+(void)_setDebugRows:(id)arg1 ;
-(id)parentSettings;
-(id)archiveValueForKey:(id)arg1 ;
-(void)setDefaultValues;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(PUSuggestionsSettings *)suggestions;
-(void)setSuggestions:(PUSuggestionsSettings *)arg1 ;
-(PUFeedSettings *)feedSettings;
-(UIImage *)_internal_libraryStateImage;
-(void)favoritesSettingsDidChangeFavorites:(id)arg1 ;
-(void)setPhotoEditingSettings:(PUPhotoEditProtoSettings *)arg1 ;
-(void)setFeedSettings:(PUFeedSettings *)arg1 ;
-(void)setImportSettings:(PXImportSettings *)arg1 ;
-(PUSceneSettings *)sceneSettings;
-(BOOL)allowIrisUI;
-(void)favoritesSettings:(id)arg1 loadAccessorySettingsWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)setIrisSettings:(PUIrisSettings *)arg1 ;
-(void)setAirPlaySettings:(PUAirPlaySettings *)arg1 ;
-(PUCurationSettings *)curation;
-(void)setSceneSettings:(PUSceneSettings *)arg1 ;
-(void)setAlbumListSettings:(PUAlbumListSettings *)arg1 ;
-(PUSlideshowSettings *)slideshowSettings;
-(PUOneUpSettings *)oneUpSettings;
-(BOOL)irisUIEnabled;
-(void)setWorkaroundSettings:(PUWorkaroundSettings *)arg1 ;
-(void)setTilingViewSettings:(PUTilingViewSettings *)arg1 ;
-(void)setTabbedLibrarySettings:(PUTabbedLibrarySettings *)arg1 ;
-(void)setOneUpSettings:(PUOneUpSettings *)arg1 ;
-(PUCompositeVideoSettings *)compositeVideoSettings;
-(PUWelcomeSettings *)welcomeSettings;
-(void)setWelcomeSettings:(PUWelcomeSettings *)arg1 ;
-(PUAlbumListSettings *)albumListSettings;
-(PUAirPlaySettings *)airPlaySettings;
-(PUMomentsSettings *)momentsSettings;
-(void)setSharingSettings:(PXSharingSettings *)arg1 ;
-(void)setCuration:(PUCurationSettings *)arg1 ;
-(PUTabbedLibrarySettings *)tabbedLibrarySettings;
-(void)setMomentsSettings:(PUMomentsSettings *)arg1 ;
-(PXImportSettings *)importSettings;
-(void)setAllowIrisUI:(BOOL)arg1 ;
-(PUWorkaroundSettings *)workaroundSettings;
-(void)set_internal_libraryStateBriefDescription:(NSString *)arg1 ;
-(PUTilingViewSettings *)tilingViewSettings;
-(void)set_internal_libraryStateImage:(UIImage *)arg1 ;
-(PUAudioClassificationSettings *)audioClassificationSettings;
-(void)setPerformanceDiagnosticsSettings:(PUPerformanceDiagnosticsSettings *)arg1 ;
-(PXSharingSettings *)sharingSettings;
-(void)setPhotosGridSettings:(PUPhotosGridSettings *)arg1 ;
-(PUPhotoEditProtoSettings *)photoEditingSettings;
-(void)setInterfaceThemeClass:(Class)arg1 ;
-(id)favoritesSettings;
-(void)restoreDefaultValues;
-(void)createChildren;
-(void)setSlideshowSettings:(PUSlideshowSettings *)arg1 ;
-(PUPhotosGridSettings *)photosGridSettings;
-(PUMedusaSettings *)medusaSettings;
-(void)setAudioClassificationSettings:(PUAudioClassificationSettings *)arg1 ;
-(void)setMedusaSettings:(PUMedusaSettings *)arg1 ;
-(NSString *)_internal_libraryStateBriefDescription;
-(void)_setObservationEnabled:(BOOL)arg1 ;
-(PUPerformanceDiagnosticsSettings *)performanceDiagnosticsSettings;
-(PUIrisSettings *)irisSettings;
-(Class)interfaceThemeClass;
-(id)reparentedRootSettings;
-(void)setEnforceDisableIrisUI:(BOOL)arg1 ;
-(void)setCompositeVideoSettings:(PUCompositeVideoSettings *)arg1 ;
@end

