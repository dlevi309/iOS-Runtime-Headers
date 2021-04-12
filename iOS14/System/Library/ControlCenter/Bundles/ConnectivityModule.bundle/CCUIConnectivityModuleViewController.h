/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)isExpanded;
-(BOOL)canDismissPresentedContent;
-(CCUIConnectivityButtonViewController *)hotspotButton;
-(BOOL)_isPortrait;
-(void)setButtonViewControllers:(NSArray *)arg1 ;
-(CGSize)_compressedButtonSize;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setBluetoothButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(void)setAirplaneButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(double)_desiredExpandedHeight;
-(void)setContentModuleContext:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)_setupLandscapeButtons;
-(double)preferredExpandedContentHeight;
-(CCUIConnectivityButtonViewController *)airplaneButton;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_setupPortraitButtons;
-(CCUIConnectivityButtonViewController *)airDropButton;
-(BOOL)shouldPerformHoverInteraction;
-(double)preferredExpandedContentWidth;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setWifiButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(CGSize)_buttonSize;
-(id)_makeButtonWithClass:(Class)arg1 ;
-(CCUIConnectivityButtonViewController *)bluetoothButton;
-(CCUIConnectivityButtonViewController *)wifiButton;
-(unsigned long long)_numRowsWhenExpanded;
-(void)setLandscapeButtonViewControllers:(NSArray *)arg1 ;
-(CCUIConnectivityButtonViewController *)cellularDataButton;
-(NSArray *)portraitButtonViewControllers;
-(NSArray *)landscapeButtonViewControllers;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setHotspotButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(NSArray *)buttonViewControllers;
-(void)setPortraitButtonViewControllers:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setCellularDataButton:(CCUIConnectivityButtonViewController *)arg1 ;
-(void)setAirDropButton:(CCUIConnectivityButtonViewController *)arg1 ;
@end

