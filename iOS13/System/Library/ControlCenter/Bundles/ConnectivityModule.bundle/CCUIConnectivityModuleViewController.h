/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/ConnectivityModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewPropertyAnimator, UIScrollView, CCUIConnectivityButtonViewController, NSArray, NSString;

@interface CCUIConnectivityModuleViewController : UIViewController <CCUIContentModuleContentViewController> {

	UIScrollView* _buttonContainerScrollView;
	BOOL _expanded;
	CCUIConnectivityButtonViewController* _airplaneButton;
	CCUIConnectivityButtonViewController* _cellularDataButton;
	CCUIConnectivityButtonViewController* _wifiButton;
	CCUIConnectivityButtonViewController* _bluetoothButton;
	CCUIConnectivityButtonViewController* _airDropButton;
	CCUIConnectivityButtonViewController* _hotspotButton;
	NSArray* _buttonViewControllers;
	NSArray* _portraitButtonViewControllers;
	NSArray* _landscapeButtonViewControllers;

}

@property (nonatomic,retain) CCUIConnectivityButtonViewController * airplaneButton;                  //@synthesize airplaneButton=_airplaneButton - In the implementation block
@property (nonatomic,retain) CCUIConnectivityButtonViewController * cellularDataButton;              //@synthesize cellularDataButton=_cellularDataButton - In the implementation block
@property (nonatomic,retain) CCUIConnectivityButtonViewController * wifiButton;                      //@synthesize wifiButton=_wifiButton - In the implementation block
@property (nonatomic,retain) CCUIConnectivityButtonViewController * bluetoothButton;                 //@synthesize bluetoothButton=_bluetoothButton - In the implementation block
@property (nonatomic,retain) CCUIConnectivityButtonViewController * airDropButton;                   //@synthesize airDropButton=_airDropButton - In the implementation block
@property (nonatomic,retain) CCUIConnectivityButtonViewController * hotspotButton;                   //@synthesize hotspotButton=_hotspotButton - In the implementation block
@property (nonatomic,retain) NSArray * buttonViewControllers;                                        //@synthesize buttonViewControllers=_buttonViewControllers - In the implementation block
@property (nonatomic,retain) NSArray * portraitButtonViewControllers;                                //@synthesize portraitButtonViewControllers=_portraitButtonViewControllers - In the implementation block
@property (nonatomic,retain) NSArray * landscapeButtonViewControllers;                               //@synthesize landscapeButtonViewControllers=_landscapeButtonViewControllers - In the implementation block
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded;                                      //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isExpanded;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGSize)_buttonSize;
-(BOOL)_isPortrait;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)preferredExpandedContentWidth;
-(BOOL)shouldPerformHoverInteraction;
-(double)_desiredExpandedHeight;
-(void)setContentModuleContext:(id)arg1 ;
-(id)_makeButtonWithClass:(Class)arg1 ;
-(void)_setupPortraitButtons;
-(void)_setupLandscapeButtons;
-(NSArray *)buttonViewControllers;
-(CGSize)_compressedButtonSize;
-(unsigned long long)_numRowsWhenExpanded;
-(CCUIConnectivityButtonViewController *)airplaneButton;
-(void)setAirplaneButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(CCUIConnectivityButtonViewController *)cellularDataButton;
-(void)setCellularDataButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(CCUIConnectivityButtonViewController *)wifiButton;
-(void)setWifiButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(CCUIConnectivityButtonViewController *)bluetoothButton;
-(void)setBluetoothButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(CCUIConnectivityButtonViewController *)airDropButton;
-(void)setAirDropButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(CCUIConnectivityButtonViewController *)hotspotButton;
-(void)setHotspotButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(void)setButtonViewControllers:(NSArray *)arg1 ;
-(NSArray *)portraitButtonViewControllers;
-(void)setPortraitButtonViewControllers:(NSArray *)arg1 ;
-(NSArray *)landscapeButtonViewControllers;
-(void)setLandscapeButtonViewControllers:(NSArray *)arg1 ;
@end

