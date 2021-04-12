/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIFontPickerRemoteViewControllerHost.h>

@protocol _UIFontPickerRemoteViewControllerHost;
@class NSString;

@interface _UIFontPickerRemoteViewController : _UIRemoteViewController <_UIFontPickerRemoteViewControllerHost> {

	id<_UIFontPickerRemoteViewControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFontPickerRemoteViewControllerHost> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<_UIFontPickerRemoteViewControllerHost>)_delegate;
-(void)set_delegate:(id<_UIFontPickerRemoteViewControllerHost>)arg1 ;
-(void)_pickerDidSelectFont:(id)arg1 ;
-(void)_pickerDidCancel;
@end

