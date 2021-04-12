/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHSidebarProvider.h>

@protocol SBHSidebarProviderDelegate;
@class WGWidgetGroupViewController, SBHSidebarVisualConfiguration, SBHDateHeaderViewController, _UILegibilitySettings, NSMutableArray, NSLayoutConstraint, NSString;

@interface SBHRootSidebarController : UIViewController <UIGestureRecognizerDelegate, SBHSidebarProvider> {

	SBHDateHeaderViewController* _dateViewController;
	_UILegibilitySettings* _legibilitySettings;
	WGWidgetGroupViewController* _widgetViewController;
	SBHSidebarVisualConfiguration* _sidebarVisualConfiguration;
	unsigned long long _layoutInsetsIgnoredEdges;
	id<SBHSidebarProviderDelegate> _delegate;
	NSMutableArray* _widgetViewControllerConstraints;
	NSLayoutConstraint* _dockHeightConstraint;

}

@property (nonatomic,readonly) SBHDateHeaderViewController * dateViewController;                      //@synthesize dateViewController=_dateViewController - In the implementation block
@property (nonatomic,copy) NSMutableArray * widgetViewControllerConstraints;                          //@synthesize widgetViewControllerConstraints=_widgetViewControllerConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dockHeightConstraint;                               //@synthesize dockHeightConstraint=_dockHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) WGWidgetGroupViewController * widgetViewController;                      //@synthesize widgetViewController=_widgetViewController - In the implementation block
@property (nonatomic,retain) SBHSidebarVisualConfiguration * sidebarVisualConfiguration;              //@synthesize sidebarVisualConfiguration=_sidebarVisualConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long layoutInsetsIgnoredEdges;                             //@synthesize layoutInsetsIgnoredEdges=_layoutInsetsIgnoredEdges - In the implementation block
@property (assign,nonatomic,__weak) id<SBHSidebarProviderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(id<SBHSidebarProviderDelegate>)delegate;
-(void)setDelegate:(id<SBHSidebarProviderDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(void)setSidebarVisualConfiguration:(SBHSidebarVisualConfiguration *)arg1 ;
-(WGWidgetGroupViewController *)widgetViewController;
-(void)setEditingIcons:(BOOL)arg1 ;
-(void)_configureWidgetViewController;
-(void)_updateDockHeightConstraint;
-(NSMutableArray *)widgetViewControllerConstraints;
-(void)_configureLayoutMargins;
-(SBHDateHeaderViewController *)dateViewController;
-(void)_addEditButton;
-(unsigned long long)layoutInsetsIgnoredEdges;
-(void)setWidgetViewController:(WGWidgetGroupViewController *)arg1 ;
-(void)setLayoutInsetsIgnoredEdges:(unsigned long long)arg1 ;
-(void)setWidgetViewControllerConstraints:(NSMutableArray *)arg1 ;
-(NSLayoutConstraint *)dockHeightConstraint;
-(void)setDockHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

