/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarSensorActivityView;

@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem {

	_UIStatusBarSensorActivityView* _sensorActivityIndicator;

}

@property (nonatomic,retain) _UIStatusBarSensorActivityView * sensorActivityIndicator;              //@synthesize sensorActivityIndicator=_sensorActivityIndicator - In the implementation block
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarSensorActivityView *)sensorActivityIndicator;
-(void)_create_sensorActivityIndicator;
-(void)setSensorActivityIndicator:(_UIStatusBarSensorActivityView *)arg1 ;
@end

