/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/

#import <iMessageApps/iMessageApps-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserSwitcherFooterViewDelegate.h>

@protocol IMADockViewControllerDelegate;
@class CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, IMAAppPresenter, UIViewController, NSString;

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate> {

	CKBrowserSwitcherFooterView* _appStrip;
	CKBrowserSwitcherFooterViewDataSource* _appStripDataSource;
	IMAAppPresenter* _appPresenter;
	BOOL _showIconBorders;
	id<IMADockViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IMADockViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL alwaysPresentAppsExpanded; 
@property (assign,nonatomic) BOOL showIconBorders;                                           //@synthesize showIconBorders=_showIconBorders - In the implementation block
@property (nonatomic,readonly) double minimizedDockHeight; 
@property (nonatomic,readonly) UIViewController * currentAppViewController; 
@property (assign,nonatomic) BOOL hidesCompactAppForStickerDrag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<IMADockViewControllerDelegate>)delegate;
-(void)setDelegate:(id<IMADockViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)appStrip;
-(void)updateAppStripFrame;
-(void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2 ;
-(void)switcherView:(id)arg1 didMagnify:(BOOL)arg2 ;
-(void)cleanupRunningApps;
-(double)minimizedDockHeight;
-(UIViewController *)currentAppViewController;
-(void)setAlwaysPresentAppsExpanded:(BOOL)arg1 ;
-(void)hideAppViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)showIconBorders;
-(void)setShowIconBorders:(BOOL)arg1 ;
-(BOOL)alwaysPresentAppsExpanded;
-(BOOL)hidesCompactAppForStickerDrag;
-(void)setHidesCompactAppForStickerDrag:(BOOL)arg1 ;
-(id)imageViewForSticker:(id)arg1 ;
@end

