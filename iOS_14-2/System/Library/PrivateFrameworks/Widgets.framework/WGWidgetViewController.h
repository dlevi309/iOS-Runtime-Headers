/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(WGWidgetHostingViewController *)widgetHost;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<WGWidgetViewControllerDelegate>)delegate;
-(void)registerWidgetForRefreshEvents:(id)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1 ;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1 ;
-(void)unregisterWidgetForRefreshEvents:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setDelegate:(id<WGWidgetViewControllerDelegate>)arg1 ;
-(CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2 ;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1 ;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setWidgetHost:(WGWidgetHostingViewController *)arg1 ;
-(void)loadView;
-(id)_platterViewIfLoaded;
-(id)_platterViewLoadingIfNecessary:(BOOL)arg1 ;
-(void)_addWidgetButtonTapped:(id)arg1 ;
-(void)remoteViewControllerDidConnectForWidget:(id)arg1 ;
-(id)initWithWidgetInfo:(id)arg1 ;
-(UITraitCollection *)requestedTraitCollectionOverride;
@end

