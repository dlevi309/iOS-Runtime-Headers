/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIColorPickerRemoteViewControllerHost.h>

@protocol _UIColorPickerRemoteViewControllerHost;
@class NSString;

@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerRemoteViewControllerHost> {

	id<_UIColorPickerRemoteViewControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIColorPickerRemoteViewControllerHost> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+(id)serviceViewControllerInterface;
-(id<_UIColorPickerRemoteViewControllerHost>)_delegate;
-(void)_pickerDidSelectColor:(id)arg1 colorspace:(id)arg2 isVolatile:(BOOL)arg3 ;
-(BOOL)_canShowWhileLocked;
-(void)set_delegate:(id<_UIColorPickerRemoteViewControllerHost>)arg1 ;
-(void)_pickerDidSelectColor:(id)arg1 ;
-(void)_pickerDidShowEyedropper;
-(void)_pickerDidFloatEyedropper;
-(void)_pickerDidDismissEyedropper;
-(void)_colorPickerDidFinish;
@end

