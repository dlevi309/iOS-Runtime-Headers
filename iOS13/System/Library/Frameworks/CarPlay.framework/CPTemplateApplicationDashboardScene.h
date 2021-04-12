/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CarPlay-Structs.h>
#import <UIKitCore/UIScene.h>
#import <libobjc.A.dylib/_UISceneUIWindowHosting.h>
#import <libobjc.A.dylib/_UIContextBinderContextCreationPolicyHolding.h>
#import <UIKit/UICoordinateSpace.h>

@protocol NSObject;
@class UIScreen, UITraitCollection, _UIContextBinder, CPDashboardController, UIWindow, NSString;

@interface CPTemplateApplicationDashboardScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace> {

	id<NSObject> _sceneWillConnectObserver;
	id<NSObject> _didFinishLaunchingObserver;
	BOOL _sceneWillConnect;
	_UIContextBinder* _contextBinder;
	UIScreen* _screen;
	UITraitCollection* _traitCollection;
	long long _screenRequestedOverscanCompensation;
	CPDashboardController* _dashboardController;
	UIWindow* _dashboardWindow;

}

@property (nonatomic,retain) UIWindow * dashboardWindow;                                            //@synthesize dashboardWindow=_dashboardWindow - In the implementation block
@property (nonatomic,retain) id<CPTemplateApplicationDashboardSceneDelegate> delegate; 
@property (nonatomic,readonly) CPDashboardController * dashboardController;                         //@synthesize dashboardController=_dashboardController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@property (nonatomic,readonly) CGRect bounds; 
+(BOOL)_hostsWindows;
-(void)_invalidate;
-(CGRect)bounds;
-(id)_definition;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(UIScreen *)_screen;
-(UITraitCollection *)_traitCollection;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
-(CGRect)_referenceBounds;
-(id)initWithSession:(id)arg1 connectionOptions:(id)arg2 ;
-(void)_readySceneForConnection;
-(id)_fbsSceneLayerForWindow:(id)arg1 ;
-(UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(long long)_interfaceOrientation;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)_componentForKey:(id)arg1 ;
-(BOOL)_permitContextCreationForBindingDescription:(SCD_Struct_CP0)arg1 ;
-(void)_attachWindow:(id)arg1 ;
-(void)_detachWindow:(id)arg1 ;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1 ;
-(void)_windowUpdatedVisibility:(id)arg1 ;
-(void)_windowUpdatedProperties:(id)arg1 ;
-(id<UICoordinateSpace>)_coordinateSpace;
-(void)_deliverDashboardControllerToDelegate;
-(UIWindow *)dashboardWindow;
-(CPDashboardController *)dashboardController;
-(void)setDashboardWindow:(UIWindow *)arg1 ;
@end

