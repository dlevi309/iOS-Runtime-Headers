/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUPhotosGridSettings : PXSettings {

	BOOL _badgeAllItemsAsFavorites;
	BOOL _displayAllItemsAsBursts;
	BOOL _allowDynamicDetailsTitles;
	BOOL _forceJPEGThumbnailsInDefaultGrid;
	BOOL _flashDegradedImages;
	BOOL _useFloatingHeaders;
	BOOL _swipeSelectionEnabled;
	BOOL _shouldExitEditingModeAfterDuplication;
	BOOL _showTimelineScrubbers;
	BOOL _simulateGlobalFooterImportantInformationUpdates;
	double _defaultItemSideSize;
	double _maximumSpacing;
	double _simulatedDetailsAttributesLoadingDelay;
	long long _numberColumnsInDefaultGrid;
	long long _numberOfColumnsInWideGrid;
	double _magnifierRevealPreviewScale;
	double _previewRevealProgressToFreezeMagnifier;
	double _minimumDistanceToUnfreeze;
	double _leftScrubberRate;
	double _rightScrubberRate;
	long long _globalFooterVisibility;

}

@property (assign,nonatomic) double defaultItemSideSize;                                             //@synthesize defaultItemSideSize=_defaultItemSideSize - In the implementation block
@property (assign,nonatomic) double maximumSpacing;                                                  //@synthesize maximumSpacing=_maximumSpacing - In the implementation block
@property (assign,nonatomic) BOOL badgeAllItemsAsFavorites;                                          //@synthesize badgeAllItemsAsFavorites=_badgeAllItemsAsFavorites - In the implementation block
@property (assign,nonatomic) BOOL displayAllItemsAsBursts;                                           //@synthesize displayAllItemsAsBursts=_displayAllItemsAsBursts - In the implementation block
@property (assign,nonatomic) BOOL allowDynamicDetailsTitles;                                         //@synthesize allowDynamicDetailsTitles=_allowDynamicDetailsTitles - In the implementation block
@property (assign,nonatomic) double simulatedDetailsAttributesLoadingDelay;                          //@synthesize simulatedDetailsAttributesLoadingDelay=_simulatedDetailsAttributesLoadingDelay - In the implementation block
@property (assign,nonatomic) BOOL forceJPEGThumbnailsInDefaultGrid;                                  //@synthesize forceJPEGThumbnailsInDefaultGrid=_forceJPEGThumbnailsInDefaultGrid - In the implementation block
@property (assign,nonatomic) long long numberColumnsInDefaultGrid;                                   //@synthesize numberColumnsInDefaultGrid=_numberColumnsInDefaultGrid - In the implementation block
@property (assign,nonatomic) long long numberOfColumnsInWideGrid;                                    //@synthesize numberOfColumnsInWideGrid=_numberOfColumnsInWideGrid - In the implementation block
@property (assign,nonatomic) BOOL flashDegradedImages;                                               //@synthesize flashDegradedImages=_flashDegradedImages - In the implementation block
@property (assign,nonatomic) BOOL useFloatingHeaders;                                                //@synthesize useFloatingHeaders=_useFloatingHeaders - In the implementation block
@property (assign,getter=isSwipeSelectionEnabled,nonatomic) BOOL swipeSelectionEnabled;              //@synthesize swipeSelectionEnabled=_swipeSelectionEnabled - In the implementation block
@property (assign,nonatomic) double magnifierRevealPreviewScale;                                     //@synthesize magnifierRevealPreviewScale=_magnifierRevealPreviewScale - In the implementation block
@property (assign,nonatomic) double previewRevealProgressToFreezeMagnifier;                          //@synthesize previewRevealProgressToFreezeMagnifier=_previewRevealProgressToFreezeMagnifier - In the implementation block
@property (assign,nonatomic) double minimumDistanceToUnfreeze;                                       //@synthesize minimumDistanceToUnfreeze=_minimumDistanceToUnfreeze - In the implementation block
@property (assign,nonatomic) BOOL shouldExitEditingModeAfterDuplication;                             //@synthesize shouldExitEditingModeAfterDuplication=_shouldExitEditingModeAfterDuplication - In the implementation block
@property (assign,nonatomic) BOOL showTimelineScrubbers;                                             //@synthesize showTimelineScrubbers=_showTimelineScrubbers - In the implementation block
@property (assign,nonatomic) double leftScrubberRate;                                                //@synthesize leftScrubberRate=_leftScrubberRate - In the implementation block
@property (assign,nonatomic) double rightScrubberRate;                                               //@synthesize rightScrubberRate=_rightScrubberRate - In the implementation block
@property (assign,nonatomic) long long globalFooterVisibility;                                       //@synthesize globalFooterVisibility=_globalFooterVisibility - In the implementation block
@property (assign,nonatomic) BOOL simulateGlobalFooterImportantInformationUpdates;                   //@synthesize simulateGlobalFooterImportantInformationUpdates=_simulateGlobalFooterImportantInformationUpdates - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setNumberOfColumnsInWideGrid:(long long)arg1 ;
-(void)setRightScrubberRate:(double)arg1 ;
-(void)setForceJPEGThumbnailsInDefaultGrid:(BOOL)arg1 ;
-(BOOL)isSwipeSelectionEnabled;
-(BOOL)useFloatingHeaders;
-(BOOL)flashDegradedImages;
-(BOOL)forceJPEGThumbnailsInDefaultGrid;
-(void)setPreviewRevealProgressToFreezeMagnifier:(double)arg1 ;
-(double)rightScrubberRate;
-(long long)globalFooterVisibility;
-(BOOL)badgeAllItemsAsFavorites;
-(void)setMaximumSpacing:(double)arg1 ;
-(void)setDisplayAllItemsAsBursts:(BOOL)arg1 ;
-(void)setMagnifierRevealPreviewScale:(double)arg1 ;
-(double)leftScrubberRate;
-(void)setDefaultItemSideSize:(double)arg1 ;
-(double)defaultItemSideSize;
-(void)setNumberColumnsInDefaultGrid:(long long)arg1 ;
-(long long)numberColumnsInDefaultGrid;
-(BOOL)displayAllItemsAsBursts;
-(double)maximumSpacing;
-(void)setBadgeAllItemsAsFavorites:(BOOL)arg1 ;
-(void)setLeftScrubberRate:(double)arg1 ;
-(BOOL)simulateGlobalFooterImportantInformationUpdates;
-(void)setAllowDynamicDetailsTitles:(BOOL)arg1 ;
-(double)previewRevealProgressToFreezeMagnifier;
-(double)magnifierRevealPreviewScale;
-(long long)numberOfColumnsInWideGrid;
-(BOOL)showTimelineScrubbers;
-(void)setUseFloatingHeaders:(BOOL)arg1 ;
-(void)setShowTimelineScrubbers:(BOOL)arg1 ;
-(double)simulatedDetailsAttributesLoadingDelay;
-(void)setMinimumDistanceToUnfreeze:(double)arg1 ;
-(void)setSimulateGlobalFooterImportantInformationUpdates:(BOOL)arg1 ;
-(void)setShouldExitEditingModeAfterDuplication:(BOOL)arg1 ;
-(void)setSwipeSelectionEnabled:(BOOL)arg1 ;
-(void)setGlobalFooterVisibility:(long long)arg1 ;
-(double)minimumDistanceToUnfreeze;
-(void)setFlashDegradedImages:(BOOL)arg1 ;
-(BOOL)allowDynamicDetailsTitles;
-(void)setSimulatedDetailsAttributesLoadingDelay:(double)arg1 ;
-(BOOL)shouldExitEditingModeAfterDuplication;
@end

