/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<UIFontPickerDelegate>)delegate;
-(void)setDelegate:(id<UIFontPickerDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)remoteViewController;
-(UIFontDescriptor *)selectedFontDescriptor;
-(void)setSelectedFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)fontPickerDidPickFont:(id)arg1 ;
-(void)fontPickerWasCancelled:(id)arg1 ;
-(BOOL)presentFontPickerFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentFontPickerFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(UIFontDescriptor *)selectedFont;
-(void)setSelectedFont:(UIFontDescriptor *)arg1 ;
@end

