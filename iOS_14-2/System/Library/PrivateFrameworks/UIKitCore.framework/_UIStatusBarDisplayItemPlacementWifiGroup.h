/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRawPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(void)setSignalStrengthPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(void)setIconPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)iconPlacement;
-(_UIStatusBarDisplayItemPlacement *)signalStrengthPlacement;
-(_UIStatusBarDisplayItemPlacement *)rawPlacement;
@end

