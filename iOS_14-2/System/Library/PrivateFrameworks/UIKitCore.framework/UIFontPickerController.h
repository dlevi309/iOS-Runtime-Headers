/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIFontPickerDelegate.h>
#import <UIKit/UIFontPicker.h>

@protocol UIFontPickerDelegate;
@class UIFontPickerViewController, UIFontDescriptor, NSString;

@interface UIFontPickerController : NSObject <UIFontPickerDelegate, UIFontPicker> {

	UIFontPickerController* _strongSelf;
	UIFontPickerViewController* _pickerController;
	id<UIFontPickerDelegate> _delegate;
	unsigned long long _mode;
	UIFontDescriptor* _selectedFontDescriptor;

}

@property (assign,nonatomic) unsigned long long mode;                                //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * selectedFont; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFontDescriptor * selectedFontDescriptor;              //@synthesize selectedFontDescriptor=_selectedFontDescriptor - In the implementation block
@property (assign,nonatomic,__weak) id<UIFontPickerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)mode;
-(id)remoteViewController;
-(id)init;
-(id<UIFontPickerDelegate>)delegate;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<UIFontPickerDelegate>)arg1 ;
-(UIFontDescriptor *)selectedFontDescriptor;
-(UIFontDescriptor *)selectedFont;
-(void)setSelectedFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)fontPickerDidPickFont:(id)arg1 ;
-(void)fontPickerWasCancelled:(id)arg1 ;
-(BOOL)presentFontPickerFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentFontPickerFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedFont:(UIFontDescriptor *)arg1 ;
@end

