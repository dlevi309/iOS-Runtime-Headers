/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGTitleSubtitleSource.h>
#import <libobjc.A.dylib/PXGViewSource.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXLibrarySummaryOutputPresenter.h>

@protocol OS_dispatch_queue;
@class NSAttributedString, NSString, NSDictionary, NSArray, NSMutableIndexSet, NSObject, PXAssetCollectionReference, PXCuratedLibrarySectionHeaderLayoutSpec, PXCuratedLibraryEllipsisButtonActionPerformer, PXCuratedLibraryFilterActionPerformer, PXCuratedLibraryActionPerformer, NSSet, PXGLayoutGuide, PXTitleSubtitleLabelSpec, PXNumberAnimator;

@interface PXCuratedLibrarySectionHeaderLayout : PXGLayout <PXGTitleSubtitleSource, PXGViewSource, PXGNamedImageSource, PXChangeObserver, PXLibrarySummaryOutputPresenter> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned short _textVersion;
	unsigned short _ellipsisButtonVersion;
	unsigned short _filterButtonVersion;
	unsigned short _filterIndicatorButtonVersion;
	unsigned short _selectionTitleVersion;
	unsigned short _selectButtonVersion;
	unsigned short _cancelButtonVersion;
	unsigned short _toggleAspectFitButtonVersion;
	unsigned short _zoomInButtonVersion;
	unsigned short _zoomOutButtonVersion;
	unsigned short _controlStackButtonVersion;
	unsigned short _showSidebarButtonVersion;
	NSArray* _itemIdentifierBySpriteIndex;
	BOOL _presentedVisibility;
	BOOL _presentedTitleVisibility;
	NSMutableIndexSet* _axSpriteIndexes;
	unsigned short _gradientResizableCapInsetsIndex;
	CGSize _cachedSizeByButtonIdentifier[11];
	CGSize _cachedExternalTrailingButtonsSize;
	CGSize _cachedExternalLeadingButtonsSize;
	CGSize _cachedExternalTopButtonsSize;
	CGSize _cachedLongestPossibleSelectionTitleSize;
	long long _asyncDateGeneration;
	NSObject*<OS_dispatch_queue> _asyncDateQueue;
	BOOL _wantsOverBackgroundAppearance;
	BOOL _showsBackgroundGradient;
	BOOL _showsDebugDescription;
	BOOL _filterButtonHighlighted;
	BOOL _filterIndicatorButtonHighlighted;
	BOOL _controlStackButtonSelected;
	BOOL _usesCompactToggleAspectFitButton;
	float _buttonsZIndex;
	NSString* _title;
	NSString* _subtitle;
	PXAssetCollectionReference* _assetCollectionReference;
	PXCuratedLibrarySectionHeaderLayoutSpec* _spec;
	double _lateralMargin;
	double _maxPossibleHeight;
	double _titleAlpha;
	double _buttonsAlpha;
	PXCuratedLibraryEllipsisButtonActionPerformer* _ellipsisButtonActionPerformer;
	PXCuratedLibraryFilterActionPerformer* _filterActionPerformer;
	PXCuratedLibraryActionPerformer* _selectButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _cancelButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _zoomInButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _zoomOutButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _toggleAspectFitButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _showSidebarButtonActionPerformer;
	NSString* _selectButtonTitle;
	NSString* _filterButtonCaption;
	NSString* _filterButtonTitle;
	NSString* _selectionTitle;
	NSString* _longestPossibleSelectionTitle;
	NSString* _toggleAspectFitButtonTitle;
	NSSet* _toggleAspectFitButtonPossibleTitles;
	long long _toggleAspectFitCompactButtonSymbol;
	long long _safeAreaBehavior;
	NSArray* _externalTrailingButtonConfigurations;
	NSArray* _externalLeadingButtonConfigurations;
	NSArray* _externalTopButtonConfigurations;
	PXGLayoutGuide* _leadingButtonsLayoutGuide;
	PXCuratedLibrarySectionHeaderLayoutSpec* _effectiveSpec;
	PXTitleSubtitleLabelSpec* _effectiveTitleSubtitleLabelSpec;
	PXTitleSubtitleLabelSpec* _effectiveOverBackgroundTitleSubtitleLabelSpec;
	double _buttonsMaxY;
	double _titleSubtitleTopSpacing;
	double _titleSubtitleLastBaseline;
	double _gradientAlpha;
	PXNumberAnimator* _alternateAppearanceMixAnimator;
	CGRect _titleSubtitleFrame;

}

@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * effectiveSpec;                                    //@synthesize effectiveSpec=_effectiveSpec - In the implementation block
@property (nonatomic,readonly) PXTitleSubtitleLabelSpec * effectiveTitleSubtitleLabelSpec;                               //@synthesize effectiveTitleSubtitleLabelSpec=_effectiveTitleSubtitleLabelSpec - In the implementation block
@property (nonatomic,readonly) PXTitleSubtitleLabelSpec * effectiveOverBackgroundTitleSubtitleLabelSpec;                 //@synthesize effectiveOverBackgroundTitleSubtitleLabelSpec=_effectiveOverBackgroundTitleSubtitleLabelSpec - In the implementation block
@property (assign,nonatomic) BOOL controlStackButtonSelected;                                                            //@synthesize controlStackButtonSelected=_controlStackButtonSelected - In the implementation block
@property (assign,nonatomic) BOOL usesCompactToggleAspectFitButton;                                                      //@synthesize usesCompactToggleAspectFitButton=_usesCompactToggleAspectFitButton - In the implementation block
@property (nonatomic,readonly) unsigned long long toggleAspectFitButton; 
@property (assign,nonatomic) double buttonsMaxY;                                                                         //@synthesize buttonsMaxY=_buttonsMaxY - In the implementation block
@property (assign,nonatomic) double titleSubtitleTopSpacing;                                                             //@synthesize titleSubtitleTopSpacing=_titleSubtitleTopSpacing - In the implementation block
@property (assign,nonatomic) double titleSubtitleLastBaseline;                                                           //@synthesize titleSubtitleLastBaseline=_titleSubtitleLastBaseline - In the implementation block
@property (assign,nonatomic) double gradientAlpha;                                                                       //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
@property (nonatomic,readonly) PXNumberAnimator * alternateAppearanceMixAnimator;                                        //@synthesize alternateAppearanceMixAnimator=_alternateAppearanceMixAnimator - In the implementation block
@property (nonatomic,retain) PXGLayoutGuide * leadingButtonsLayoutGuide;                                                 //@synthesize leadingButtonsLayoutGuide=_leadingButtonsLayoutGuide - In the implementation block
@property (nonatomic,retain) PXAssetCollectionReference * assetCollectionReference;                                      //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * spec;                                             //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) double lateralMargin;                                                                       //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (assign,nonatomic) double maxPossibleHeight;                                                                   //@synthesize maxPossibleHeight=_maxPossibleHeight - In the implementation block
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) double titleAlpha;                                                                          //@synthesize titleAlpha=_titleAlpha - In the implementation block
@property (assign,nonatomic) double buttonsAlpha;                                                                        //@synthesize buttonsAlpha=_buttonsAlpha - In the implementation block
@property (assign,nonatomic) BOOL wantsOverBackgroundAppearance;                                                         //@synthesize wantsOverBackgroundAppearance=_wantsOverBackgroundAppearance - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundGradient;                                                               //@synthesize showsBackgroundGradient=_showsBackgroundGradient - In the implementation block
@property (assign,nonatomic) BOOL showsDebugDescription;                                                                 //@synthesize showsDebugDescription=_showsDebugDescription - In the implementation block
@property (assign,nonatomic) float buttonsZIndex;                                                                        //@synthesize buttonsZIndex=_buttonsZIndex - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryEllipsisButtonActionPerformer * ellipsisButtonActionPerformer;              //@synthesize ellipsisButtonActionPerformer=_ellipsisButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryFilterActionPerformer * filterActionPerformer;                              //@synthesize filterActionPerformer=_filterActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * selectButtonActionPerformer;                              //@synthesize selectButtonActionPerformer=_selectButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * cancelButtonActionPerformer;                              //@synthesize cancelButtonActionPerformer=_cancelButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * zoomInButtonActionPerformer;                              //@synthesize zoomInButtonActionPerformer=_zoomInButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * zoomOutButtonActionPerformer;                             //@synthesize zoomOutButtonActionPerformer=_zoomOutButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * toggleAspectFitButtonActionPerformer;                     //@synthesize toggleAspectFitButtonActionPerformer=_toggleAspectFitButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * showSidebarButtonActionPerformer;                         //@synthesize showSidebarButtonActionPerformer=_showSidebarButtonActionPerformer - In the implementation block
@property (nonatomic,copy) NSString * selectButtonTitle;                                                                 //@synthesize selectButtonTitle=_selectButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * filterButtonCaption;                                                               //@synthesize filterButtonCaption=_filterButtonCaption - In the implementation block
@property (nonatomic,copy) NSString * filterButtonTitle;                                                                 //@synthesize filterButtonTitle=_filterButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL filterButtonHighlighted;                                                               //@synthesize filterButtonHighlighted=_filterButtonHighlighted - In the implementation block
@property (assign,nonatomic) BOOL filterIndicatorButtonHighlighted;                                                      //@synthesize filterIndicatorButtonHighlighted=_filterIndicatorButtonHighlighted - In the implementation block
@property (nonatomic,copy) NSString * selectionTitle;                                                                    //@synthesize selectionTitle=_selectionTitle - In the implementation block
@property (nonatomic,copy) NSString * longestPossibleSelectionTitle;                                                     //@synthesize longestPossibleSelectionTitle=_longestPossibleSelectionTitle - In the implementation block
@property (nonatomic,copy) NSString * toggleAspectFitButtonTitle;                                                        //@synthesize toggleAspectFitButtonTitle=_toggleAspectFitButtonTitle - In the implementation block
@property (nonatomic,copy) NSSet * toggleAspectFitButtonPossibleTitles;                                                  //@synthesize toggleAspectFitButtonPossibleTitles=_toggleAspectFitButtonPossibleTitles - In the implementation block
@property (assign,nonatomic) long long toggleAspectFitCompactButtonSymbol;                                               //@synthesize toggleAspectFitCompactButtonSymbol=_toggleAspectFitCompactButtonSymbol - In the implementation block
@property (nonatomic,readonly) CGRect titleSubtitleFrame;                                                                //@synthesize titleSubtitleFrame=_titleSubtitleFrame - In the implementation block
@property (assign,nonatomic) long long safeAreaBehavior;                                                                 //@synthesize safeAreaBehavior=_safeAreaBehavior - In the implementation block
@property (nonatomic,copy) NSArray * externalTrailingButtonConfigurations;                                               //@synthesize externalTrailingButtonConfigurations=_externalTrailingButtonConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * externalLeadingButtonConfigurations;                                                //@synthesize externalLeadingButtonConfigurations=_externalLeadingButtonConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * externalTopButtonConfigurations;                                                    //@synthesize externalTopButtonConfigurations=_externalTopButtonConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSString * title;                                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL wantsDisclosureIndicator; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@property (nonatomic,readonly) NSDictionary * emphasizedAttributes; 
-(id)imageConfigurationAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(NSString *)selectButtonTitle;
-(double)buttonsMaxY;
-(void)setZoomInButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(double)lateralMargin;
-(void)setLateralMargin:(double)arg1 ;
-(void)setSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(void)_updateSpriteTags;
-(NSArray *)externalTopButtonConfigurations;
-(void)setVisibleRect:(CGRect)arg1 ;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)alphaDidChange;
-(PXCuratedLibraryActionPerformer *)showSidebarButtonActionPerformer;
-(PXCuratedLibraryActionPerformer *)cancelButtonActionPerformer;
-(void)referenceOptionsDidChange;
-(void)screenScaleDidChange;
-(id)init;
-(PXNumberAnimator *)alternateAppearanceMixAnimator;
-(PXGLayoutGuide *)leadingButtonsLayoutGuide;
-(void)setFilterButtonTitle:(NSString *)arg1 ;
-(PXCuratedLibraryActionPerformer *)zoomOutButtonActionPerformer;
-(void)visibleRectDidChange;
-(long long)toggleAspectFitCompactButtonSymbol;
-(void)setShowSidebarButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setFilterButtonHighlighted:(BOOL)arg1 ;
-(unsigned long long)toggleAspectFitButton;
-(void)setTitleSubtitleTopSpacing:(double)arg1 ;
-(BOOL)usesCompactToggleAspectFitButton;
-(void)_handleAsyncDateDescription:(id)arg1 placement:(long long)arg2 generation:(long long)arg3 ;
-(BOOL)controlStackButtonSelected;
-(PXCuratedLibraryFilterActionPerformer *)filterActionPerformer;
-(void)setEllipsisButtonActionPerformer:(PXCuratedLibraryEllipsisButtonActionPerformer *)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(NSString *)filterButtonTitle;
-(void)setShowsBackgroundGradient:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(PXTitleSubtitleLabelSpec *)effectiveOverBackgroundTitleSubtitleLabelSpec;
-(NSString *)selectionTitle;
-(BOOL)showsBackgroundGradient;
-(PXTitleSubtitleLabelSpec *)effectiveTitleSubtitleLabelSpec;
-(void)setButtonsMaxY:(double)arg1 ;
-(double)titleSubtitleTopSpacing;
-(void)setToggleAspectFitButtonTitle:(NSString *)arg1 ;
-(void)setShowsDebugDescription:(BOOL)arg1 ;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(double)buttonsAlpha;
-(CGRect)titleSubtitleFrame;
-(void)setExternalTopButtonConfigurations:(NSArray *)arg1 ;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(void)setTitleSubtitleLastBaseline:(double)arg1 ;
-(void)setToggleAspectFitButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(BOOL)filterButtonHighlighted;
-(float)buttonsZIndex;
-(long long)safeAreaBehavior;
-(NSString *)longestPossibleSelectionTitle;
-(void)_updateButtonActionPerformers;
-(double)maxPossibleHeight;
-(NSArray *)externalTrailingButtonConfigurations;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)spec;
-(void)setAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(id)_effectiveTitleSubtitleLabelSpec:(id)arg1 ;
-(void)update;
-(void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)referenceSizeDidChange;
-(void)setLeadingButtonsLayoutGuide:(PXGLayoutGuide *)arg1 ;
-(void)_discardAllCachedButtonSizes;
-(void)_updateSpritesAlpha;
-(void)setSelectButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(id)configurationForButton:(unsigned long long)arg1 spec:(id)arg2 ;
-(void)setGradientAlpha:(double)arg1 ;
-(NSString *)toggleAspectFitButtonTitle;
-(NSArray *)externalLeadingButtonConfigurations;
-(void)setEffectiveSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(void)setFilterActionPerformer:(PXCuratedLibraryFilterActionPerformer *)arg1 ;
-(void)_updateEffectiveSpec;
-(void)setZoomOutButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setExternalTrailingButtonConfigurations:(NSArray *)arg1 ;
-(void)setFilterIndicatorButtonHighlighted:(BOOL)arg1 ;
-(PXCuratedLibraryActionPerformer *)zoomInButtonActionPerformer;
-(BOOL)filterIndicatorButtonHighlighted;
-(void)setSelectButtonTitle:(NSString *)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setMaxPossibleHeight:(double)arg1 ;
-(void)setTitleAlpha:(double)arg1 ;
-(id)_titleSubtitleSpecForItemIdentifier:(id)arg1 ;
-(id)_selectionTitleLabelConfigurationWithTitle:(id)arg1 ;
-(void)setControlStackButtonSelected:(BOOL)arg1 ;
-(id)titleForSpriteAtIndex:(unsigned)arg1 ;
-(id)subtitleForSpriteAtIndex:(unsigned)arg1 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)effectiveSpec;
-(void)setWantsOverBackgroundAppearance:(BOOL)arg1 ;
-(double)titleSubtitleLastBaseline;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setToggleAspectFitButtonPossibleTitles:(NSSet *)arg1 ;
-(CGSize)_sizeOfButton:(unsigned long long)arg1 ;
-(PXCuratedLibraryActionPerformer *)selectButtonActionPerformer;
-(void)setExternalLeadingButtonConfigurations:(NSArray *)arg1 ;
-(void)_updateSprites;
-(void)setUsesCompactToggleAspectFitButton:(BOOL)arg1 ;
-(double)gradientAlpha;
-(UIEdgeInsets)safeAreaInsetsWithCurrentBehavior;
-(id)titleSubtitleSpecForSpriteAtIndex:(unsigned)arg1 ;
-(id)axSpriteIndexes;
-(void)setFilterButtonCaption:(NSString *)arg1 ;
-(void)_invalidateFilterButton;
-(void)setButtonsZIndex:(float)arg1 ;
-(BOOL)wantsOverBackgroundAppearance;
-(void)setLongestPossibleSelectionTitle:(NSString *)arg1 ;
-(id)_configurationForButton:(unsigned long long)arg1 overBackgroundVariant:(BOOL)arg2 ;
-(void)_updateTitleAndSubtitle;
-(void)setCancelButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setSafeAreaBehavior:(long long)arg1 ;
-(id)_configurationForButton:(unsigned long long)arg1 ;
-(void)_invalidateFilterIndicatorButton;
-(PXCuratedLibraryActionPerformer *)toggleAspectFitButtonActionPerformer;
-(BOOL)showsDebugDescription;
-(double)titleAlpha;
-(void)_updateLastBaseline;
-(NSString *)filterButtonCaption;
-(PXCuratedLibraryEllipsisButtonActionPerformer *)ellipsisButtonActionPerformer;
-(NSString *)title;
-(void)setSelectionTitle:(NSString *)arg1 ;
-(void)setToggleAspectFitCompactButtonSymbol:(long long)arg1 ;
-(NSSet *)toggleAspectFitButtonPossibleTitles;
-(void)setButtonsAlpha:(double)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

