/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIHorizontalScrollingContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElementConfigurationDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingSegmentedControllerDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingTabAppearanceStatusObserver.h>
#import <libobjc.A.dylib/SKUIScrollingTabNestedPagedScrolling.h>
#import <libobjc.A.dylib/SKUINavigationBarControllerProviding.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@protocol SKUIMenuBarViewElement;
@class UIScrollView, SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, SKUIDynamicPageSectionIndexMapper, NSMutableDictionary, SKUIHorizontalScrollingContainerViewController, SKUILoadingDocumentViewController, SKUIMenuBarSectionsViewController, SKUIViewElement, SKUIMenuBarViewElementConfiguration, SKUIMenuItemViewElement, SKUIScrollingSegmentedController, SKUIMenuBarTemplateElement, UIView, NSString;

@interface SKUIMenuBarTemplateDocumentViewController : SKUIViewController <SKUIHorizontalScrollingContainerViewControllerDelegate, SKUIMenuBarViewElementConfigurationDelegate, SKUIScrollingSegmentedControllerDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUINavigationBarControllerProviding, SKUIDocumentViewController> {

	SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost* _embeddedPaletteHost;
	SKUIDynamicPageSectionIndexMapper* _dynamicPageSectionIndexMapper;
	NSMutableDictionary* _entityUniqueIdentifierToEntityIndex;
	SKUIHorizontalScrollingContainerViewController* _horizontalScrollingContainerViewController;
	SKUILoadingDocumentViewController* _loadingDocumentViewController;
	SKUIMenuBarSectionsViewController* _menuBarSectionsViewController;
	long long _menuBarStyle;
	SKUIViewElement*<SKUIMenuBarViewElement> _menuBarViewElement;
	SKUIMenuBarViewElementConfiguration* _menuBarViewElementConfiguration;
	SKUIMenuItemViewElement* _pendingSelectedMenuItemViewElement;
	SKUIScrollingSegmentedController* _scrollingSegmentedController;
	SCD_Struct_SK8 _scrollingTabAppearanceStatus;
	SKUIMenuBarTemplateElement* _templateElement;

}

@property (nonatomic,readonly) UIView * titleView; 
@property (nonatomic,readonly) double titleViewHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollingTabNestedPagingScrollView; 
-(void)dealloc;
-(void)setOperationQueue:(id)arg1 ;
-(void)viewDidLoad;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)_contentViewController;
-(UIView *)titleView;
-(id)contentScrollView;
-(void)_replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2 ;
-(void)setClientContext:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)_colorScheme;
-(id)navigationPaletteView;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(id)_dynamicPageSectionIndexMapper;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id)arg2 ;
-(void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2 ;
-(void)menuBarViewElementConfiguration:(id)arg1 selectMenuItemViewElement:(id)arg2 animated:(BOOL)arg3 ;
-(void)_reloadContentViewController;
-(void)_removeContentViewController:(id)arg1 ;
-(BOOL)_isFirstViewControllerOnNavigationStack;
-(double)titleViewHeight;
-(void)_willDisplayViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)_recordEntityUniqueIdentifier:(id)arg1 forEntityIndex:(unsigned long long)arg2 ;
-(id)_newChildViewControllerForEntityAtIndex:(unsigned long long)arg1 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(SCD_Struct_SK8)arg1 ;
-(UIScrollView *)scrollingTabNestedPagingScrollView;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)_menuItemIndexForEntityIndex:(unsigned long long)arg1 entityValueProvider:(out id*)arg2 ;
-(id)_childViewControllersForMenuItems;
-(id)_zoomingShelfPageSplitsDescription;
-(void)_addContentViewController:(id)arg1 ;
-(void)horizontalScrollingContainerViewController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2 ;
-(void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2 ;
-(id)navigationBarControllerWithViewElement:(id)arg1 ;
@end

