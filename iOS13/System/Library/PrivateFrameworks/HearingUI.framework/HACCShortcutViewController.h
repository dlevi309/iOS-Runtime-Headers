/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HACCContentModuleDelegate.h>

@protocol AXHAShortcutUpdateProtocol;
@class AXDispatchTimer, CCUIContentModuleContext, NSMutableDictionary, UIScrollView, NSMutableArray, AXRemoteHearingAidDevice, HACCContentViewController, NSString;

@interface HACCShortcutViewController : UIViewController <UIGestureRecognizerDelegate, HACCContentModuleDelegate> {

	double _dismissalGestureYOffset;
	CGPoint _backgroundViewDismissalOrigin;
	AXDispatchTimer* _bluetoothAvailabilityTimer;
	BOOL _bluetoothAvailable;
	BOOL _listeningForUpdates;
	id<AXHAShortcutUpdateProtocol> _delegate;
	CCUIContentModuleContext* _contentModuleContext;
	NSMutableDictionary* _moduleToViewControllerMap;
	NSMutableDictionary* _gridToModuleMap;
	NSMutableDictionary* _moduleToPointMap;
	UIScrollView* _scrollView;
	NSMutableArray* _separatorViews;
	AXRemoteHearingAidDevice* _currentHearingDevice;

}

@property (nonatomic,retain) NSMutableDictionary * moduleToViewControllerMap;                      //@synthesize moduleToViewControllerMap=_moduleToViewControllerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * gridToModuleMap;                                //@synthesize gridToModuleMap=_gridToModuleMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * moduleToPointMap;                               //@synthesize moduleToPointMap=_moduleToPointMap - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSMutableArray * separatorViews;                                      //@synthesize separatorViews=_separatorViews - In the implementation block
@property (nonatomic,retain) AXRemoteHearingAidDevice * currentHearingDevice;                      //@synthesize currentHearingDevice=_currentHearingDevice - In the implementation block
@property (assign,nonatomic) BOOL bluetoothAvailable;                                              //@synthesize bluetoothAvailable=_bluetoothAvailable - In the implementation block
@property (assign,nonatomic) BOOL listeningForUpdates;                                             //@synthesize listeningForUpdates=_listeningForUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<AXHAShortcutUpdateProtocol> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) HACCContentViewController * expandedController; 
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AXHAShortcutUpdateProtocol>)delegate;
-(void)setDelegate:(id<AXHAShortcutUpdateProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateView;
-(double)_separatorHeight;
-(UIScrollView *)scrollView;
-(BOOL)isExpanded;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(double)preferredContentWidth;
-(double)preferredExpandedContentHeight;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(HACCContentViewController *)expandedController;
-(void)controlDidActivate:(id)arg1 ;
-(AXRemoteHearingAidDevice *)currentHearingDevice;
-(void)updateViewForProperties:(id)arg1 ;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(void)contentCategoryDidChange:(id)arg1 ;
-(void)setModuleToViewControllerMap:(NSMutableDictionary *)arg1 ;
-(void)setGridToModuleMap:(NSMutableDictionary *)arg1 ;
-(void)setModuleToPointMap:(NSMutableDictionary *)arg1 ;
-(BOOL)listeningForUpdates;
-(void)setListeningForUpdates:(BOOL)arg1 ;
-(void)setCurrentHearingDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(void)updateAvailableControlsForSize:(CGSize)arg1 ;
-(void)listenForUpdates;
-(NSMutableDictionary *)moduleToViewControllerMap;
-(double)moduleHeight;
-(unsigned long long)numberOfColumnsForSize:(CGSize)arg1 ;
-(NSMutableArray *)separatorViews;
-(NSMutableDictionary *)moduleToPointMap;
-(void)setSeparatorViews:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)gridToModuleMap;
-(BOOL)shouldDisplayControlForModule:(unsigned long long)arg1 ;
-(void)setAlpha:(double)arg1 forAllModulesExcept:(id)arg2 ;
-(BOOL)bluetoothAvailable;
-(void)setBluetoothAvailable:(BOOL)arg1 ;
@end

