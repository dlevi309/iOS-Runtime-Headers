/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebDateTimePopoverViewController;

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebDateTimePopoverViewController* _webDateTimeViewController;

}

@property (nonatomic,retain) UIWebDateTimePopoverViewController * _webDateTimeViewController;              //@synthesize webDateTimeViewController=_webDateTimeViewController - In the implementation block
-(void)clear:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(void)set_webDateTimeViewController:(UIWebDateTimePopoverViewController *)arg1 ;
-(UIWebDateTimePopoverViewController *)_webDateTimeViewController;
-(void)dealloc;
@end

