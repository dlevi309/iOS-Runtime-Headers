/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGadgetUIViewController.h>
#import <libobjc.A.dylib/PXMutableHorizontalCollectionGadget.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PXHorizontalCollectionGadgetDelegate;
@class NSString, PXGadgetSpec, NSDictionary, PXGadgetOrbContext;

@interface PXHorizontalCollectionGadget : PXGadgetUIViewController <PXMutableHorizontalCollectionGadget, PXGadget> {

	BOOL _isFixedHeight;
	BOOL _prefersPagingEnabled;
	BOOL _visibleGadgetsLoaded;
	BOOL _isPerformingChanges;
	BOOL _isResourceLoaded;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	id<PXHorizontalCollectionGadgetDelegate> _horizontalGadgetDelegate;
	NSString* _collectionTitle;
	unsigned long long _collectionAccessoryButtonType;
	NSString* _collectionAccessoryButtonTitle;
	double _collectionHeight;
	long long _defaultColumnSpan;
	NSDictionary* _columnSpans;
	unsigned long long _gadgetType;
	unsigned long long _headerStyle;
	/*^block*/id _accessoryButtonAction;
	PXGadgetOrbContext* _previewOrbContext;
	long long _currentColumnSpan;
	CGSize _cachedMaxHeightForColumnWidth;
	CGRect _visibleContentRect;

}

@property (assign,nonatomic) BOOL visibleGadgetsLoaded;                                                             //@synthesize visibleGadgetsLoaded=_visibleGadgetsLoaded - In the implementation block
@property (assign,nonatomic) BOOL isPerformingChanges;                                                              //@synthesize isPerformingChanges=_isPerformingChanges - In the implementation block
@property (assign,nonatomic) BOOL isResourceLoaded;                                                                 //@synthesize isResourceLoaded=_isResourceLoaded - In the implementation block
@property (nonatomic,retain) PXGadgetOrbContext * previewOrbContext;                                                //@synthesize previewOrbContext=_previewOrbContext - In the implementation block
@property (assign,nonatomic) long long currentColumnSpan;                                                           //@synthesize currentColumnSpan=_currentColumnSpan - In the implementation block
@property (assign,nonatomic) CGSize cachedMaxHeightForColumnWidth;                                                  //@synthesize cachedMaxHeightForColumnWidth=_cachedMaxHeightForColumnWidth - In the implementation block
@property (assign,nonatomic,__weak) id<PXHorizontalCollectionGadgetDelegate> horizontalGadgetDelegate;              //@synthesize horizontalGadgetDelegate=_horizontalGadgetDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionTitle;                                                     //@synthesize collectionTitle=_collectionTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long collectionAccessoryButtonType;                                    //@synthesize collectionAccessoryButtonType=_collectionAccessoryButtonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionAccessoryButtonTitle;                                      //@synthesize collectionAccessoryButtonTitle=_collectionAccessoryButtonTitle - In the implementation block
@property (nonatomic,readonly) double collectionHeight;                                                             //@synthesize collectionHeight=_collectionHeight - In the implementation block
@property (assign,nonatomic) BOOL isFixedHeight;                                                                    //@synthesize isFixedHeight=_isFixedHeight - In the implementation block
@property (assign,nonatomic) long long defaultColumnSpan;                                                           //@synthesize defaultColumnSpan=_defaultColumnSpan - In the implementation block
@property (nonatomic,copy) NSDictionary * columnSpans;                                                              //@synthesize columnSpans=_columnSpans - In the implementation block
@property (assign,nonatomic) BOOL prefersPagingEnabled;                                                             //@synthesize prefersPagingEnabled=_prefersPagingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long gadgetType;                                                         //@synthesize gadgetType=_gadgetType - In the implementation block
@property (assign,nonatomic) unsigned long long headerStyle;                                                        //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,copy) id accessoryButtonAction;                                                                //@synthesize accessoryButtonAction=_accessoryButtonAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (assign,nonatomic) long long priority;                                                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                                                             //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(PXGadgetSpec *)gadgetSpec;
-(void)contentViewDidDisappear;
-(CGRect)visibleBounds;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(unsigned long long)gadgetType;
-(void)contentViewWillAppear;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)setPrefersPagingEnabled:(BOOL)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(BOOL)isRootGadgetViewController;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2 ;
-(NSDictionary *)columnSpans;
-(BOOL)prefersPagingEnabled;
-(void)setGadgetType:(unsigned long long)arg1 ;
-(long long)defaultColumnSpan;
-(BOOL)isFixedHeight;
-(void)setIsFixedHeight:(BOOL)arg1 ;
-(void)setCurrentColumnSpan:(long long)arg1 ;
-(NSString *)accessoryButtonTitle;
-(unsigned long long)collectionAccessoryButtonType;
-(void)setCollectionAccessoryButtonType:(unsigned long long)arg1 ;
-(NSString *)collectionAccessoryButtonTitle;
-(void)setCollectionAccessoryButtonTitle:(NSString *)arg1 ;
-(void)_updateCollectionViewPaging;
-(CGSize)_ensureCachedHeightForColumnWidth:(double)arg1 ;
-(void)_updateColumnSettings;
-(long long)_columnSpanForTraitCollection:(id)arg1 ;
-(id<PXHorizontalCollectionGadgetDelegate>)horizontalGadgetDelegate;
-(void)setHorizontalGadgetDelegate:(id<PXHorizontalCollectionGadgetDelegate>)arg1 ;
-(void)setColumnSpans:(NSDictionary *)arg1 ;
-(BOOL)visibleGadgetsLoaded;
-(void)setVisibleGadgetsLoaded:(BOOL)arg1 ;
-(BOOL)isResourceLoaded;
-(void)setIsResourceLoaded:(BOOL)arg1 ;
-(PXGadgetOrbContext *)previewOrbContext;
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(void)setPreviewOrbContext:(PXGadgetOrbContext *)arg1 ;
-(long long)currentColumnSpan;
-(CGSize)cachedMaxHeightForColumnWidth;
-(void)setCachedMaxHeightForColumnWidth:(CGSize)arg1 ;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)prefetchDuringScrollingForWidth:(double)arg1 ;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2 ;
-(NSString *)collectionTitle;
-(id)contentViewController;
-(void)updateIfNeeded;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCollectionHeight:(double)arg1 ;
-(double)collectionHeight;
-(void)setAccessoryButtonAction:(id)arg1 ;
-(void)setDefaultColumnSpan:(long long)arg1 ;
-(CGRect)visibleContentRect;
-(unsigned long long)accessoryButtonType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)commitPreviewViewController:(id)arg1 ;
-(id)gadgetTransition;
-(void)_extendedTraitCollectionDidChange:(unsigned long long)arg1 ;
-(id)rootNavigationHelper;
-(BOOL)isPerformingChanges;
-(void)setIsPerformingChanges:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg1 ;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(id)initWithProviders:(id)arg1 ;
-(id)accessoryButtonAction;
-(void)setCollectionTitle:(NSString *)arg1 ;
-(void)setLayout:(id)arg1 ;
-(unsigned long long)headerStyle;
-(void)performChanges:(/*^block*/id)arg1 ;
-(long long)priority;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(void)setPriority:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

