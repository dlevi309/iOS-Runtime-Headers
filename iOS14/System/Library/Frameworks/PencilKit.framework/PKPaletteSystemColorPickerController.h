/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKPaletteBaseColorPickerController.h>
#import <UIKit/UIColorPickerViewControllerDelegate.h>

@class UIColorPickerViewController, NSString;

@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController <UIColorPickerViewControllerDelegate> {

	UIColorPickerViewController* _colorPickerViewController;

}

@property (nonatomic,retain) UIColorPickerViewController * colorPickerViewController;              //@synthesize colorPickerViewController=_colorPickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)colorPickerViewControllerDidSelectColor:(id)arg1 ;
-(id)viewController;
-(id)selectedColor;
-(void)setSelectedColor:(id)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(UIColorPickerViewController *)colorPickerViewController;
-(void)setColorPickerViewController:(UIColorPickerViewController *)arg1 ;
-(BOOL)_shouldConvertColorPickerColorFromDarkToLight;
@end

