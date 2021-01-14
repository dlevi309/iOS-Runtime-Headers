/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableBrowserSummaryController.h>
#import <libobjc.A.dylib/PXInfoUpdaterObserver.h>
#import <libobjc.A.dylib/PXInfoProvider.h>

@protocol PXBrowserSummaryControllerDataSource, OS_dispatch_queue, PXBrowserSelectionSnapshot;
@class NSDictionary, NSAttributedString, NSString, NSArray, PXInfoUpdater, NSObject, NSDateIntervalFormatter, NSDateFormatter, NSDateInterval, PXSelectedItemsStack;

@interface PXBrowserSummaryController : PXObservable <PXMutableBrowserSummaryController, PXInfoUpdaterObserver, PXInfoProvider> {

	struct {
		BOOL containerTitle;
		BOOL localizedContainerItemsCount;
		BOOL containerDateInterval;
		BOOL selectionSnapshot;
		BOOL filteringContainerContent;
		BOOL attributedPrimaryTitle;
		BOOL secondaryTitle;
		BOOL tertiaryTitle;
		BOOL navigationTitle;
		BOOL attributedSelectionTitle;
		BOOL stackedAssets;
	}  _needsUpdateFlags;
	SCD_Struct_PX45 _dataSourceRespondsTo;
	BOOL _shouldUseSubtitles;
	BOOL _shouldUseNavigationTitle;
	BOOL _shouldUseAbbreviatedDates;
	BOOL _shouldShowLocationNames;
	BOOL _ready;
	BOOL _filteringContainerContent;
	NSDictionary* _defaultAttributes;
	NSDictionary* _emphasizedAttributes;
	NSDictionary* _selectionAttributes;
	unsigned long long _containerDateFormatGranularity;
	id<PXBrowserSummaryControllerDataSource> _dataSource;
	NSAttributedString* _attributedPrimaryTitle;
	NSString* _secondaryTitle;
	NSString* _tertiaryTitle;
	NSString* _navigationTitle;
	NSAttributedString* _attributedSelectionTitle;
	NSArray* _stackedAssets;
	PXInfoUpdater* _visibleMetadataInfoUpdater;
	PXInfoUpdater* _selectionInfoUpdater;
	PXInfoUpdater* _titlesInfoUpdater;
	NSObject*<OS_dispatch_queue> _queue;
	NSDateIntervalFormatter* _dateIntervalFormatter;
	NSDateFormatter* _importDateFormatter;
	NSString* _localizedComponentsSeparator;
	NSString* _containerTitle;
	NSString* _localizedContainerItemsCount;
	NSDateInterval* _containerDateInterval;
	id<PXBrowserSelectionSnapshot> _selectionSnapshot;
	PXSelectedItemsStack* _selectedAssetsStack;
	NSString* _noFilteringResultsPlaceholderText;

}

@property (nonatomic,readonly) PXInfoUpdater * visibleMetadataInfoUpdater;                                   //@synthesize visibleMetadataInfoUpdater=_visibleMetadataInfoUpdater - In the implementation block
@property (nonatomic,readonly) PXInfoUpdater * selectionInfoUpdater;                                         //@synthesize selectionInfoUpdater=_selectionInfoUpdater - In the implementation block
@property (nonatomic,readonly) PXInfoUpdater * titlesInfoUpdater;                                            //@synthesize titlesInfoUpdater=_titlesInfoUpdater - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSDateIntervalFormatter * dateIntervalFormatter;                              //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * importDateFormatter;                                        //@synthesize importDateFormatter=_importDateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * localizedComponentsSeparator;                                      //@synthesize localizedComponentsSeparator=_localizedComponentsSeparator - In the implementation block
@property (nonatomic,copy) NSString * containerTitle;                                                        //@synthesize containerTitle=_containerTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedContainerItemsCount;                                          //@synthesize localizedContainerItemsCount=_localizedContainerItemsCount - In the implementation block
@property (nonatomic,copy) NSDateInterval * containerDateInterval;                                           //@synthesize containerDateInterval=_containerDateInterval - In the implementation block
@property (nonatomic,retain) id<PXBrowserSelectionSnapshot> selectionSnapshot;                               //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (assign,getter=isFilteringContainerContent,nonatomic) BOOL filteringContainerContent;              //@synthesize filteringContainerContent=_filteringContainerContent - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedPrimaryTitle;                                      //@synthesize attributedPrimaryTitle=_attributedPrimaryTitle - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                                                        //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,copy) NSString * tertiaryTitle;                                                         //@synthesize tertiaryTitle=_tertiaryTitle - In the implementation block
@property (nonatomic,copy) NSString * navigationTitle;                                                       //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSelectionTitle;                                    //@synthesize attributedSelectionTitle=_attributedSelectionTitle - In the implementation block
@property (nonatomic,retain) PXSelectedItemsStack * selectedAssetsStack;                                     //@synthesize selectedAssetsStack=_selectedAssetsStack - In the implementation block
@property (nonatomic,copy) NSArray * stackedAssets;                                                          //@synthesize stackedAssets=_stackedAssets - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                                                      //@synthesize ready=_ready - In the implementation block
@property (nonatomic,readonly) NSString * noFilteringResultsPlaceholderText;                                 //@synthesize noFilteringResultsPlaceholderText=_noFilteringResultsPlaceholderText - In the implementation block
@property (assign,nonatomic,__weak) id<PXBrowserSummaryControllerDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long containerDateFormatGranularity;                            //@synthesize containerDateFormatGranularity=_containerDateFormatGranularity - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSubtitles;                                                        //@synthesize shouldUseSubtitles=_shouldUseSubtitles - In the implementation block
@property (assign,nonatomic) BOOL shouldUseNavigationTitle;                                                  //@synthesize shouldUseNavigationTitle=_shouldUseNavigationTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates;                                                 //@synthesize shouldUseAbbreviatedDates=_shouldUseAbbreviatedDates - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLocationNames;                                                   //@synthesize shouldShowLocationNames=_shouldShowLocationNames - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultAttributes;                                                 //@synthesize defaultAttributes=_defaultAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * emphasizedAttributes;                                              //@synthesize emphasizedAttributes=_emphasizedAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * selectionAttributes;                                               //@synthesize selectionAttributes=_selectionAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)infoUpdaterDidUpdate:(id)arg1 ;
-(id<PXBrowserSelectionSnapshot>)selectionSnapshot;
-(void)_invalidateContainerDateInterval;
-(void)invalidateVisibleContent;
-(void)setStackedAssets:(NSArray *)arg1 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(id)init;
-(void)setShouldShowLocationNames:(BOOL)arg1 ;
-(void)_updateFilteringContainerContentIfNeeded;
-(void)setAttributedPrimaryTitle:(NSAttributedString *)arg1 ;
-(BOOL)shouldUseNavigationTitle;
-(void)_updateStackedAssetsIfNeeded;
-(void)_updateLocalizedContainerItemsCountIfNeeded;
-(NSString *)tertiaryTitle;
-(void)_invalidateTitles;
-(NSString *)localizedComponentsSeparator;
-(void)didPerformChanges;
-(NSString *)noFilteringResultsPlaceholderText;
-(void)_invalidateSelectionSnapshot;
-(void)_updateContainerDateIntervalIfNeeded;
-(NSArray *)stackedAssets;
-(void)_updateAttributedSelectionTitleIfNeeded;
-(id<PXBrowserSummaryControllerDataSource>)dataSource;
-(void)_updateIfNeeded;
-(void)_updateContainerTitleIfNeeded;
-(void)invalidateContainerTitle;
-(void)_invalidateAttributedSelectionTitle;
-(void)setSelectionAttributes:(NSDictionary *)arg1 ;
-(NSDateInterval *)containerDateInterval;
-(unsigned long long)containerDateFormatGranularity;
-(void)setAttributedSelectionTitle:(NSAttributedString *)arg1 ;
-(void)setFilteringContainerContent:(BOOL)arg1 ;
-(void)invalidateContainerDateInterval;
-(void)_invalidateFilteringContainerContent;
-(void)invalidateLocalizedContainerItemsCount;
-(PXInfoUpdater *)titlesInfoUpdater;
-(NSString *)localizedContainerItemsCount;
-(void)setLocalizedContainerItemsCount:(NSString *)arg1 ;
-(void)setReady:(BOOL)arg1 ;
-(void)setDataSource:(id<PXBrowserSummaryControllerDataSource>)arg1 ;
-(id)requestInfoOfKind:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(PXInfoUpdater *)visibleMetadataInfoUpdater;
-(BOOL)isReady;
-(void)setNavigationTitle:(NSString *)arg1 ;
-(NSAttributedString *)attributedPrimaryTitle;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(NSAttributedString *)attributedSelectionTitle;
-(NSDictionary *)selectionAttributes;
-(NSDictionary *)defaultAttributes;
-(BOOL)_needsUpdate;
-(id)_performRequestBlock:(/*^block*/id)arg1 ;
-(PXInfoUpdater *)selectionInfoUpdater;
-(NSDateFormatter *)importDateFormatter;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1 ;
-(void)setContainerDateFormatGranularity:(unsigned long long)arg1 ;
-(id)mutableChangeObject;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setShouldUseNavigationTitle:(BOOL)arg1 ;
-(void)_invalidateContainerTitle;
-(void)invalidateSelection;
-(NSString *)secondaryTitle;
-(NSDictionary *)emphasizedAttributes;
-(void)setSelectedAssetsStack:(PXSelectedItemsStack *)arg1 ;
-(void)setShouldUseSubtitles:(BOOL)arg1 ;
-(BOOL)shouldUseAbbreviatedDates;
-(void)setEmphasizedAttributes:(NSDictionary *)arg1 ;
-(void)setContainerDateInterval:(NSDateInterval *)arg1 ;
-(void)_invalidateLocalizedContainerItemsCount;
-(long long)priorityForInfoRequestOfKind:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_updateSelectionSnapshotIfNeeded;
-(id)_requestTitlesInfoWithResultHandler:(/*^block*/id)arg1 ;
-(void)performBlockWhenDoneUpdating:(/*^block*/id)arg1 ;
-(PXSelectedItemsStack *)selectedAssetsStack;
-(BOOL)shouldShowLocationNames;
-(void)_invalidateStackedAssets;
-(NSString *)containerTitle;
-(void)setSelectionSnapshot:(id<PXBrowserSelectionSnapshot>)arg1 ;
-(void)setTertiaryTitle:(NSString *)arg1 ;
-(void)setContainerTitle:(NSString *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)invalidateFilteringContainerContent;
-(NSString *)navigationTitle;
-(BOOL)shouldUseSubtitles;
-(BOOL)isFilteringContainerContent;
-(BOOL)shouldUpdateImmediately;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
@end

