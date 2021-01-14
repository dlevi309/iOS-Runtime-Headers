/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class TVRUIDevicePickerViewController;

@interface _TVRUIDevicePickerView : UIView {

	TVRUIDevicePickerViewController* _viewController;

}

@property (assign,nonatomic,__weak) TVRUIDevicePickerViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(TVRUIDevicePickerViewController *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(TVRUIDevicePickerViewController *)viewController;
-(id)_initWithViewController:(id)arg1 ;
@end

