/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXForYouMemoriesViewControllerDelegate.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PXUIViewControllerZoomTransitionEndPoint;
@class PXGadgetSpec, PXMemoriesFeedWidgetDataSourceManager, NSMutableDictionary, NSString;

@interface PXMemoryRowGadget : UIViewController <PXSectionedDataSourceManagerObserver, PXForYouMemoriesViewControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXGadget> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _hasAppeared;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXMemoriesFeedWidgetDataSourceManager* _dataSourceManager;
	NSMutableDictionary* _viewControllerEntries;
	long long _currentVisibility;
	id<PXUIViewControllerZoomTransitionEndPoint> _currentTransitionEndPoint;
	unsigned long long _currentNumberOfColumns;

}

@property (nonatomic,readonly) PXMemoriesFeedWidgetDataSourceManager * dataSourceManager;                         //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewControllerEntries;                                         //@synthesize viewControllerEntries=_viewControllerEntries - In the implementation block
@property (assign,nonatomic) long long currentVisibility;                                                         //@synthesize currentVisibility=_currentVisibility - In the implementation block
@property (nonatomic,retain) id<PXUIViewControllerZoomTransitionEndPoint> currentTransitionEndPoint;              //@synthesize currentTransitionEndPoint=_currentTransitionEndPoint - In the implementation block
@property (assign,nonatomic) unsigned long long currentNumberOfColumns;                                           //@synthesize currentNumberOfColumns=_currentNumberOfColumns - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                                    //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                           //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(NSRange)dataSourceRangeForRowType:(unsigned long long)arg1 currentVisibility:(long long)arg2 ;
+(long long)visibilityForGadgetSpec:(id)arg1 numberOfMemories:(unsigned long long)arg2 ;
+(unsigned long long)numberOfColumnsForCurrentVisibility:(long long)arg1 rowType:(unsigned long long)arg2 numberOfMemories:(unsigned long long)arg3 ;
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(void)viewWillLayoutSubviews;
-(unsigned long long)gadgetType;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(BOOL)hasAppeared;
-(id<PXGadgetDelegate>)delegate;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updateIfNeeded;
-(NSString *)accessoryButtonTitle;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(id)uniqueGadgetIdentifier;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(id)contentViewController;
-(void)forYouMemoriesViewController:(id)arg1 configureMetrics:(id)arg2 ;
-(void)forYouMemoriesViewController:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setCurrentVisibility:(long long)arg1 ;
-(void)setCurrentNumberOfColumns:(unsigned long long)arg1 ;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)_dismissIfNeeded;
-(void)_updateNumberOfColumnsIfNeeded;
-(void)_updateScrollingBehaviorIfNeeded;
-(id)showAllMemoriesFeedAnimated:(BOOL)arg1 ;
-(void)_configureMetricsForSingleRow:(id)arg1 dataSourceRange:(NSRange)arg2 ;
-(void)_configureMetricsForMultiRow:(id)arg1 dataSourceRange:(NSRange)arg2 ;
-(void)_transitionFromCurrentVisibility:(long long)arg1 toNewVisibility:(long long)arg2 ;
-(void)_fillViewControllerEntryForRowType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)_refreshViewControllerForRowType:(unsigned long long)arg1 visibility:(long long)arg2 ;
-(void)_removeViewControllerEntryForRowType:(unsigned long long)arg1 ;
-(void)_updateScrollingBehaviorForRowType:(unsigned long long)arg1 ;
-(BOOL)_shouldPageForRowType:(unsigned long long)arg1 ;
-(CGRect)_frameForRowType:(unsigned long long)arg1 inRect:(CGRect)arg2 ;
-(long long)_columnSpanForRowType:(unsigned long long)arg1 ;
-(NSMutableDictionary *)viewControllerEntries;
-(void)setViewControllerEntries:(NSMutableDictionary *)arg1 ;
-(long long)currentVisibility;
-(id<PXUIViewControllerZoomTransitionEndPoint>)currentTransitionEndPoint;
-(void)setCurrentTransitionEndPoint:(id<PXUIViewControllerZoomTransitionEndPoint>)arg1 ;
-(unsigned long long)currentNumberOfColumns;
-(PXMemoriesFeedWidgetDataSourceManager *)dataSourceManager;
-(void)prepareToNavigateToDetailsForMemoryUUID:(id)arg1 ;
-(unsigned long long)accessoryButtonType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(id)px_endPointForTransition:(id)arg1 ;
-(void)_updateVisibilityIfNeeded;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

