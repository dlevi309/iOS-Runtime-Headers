/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGStackLayout.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGStringSource.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>

@protocol PXPhotosLayoutDelegate, PXPhotosSectionHeaderLayoutProvider, PXPhotosSectionBodyLayoutProvider;
@class PXNumberAnimator, PXPhotosSectionedLayout, PXGSingleViewLayout, PXPhotosViewModel, PXPhotosLayoutSpecManager, UIView, NSString, NSDictionary;

@interface PXPhotosLayout : PXGStackLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	unsigned short _headerTitleVersion;
	unsigned short _backgroundGradientResizableCapInsetsIndex;
	PXNumberAnimator* _alternateAppearanceMixAnimator;
	BOOL _wantsCustomNavBarStyle;
	BOOL _presentedVisibility;
	PXPhotosSectionedLayout* _sectionedLayout;
	BOOL _footerHasAppearedInitially;
	PXNumberAnimator* _headerFooterAlphaAnimator;
	PXGSingleViewLayout* _headerLayout;
	PXGSingleViewLayout* _footerLayout;
	BOOL _wantsHeaderInSafeArea;
	BOOL _alignsHeaderTitleWithLayoutMargins;
	PXPhotosViewModel* _viewModel;
	PXPhotosLayoutSpecManager* _specManager;
	id<PXPhotosLayoutDelegate> _delegate;
	UIView* _headerView;
	UIView* _footerView;
	id<PXPhotosSectionHeaderLayoutProvider> _sectionHeaderProvider;
	id<PXPhotosSectionBodyLayoutProvider> _sectionBodyProvider;
	double _statusBarHeight;
	NSString* _headerTitle;
	NSDictionary* _headerTitleOverContentAttributes;
	NSDictionary* _headerTitleOverBackgroundAttributes;
	long long _headerTitleDrawingOptions;
	double _headerTitleBaselineToBottom;
	double _backgroundSpriteHeight;
	double _backgroundGradientAdditionalCoverage;
	CGPoint _headerTitleOrigin;
	CGSize _headerTitleSize;

}

@property (nonatomic,copy) NSString * headerTitle;                                                       //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSDictionary * headerTitleOverContentAttributes;                              //@synthesize headerTitleOverContentAttributes=_headerTitleOverContentAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * headerTitleOverBackgroundAttributes;                           //@synthesize headerTitleOverBackgroundAttributes=_headerTitleOverBackgroundAttributes - In the implementation block
@property (nonatomic,readonly) long long headerTitleDrawingOptions;                                      //@synthesize headerTitleDrawingOptions=_headerTitleDrawingOptions - In the implementation block
@property (assign,nonatomic) CGPoint headerTitleOrigin;                                                  //@synthesize headerTitleOrigin=_headerTitleOrigin - In the implementation block
@property (assign,nonatomic) CGSize headerTitleSize;                                                     //@synthesize headerTitleSize=_headerTitleSize - In the implementation block
@property (assign,nonatomic) double headerTitleBaselineToBottom;                                         //@synthesize headerTitleBaselineToBottom=_headerTitleBaselineToBottom - In the implementation block
@property (assign,nonatomic) double backgroundSpriteHeight;                                              //@synthesize backgroundSpriteHeight=_backgroundSpriteHeight - In the implementation block
@property (assign,nonatomic) double backgroundGradientAdditionalCoverage;                                //@synthesize backgroundGradientAdditionalCoverage=_backgroundGradientAdditionalCoverage - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXPhotosLayoutSpecManager * specManager;                                  //@synthesize specManager=_specManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosLayoutDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                        //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) id<PXPhotosSectionHeaderLayoutProvider> sectionHeaderProvider;              //@synthesize sectionHeaderProvider=_sectionHeaderProvider - In the implementation block
@property (nonatomic,retain) id<PXPhotosSectionBodyLayoutProvider> sectionBodyProvider;                  //@synthesize sectionBodyProvider=_sectionBodyProvider - In the implementation block
@property (nonatomic,readonly) PXFloatRange topCollapsibleArea; 
@property (nonatomic,readonly) PXFloatRange bottomCollapsibleArea; 
@property (assign,nonatomic) double statusBarHeight;                                                     //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (assign,nonatomic) BOOL wantsHeaderInSafeArea;                                                 //@synthesize wantsHeaderInSafeArea=_wantsHeaderInSafeArea - In the implementation block
@property (assign,nonatomic) BOOL alignsHeaderTitleWithLayoutMargins;                                    //@synthesize alignsHeaderTitleWithLayoutMargins=_alignsHeaderTitleWithLayoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageConfigurationAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_updateHeaderFooterAlphaAnimator;
-(void)_invalidateHeaderTitle;
-(double)statusBarHeight;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 type:(unsigned long long)arg2 ;
-(UIView *)footerView;
-(PXPhotosLayoutSpecManager *)specManager;
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)createDefaultAnimationForCurrentContext;
-(void)_updateLocalSprites;
-(/*^block*/id)locationNamesFutureForContentInRect:(CGRect)arg1 ;
-(id)presentedDataSource;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_invalidateFooter;
-(id)attributedStringForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(NSString *)headerTitle;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setAlignsHeaderTitleWithLayoutMargins:(BOOL)arg1 ;
-(void)setSectionBodyProvider:(id<PXPhotosSectionBodyLayoutProvider>)arg1 ;
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(double)backgroundSpriteHeight;
-(UIEdgeInsets)additionalSafeAreaInsetsForSublayout:(id)arg1 ;
-(void)setBackgroundGradientAdditionalCoverage:(double)arg1 ;
-(void)screenScaleDidChange;
-(unsigned long long)fullyVisibleEdgesWithDefaultTolerance;
-(void)visibleRectDidChange;
-(long long)headerTitleDrawingOptions;
-(PXFloatRange)topCollapsibleArea;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(id<PXPhotosLayoutDelegate>)delegate;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)_updateLocalSpritesAlpha;
-(PXFloatRange)bottomCollapsibleArea;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_updateHeaderMeasurements;
-(BOOL)alignsHeaderTitleWithLayoutMargins;
-(NSDictionary *)headerTitleOverContentAttributes;
-(PXPhotosViewModel *)viewModel;
-(id)initWithViewModel:(id)arg1 specManager:(id)arg2 ;
-(void)_updateHeaderAttributes;
-(id)presentedItemsGeometryForSection:(unsigned long long)arg1 inDataSource:(id)arg2 ;
-(void)setHeaderTitleOrigin:(CGPoint)arg1 ;
-(void)_invalidateHeaderMeasurements;
-(void)setDelegate:(id<PXPhotosLayoutDelegate>)arg1 ;
-(void)setHeaderTitleOverBackgroundAttributes:(NSDictionary *)arg1 ;
-(void)update;
-(void)setWantsHeaderInSafeArea:(BOOL)arg1 ;
-(double)backgroundGradientAdditionalCoverage;
-(long long)stringDrawingOptionsForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_invalidateLocalSpritesAlpha;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(void)_updateSectionedLayout;
-(void)_updateFooter;
-(void)_updateHeader;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)referenceSizeDidChange;
-(void)setHeaderTitleBaselineToBottom:(double)arg1 ;
-(void)setHeaderTitleOverContentAttributes:(NSDictionary *)arg1 ;
-(void)enumerateItemsGeometriesInRect:(CGRect)arg1 dataSource:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setFooterView:(UIView *)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)_invalidateHeaderAttributes;
-(CGPoint)headerTitleOrigin;
-(CGSize)headerTitleSize;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(UIView *)headerView;
-(void)_invalidateSectionedLayout;
-(id)axSpriteIndexes;
-(void)invalidateFooterHeight;
-(double)headerTitleBaselineToBottom;
-(id)createAnchorForScrollingToInitialPosition;
-(id)topmostSectionHeaderSnapshotInRect:(CGRect)arg1 ;
-(void)setHeaderTitleSize:(CGSize)arg1 ;
-(void)setBackgroundSpriteHeight:(double)arg1 ;
-(id<PXPhotosSectionBodyLayoutProvider>)sectionBodyProvider;
-(void)_invalidateLocalSprites;
-(void)_updateHeaderTitle;
-(NSDictionary *)headerTitleOverBackgroundAttributes;
-(id<PXPhotosSectionHeaderLayoutProvider>)sectionHeaderProvider;
-(void)setSectionHeaderProvider:(id<PXPhotosSectionHeaderLayoutProvider>)arg1 ;
-(BOOL)wantsHeaderInSafeArea;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_invalidateHeader;
@end

