/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKComponentProvider.h>
#import <libobjc.A.dylib/CKSupplementaryViewDataSource.h>
#import <libobjc.A.dylib/WFCollectionViewDelegateModulesLayout.h>
#import <libobjc.A.dylib/WFVariableUIDelegate.h>
#import <libobjc.A.dylib/WFModuleDelegate.h>

@protocol WFWorkflowViewControllerDelegate, WFComponentNavigationContext, WFContentClassesToolbarDelegate, WFModulesCollectionViewDelegate, WFModulesSupplementaryViewDataSource, WFModuleModelProvider, UIScrollViewDelegate;
@class WFWorkflow, WFScrollPositionPinningCollectionView, NSIndexPath, CKCollectionViewTransactionalDataSource, WFModulesCollectionViewLayout, WFWorkflowModuleIndentationCache, WFContentClassesToolbar, UICollectionView, NSString;

@interface WFWorkflowViewController : UIViewController <CKComponentProvider, CKSupplementaryViewDataSource, WFCollectionViewDelegateModulesLayout, WFVariableUIDelegate, WFModuleDelegate> {

	BOOL _alwaysBounceCollectionViewVertically;
	BOOL _allowsAcceptsToolbar;
	id<WFWorkflowViewControllerDelegate> _delegate;
	WFWorkflow* _workflow;
	unsigned long long _workflowViewStyle;
	WFScrollPositionPinningCollectionView* _pinningCollectionView;
	id<WFComponentNavigationContext> _context;
	/*function pointer*/void* _cellConfigurationFunction;
	double _currentModuleWidth;
	NSIndexPath* _actionOutputIndexPath;
	/*^block*/id _actionOutputCompletionHandler;
	CKCollectionViewTransactionalDataSource* _dataSource;
	WFModulesCollectionViewLayout* _collectionViewLayout;
	id<WFContentClassesToolbarDelegate> _acceptsToolbarDelegate;
	id<WFModulesCollectionViewDelegate> _collectionViewDelegate;
	id<WFModulesSupplementaryViewDataSource> _supplementaryViewDataSource;
	id<WFModuleModelProvider> _modelProvider;
	WFWorkflowModuleIndentationCache* _indentationCache;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	double _maximumModuleWidth;
	double _maximumContentWidth;
	WFContentClassesToolbar* _acceptsToolbar;
	CGSize _viewSize;

}

@property (assign,nonatomic,__weak) WFScrollPositionPinningCollectionView * pinningCollectionView;                     //@synthesize pinningCollectionView=_pinningCollectionView - In the implementation block
@property (nonatomic,readonly) id<WFComponentNavigationContext> context;                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* cellConfigurationFunction;                                    //@synthesize cellConfigurationFunction=_cellConfigurationFunction - In the implementation block
@property (assign,nonatomic) double currentModuleWidth;                                                                //@synthesize currentModuleWidth=_currentModuleWidth - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                                          //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,retain) NSIndexPath * actionOutputIndexPath;                                                      //@synthesize actionOutputIndexPath=_actionOutputIndexPath - In the implementation block
@property (nonatomic,copy) id actionOutputCompletionHandler;                                                           //@synthesize actionOutputCompletionHandler=_actionOutputCompletionHandler - In the implementation block
@property (nonatomic,readonly) CKCollectionViewTransactionalDataSource * dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) WFModulesCollectionViewLayout * collectionViewLayout;                            //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic,__weak) id<WFContentClassesToolbarDelegate> acceptsToolbarDelegate;                        //@synthesize acceptsToolbarDelegate=_acceptsToolbarDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFModulesCollectionViewDelegate> collectionViewDelegate;                        //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFModulesSupplementaryViewDataSource> supplementaryViewDataSource;              //@synthesize supplementaryViewDataSource=_supplementaryViewDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WFModuleModelProvider> modelProvider;                                           //@synthesize modelProvider=_modelProvider - In the implementation block
@property (nonatomic,readonly) WFWorkflowModuleIndentationCache * indentationCache;                                    //@synthesize indentationCache=_indentationCache - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                                       //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) double maximumModuleWidth;                                                                //@synthesize maximumModuleWidth=_maximumModuleWidth - In the implementation block
@property (assign,nonatomic) double maximumContentWidth;                                                               //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (assign,nonatomic) BOOL alwaysBounceCollectionViewVertically;                                                //@synthesize alwaysBounceCollectionViewVertically=_alwaysBounceCollectionViewVertically - In the implementation block
@property (assign,nonatomic) BOOL allowsAcceptsToolbar;                                                                //@synthesize allowsAcceptsToolbar=_allowsAcceptsToolbar - In the implementation block
@property (nonatomic,__weak,readonly) WFContentClassesToolbar * acceptsToolbar;                                        //@synthesize acceptsToolbar=_acceptsToolbar - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                                  //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) unsigned long long workflowViewStyle;                                                   //@synthesize workflowViewStyle=_workflowViewStyle - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(id)moduleAppearanceForStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(id<WFWorkflowViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<WFComponentNavigationContext>)context;
-(CKCollectionViewTransactionalDataSource *)dataSource;
-(void)loadView;
-(void)setViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(WFModulesCollectionViewLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)setMaximumContentWidth:(double)arg1 ;
-(double)maximumContentWidth;
-(WFWorkflow *)workflow;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(id<WFModuleModelProvider>)modelProvider;
-(unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2 ;
-(void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(/*^block*/id)arg3 goBackHandler:(/*^block*/id)arg4 scrolledAwayHandler:(/*^block*/id)arg5 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 verticalOffsetForItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 itemAtIndexPath:(id)arg3 isConnectedToItemAtIndexPath:(id)arg4 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 ;
-(id)initWithWorkflow:(id)arg1 style:(unsigned long long)arg2 ;
-(id)initWithWorkflow:(id)arg1 style:(unsigned long long)arg2 context:(id)arg3 cellConfigurationFunction:(/*function pointer*/void*)arg4 ;
-(BOOL)alwaysBounceCollectionViewVertically;
-(void)setAlwaysBounceCollectionViewVertically:(BOOL)arg1 ;
-(void)textSizeChanged;
-(id)indexPathOfCellWithSubview:(id)arg1 ;
-(id)indexPathOfCellContainingResponder:(id)arg1 ;
-(void)removeOutputTokens;
-(void)tappedOutputToken:(id)arg1 withModel:(id)arg2 ;
-(void)cancelActionOutputPicking;
-(id)createModelForAction:(id)arg1 ;
-(double)moduleWidthForViewSize:(CGSize)arg1 ;
-(void)generateNewModelsAndReload;
-(void)setAcceptsToolbarDelegate:(id<WFContentClassesToolbarDelegate>)arg1 ;
-(void)setAllowsAcceptsToolbar:(BOOL)arg1 ;
-(void)invalidateActionConnections;
-(unsigned long long)workflowViewStyle;
-(WFScrollPositionPinningCollectionView *)pinningCollectionView;
-(void)setPinningCollectionView:(WFScrollPositionPinningCollectionView *)arg1 ;
-(/*function pointer*/void*)cellConfigurationFunction;
-(double)currentModuleWidth;
-(void)setCurrentModuleWidth:(double)arg1 ;
-(NSIndexPath *)actionOutputIndexPath;
-(void)setActionOutputIndexPath:(NSIndexPath *)arg1 ;
-(id)actionOutputCompletionHandler;
-(void)setActionOutputCompletionHandler:(id)arg1 ;
-(id<WFContentClassesToolbarDelegate>)acceptsToolbarDelegate;
-(id<WFModulesCollectionViewDelegate>)collectionViewDelegate;
-(void)setCollectionViewDelegate:(id<WFModulesCollectionViewDelegate>)arg1 ;
-(id<WFModulesSupplementaryViewDataSource>)supplementaryViewDataSource;
-(void)setSupplementaryViewDataSource:(id<WFModulesSupplementaryViewDataSource>)arg1 ;
-(void)setModelProvider:(id<WFModuleModelProvider>)arg1 ;
-(WFWorkflowModuleIndentationCache *)indentationCache;
-(double)maximumModuleWidth;
-(void)setMaximumModuleWidth:(double)arg1 ;
-(BOOL)allowsAcceptsToolbar;
-(WFContentClassesToolbar *)acceptsToolbar;
@end

