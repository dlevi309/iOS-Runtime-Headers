/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXImportSettings : PXSettings {

	BOOL _importSourceSimulationViaDiagnosticsEnabled;
	BOOL _simulateEmptyImportSource;
	BOOL _showImportItemFilenames;
	BOOL _disableAssetDeletion;
	BOOL _loadActualThumbnails;
	BOOL _lazyLoadAllAssets;
	BOOL _groupItemsByEXIFDate;
	BOOL _showNewestItemsInGridUntilScrolled;
	BOOL _hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
	BOOL _longPressForOneUpInCompactMode;
	BOOL _longPressForOneUpInPadSpec;
	BOOL _useThumbnailSizesAsImageSizeHints;
	BOOL _loadRetinaThumbnails;
	BOOL _showProgressTitles;
	long long _simulatedBatteryLevel;
	long long _alreadyImportedTruncationMode;
	long long _assetEnumerationBehavior;
	double _assetEnumerationBatchInterval;
	unsigned long long _assetEnumerationBatchSize;

}

@property (assign,nonatomic) BOOL importSourceSimulationViaDiagnosticsEnabled;                          //@synthesize importSourceSimulationViaDiagnosticsEnabled=_importSourceSimulationViaDiagnosticsEnabled - In the implementation block
@property (assign,nonatomic) long long simulatedBatteryLevel;                                           //@synthesize simulatedBatteryLevel=_simulatedBatteryLevel - In the implementation block
@property (assign,nonatomic) BOOL simulateEmptyImportSource;                                            //@synthesize simulateEmptyImportSource=_simulateEmptyImportSource - In the implementation block
@property (assign,nonatomic) BOOL showImportItemFilenames;                                              //@synthesize showImportItemFilenames=_showImportItemFilenames - In the implementation block
@property (assign,nonatomic) BOOL disableAssetDeletion;                                                 //@synthesize disableAssetDeletion=_disableAssetDeletion - In the implementation block
@property (assign,nonatomic) BOOL loadActualThumbnails;                                                 //@synthesize loadActualThumbnails=_loadActualThumbnails - In the implementation block
@property (assign,nonatomic) BOOL lazyLoadAllAssets;                                                    //@synthesize lazyLoadAllAssets=_lazyLoadAllAssets - In the implementation block
@property (assign,nonatomic) BOOL groupItemsByEXIFDate;                                                 //@synthesize groupItemsByEXIFDate=_groupItemsByEXIFDate - In the implementation block
@property (assign,nonatomic) BOOL showNewestItemsInGridUntilScrolled;                                   //@synthesize showNewestItemsInGridUntilScrolled=_showNewestItemsInGridUntilScrolled - In the implementation block
@property (assign,nonatomic) long long alreadyImportedTruncationMode;                                   //@synthesize alreadyImportedTruncationMode=_alreadyImportedTruncationMode - In the implementation block
@property (assign,nonatomic) BOOL hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;              //@synthesize hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem=_hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem - In the implementation block
@property (assign,nonatomic) BOOL longPressForOneUpInCompactMode;                                       //@synthesize longPressForOneUpInCompactMode=_longPressForOneUpInCompactMode - In the implementation block
@property (assign,nonatomic) BOOL longPressForOneUpInPadSpec;                                           //@synthesize longPressForOneUpInPadSpec=_longPressForOneUpInPadSpec - In the implementation block
@property (assign,nonatomic) BOOL useThumbnailSizesAsImageSizeHints;                                    //@synthesize useThumbnailSizesAsImageSizeHints=_useThumbnailSizesAsImageSizeHints - In the implementation block
@property (assign,nonatomic) BOOL loadRetinaThumbnails;                                                 //@synthesize loadRetinaThumbnails=_loadRetinaThumbnails - In the implementation block
@property (assign,nonatomic) long long assetEnumerationBehavior;                                        //@synthesize assetEnumerationBehavior=_assetEnumerationBehavior - In the implementation block
@property (assign,nonatomic) double assetEnumerationBatchInterval;                                      //@synthesize assetEnumerationBatchInterval=_assetEnumerationBatchInterval - In the implementation block
@property (assign,nonatomic) unsigned long long assetEnumerationBatchSize;                              //@synthesize assetEnumerationBatchSize=_assetEnumerationBatchSize - In the implementation block
@property (assign,nonatomic) BOOL showProgressTitles;                                                   //@synthesize showProgressTitles=_showProgressTitles - In the implementation block
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;
-(unsigned long long)assetEnumerationBatchSize;
-(BOOL)simulateEmptyImportSource;
-(BOOL)lazyLoadAllAssets;
-(BOOL)longPressForOneUpInPadSpec;
-(void)setLoadRetinaThumbnails:(BOOL)arg1 ;
-(void)setGroupItemsByEXIFDate:(BOOL)arg1 ;
-(void)setShowImportItemFilenames:(BOOL)arg1 ;
-(BOOL)disableAssetDeletion;
-(BOOL)groupItemsByEXIFDate;
-(BOOL)longPressForOneUpInCompactMode;
-(void)setAssetEnumerationBatchInterval:(double)arg1 ;
-(void)setLongPressForOneUpInPadSpec:(BOOL)arg1 ;
-(long long)simulatedBatteryLevel;
-(BOOL)useThumbnailSizesAsImageSizeHints;
-(BOOL)showNewestItemsInGridUntilScrolled;
-(void)setShowNewestItemsInGridUntilScrolled:(BOOL)arg1 ;
-(long long)alreadyImportedTruncationMode;
-(void)setSimulatedBatteryLevel:(long long)arg1 ;
-(void)setShowProgressTitles:(BOOL)arg1 ;
-(void)setUseThumbnailSizesAsImageSizeHints:(BOOL)arg1 ;
-(BOOL)showProgressTitles;
-(void)setAssetEnumerationBatchSize:(unsigned long long)arg1 ;
-(void)setAlreadyImportedTruncationMode:(long long)arg1 ;
-(void)setLongPressForOneUpInCompactMode:(BOOL)arg1 ;
-(void)setLazyLoadAllAssets:(BOOL)arg1 ;
-(BOOL)loadActualThumbnails;
-(void)setDisableAssetDeletion:(BOOL)arg1 ;
-(double)assetEnumerationBatchInterval;
-(BOOL)loadRetinaThumbnails;
-(void)setHide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem:(BOOL)arg1 ;
-(void)setSimulateEmptyImportSource:(BOOL)arg1 ;
-(BOOL)importSourceSimulationViaDiagnosticsEnabled;
-(void)setImportSourceSimulationViaDiagnosticsEnabled:(BOOL)arg1 ;
-(void)setAssetEnumerationBehavior:(long long)arg1 ;
-(void)setLoadActualThumbnails:(BOOL)arg1 ;
-(BOOL)showImportItemFilenames;
-(BOOL)hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
-(long long)assetEnumerationBehavior;
@end

