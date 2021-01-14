/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(CGSize)_pendingSize;
-(WGWidgetHostingViewController *)widgetHost;
-(NSString *)widgetIdentifier;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)managingContainerDidDisappear:(id)arg1 ;
-(WGWidgetPlatterView *)platterView;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)managingContainerWillAppear:(id)arg1 ;
-(void)_setPendingSize:(CGSize)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_addWidgetHostIfNecessary;
-(void)setDelegate:(id<WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate>)arg1 ;
-(NSString *)description;
-(CGSize)preferredContentSizeForContentOfSize:(CGSize)arg1 ;
-(CGSize)contentSizeForPreferredContentSize:(CGSize)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)_platterViewIfLoaded;
-(id)_platterViewLoadingIfNecessary:(BOOL)arg1 ;
-(id)initWithWidgetIdentifier:(id)arg1 ;
@end

