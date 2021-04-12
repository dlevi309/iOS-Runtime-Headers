/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIScreen, UITraitCollection;


@protocol _UISceneUIWindowHosting <NSObject>
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@required
+(BOOL)_hostsWindows;
-(UIScreen *)_screen;
-(UITraitCollection *)_traitCollection;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
-(long long)_interfaceOrientation;
-(void)_attachWindow:(id)arg1;
-(void)_detachWindow:(id)arg1;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1;
-(void)_windowUpdatedVisibility:(id)arg1;
-(void)_windowUpdatedProperties:(id)arg1;
-(id<UICoordinateSpace>)_coordinateSpace;

@end

