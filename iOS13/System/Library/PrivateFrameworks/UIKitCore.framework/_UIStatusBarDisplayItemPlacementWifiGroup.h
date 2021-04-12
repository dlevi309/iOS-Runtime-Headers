/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemPlacementWifiGroup : _UIStatusBarDisplayItemPlacementGroup {

	_UIStatusBarDisplayItemPlacement* _signalStrengthPlacement;
	_UIStatusBarDisplayItemPlacement* _iconPlacement;
	_UIStatusBarDisplayItemPlacement* _rawPlacement;

}

@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * signalStrengthPlacement;              //@synthesize signalStrengthPlacement=_signalStrengthPlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * iconPlacement;                        //@synthesize iconPlacement=_iconPlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * rawPlacement;                         //@synthesize rawPlacement=_rawPlacement - In the implementation block
-(_UIStatusBarDisplayItemPlacement *)signalStrengthPlacement;
-(void)setSignalStrengthPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)rawPlacement;
-(void)setRawPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)iconPlacement;
-(void)setIconPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
@end

