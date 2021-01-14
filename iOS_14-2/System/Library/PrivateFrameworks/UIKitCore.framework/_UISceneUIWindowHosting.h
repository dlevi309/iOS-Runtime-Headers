/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIScreen, UITraitCollection, UIStatusBarManager;


@protocol _UISceneUIWindowHosting <NSObject>
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@property (nonatomic,readonly) UIStatusBarManager * _statusBarManager; 
@required
+(BOOL)_hostsWindows;
-(UITraitCollection *)_traitCollection;
-(long long)_interfaceOrientation;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
-(UIScreen *)_screen;
-(void)_attachWindow:(id)arg1;
-(UIStatusBarManager *)_statusBarManager;
-(void)_screenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1;
-(void)_windowUpdatedVisibility:(id)arg1;
-(void)_windowUpdatedProperties:(id)arg1;
-(void)_detachWindow:(id)arg1;
-(id<UICoordinateSpace>)_coordinateSpace;

@end

