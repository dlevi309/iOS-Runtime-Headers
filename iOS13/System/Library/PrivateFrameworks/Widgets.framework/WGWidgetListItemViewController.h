/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol WGWidgetHostingViewControllerDelegateWGWidgetListItemViewControllerDelegate;
@class NSString, WGWidgetHostingViewController, WGWidgetPlatterView;

@interface WGWidgetListItemViewController : UIViewController <PLContentSizeCategoryAdjusting> {

	NSString* _widgetIdentifier;
	id<WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate> _delegate;
	WGWidgetHostingViewController* _widgetHost;
	CGSize _pendingSize;

}

@property (assign,setter=_setPendingSize:,getter=_pendingSize,nonatomic) CGSize pendingSize;                                                 //@synthesize pendingSize=_pendingSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetIdentifier;                                                                             //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WGWidgetPlatterView * platterView; 
@property (nonatomic,readonly) WGWidgetHostingViewController * widgetHost;                                                                   //@synthesize widgetHost=_widgetHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
-(NSString *)description;
-(id<WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(WGWidgetPlatterView *)platterView;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)removeChildViewController:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)adjustsFontForContentSizeCategory;
-(CGSize)_pendingSize;
-(WGWidgetHostingViewController *)widgetHost;
-(NSString *)widgetIdentifier;
-(id)_platterViewIfLoaded;
-(id)_platterViewLoadingIfNecessary:(BOOL)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithWidgetIdentifier:(id)arg1 ;
-(void)managingContainerWillAppear:(id)arg1 ;
-(void)managingContainerDidDisappear:(id)arg1 ;
-(CGSize)contentSizeForPreferredContentSize:(CGSize)arg1 ;
-(CGSize)preferredContentSizeForContentOfSize:(CGSize)arg1 ;
-(void)_addWidgetHostIfNecessary;
-(void)_setPendingSize:(CGSize)arg1 ;
@end

