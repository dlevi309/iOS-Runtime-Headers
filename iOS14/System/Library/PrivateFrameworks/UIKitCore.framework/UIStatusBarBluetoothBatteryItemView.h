/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage;

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _accessibilityCachedHUDCapacity;
	UIImage* _accessibilityCachedHUDImage;

}
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)_normalizedCapacity;
-(UIEdgeInsets)_accessibilityHUDBatteryInsidesInsets;
-(double)extraLeftPadding;
-(id)accessibilityHUDRepresentation;
@end

