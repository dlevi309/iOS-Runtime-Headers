/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarImageView;

@interface _UIStatusBarBluetoothItem : _UIStatusBarIndicatorItem {

	_UIStatusBarImageView* _batteryImageView;

}

@property (nonatomic,retain) _UIStatusBarImageView * batteryImageView;              //@synthesize batteryImageView=_batteryImageView - In the implementation block
+(id)batteryDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)indicatorEntryKey;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2 ;
-(_UIStatusBarImageView *)batteryImageView;
-(void)_create_batteryImageView;
-(void)setBatteryImageView:(_UIStatusBarImageView *)arg1 ;
@end

