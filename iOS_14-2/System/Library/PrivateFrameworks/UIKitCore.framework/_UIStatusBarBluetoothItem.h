/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBatteryImageView:(_UIStatusBarImageView *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarImageView *)batteryImageView;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2 ;
-(void)_create_batteryImageView;
@end

