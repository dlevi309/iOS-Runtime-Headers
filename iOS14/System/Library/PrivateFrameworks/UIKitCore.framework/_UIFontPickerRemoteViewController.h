/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_pickerDidCancel;
-(void)_pickerDidSelectFont:(id)arg1 ;
@end

