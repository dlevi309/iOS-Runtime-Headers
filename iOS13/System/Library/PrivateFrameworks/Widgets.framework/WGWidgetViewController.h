/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetHostingViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetHostingViewControllerHost.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>

@protocol WGWidgetViewControllerDelegate;
@class WGWidgetHostingViewController, UITraitCollection, NSString;

@interface WGWidgetViewController : UIViewController <WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost, WGWidgetExtensionVisibilityProviding> {

	WGWidgetHostingViewController* _widgetHost;
	id<WGWidgetViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) WGWidgetHostingViewController * widgetHost;                          //@synthesize widgetHost=_widgetHost - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITraitCollection * requestedTraitCollectionOverride; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WGWidgetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(WGWidgetHostingViewController *)widgetHost;
-(void)setWidgetHost:(WGWidgetHostingViewController *)arg1 ;
-(UITraitCollection *)requestedTraitCollectionOverride;
-(void)_addWidgetButtonTapped:(id)arg1 ;
-(id)_platterViewIfLoaded;
-(CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2 ;
-(id)_platterViewLoadingIfNecessary:(BOOL)arg1 ;
-(void)registerWidgetForRefreshEvents:(id)arg1 ;
-(void)unregisterWidgetForRefreshEvents:(id)arg1 ;
-(void)remoteViewControllerDidConnectForWidget:(id)arg1 ;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1 ;
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1 ;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1 ;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(id)initWithWidgetInfo:(id)arg1 ;
@end

