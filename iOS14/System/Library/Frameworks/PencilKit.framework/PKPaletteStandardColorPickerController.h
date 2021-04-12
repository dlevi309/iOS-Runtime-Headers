/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteBaseColorPickerController.h>
#import <libobjc.A.dylib/PKColorPickerDelegate.h>

@class PKColorPicker, NSString;

@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController <PKColorPickerDelegate> {

	PKColorPicker* _colorPickerViewController;

}

@property (nonatomic,retain) PKColorPicker * colorPickerViewController;              //@synthesize colorPickerViewController=_colorPickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)viewController;
-(id)selectedColor;
-(void)colorPickerDidChangeSelectedColor:(id)arg1 ;
-(void)setSelectedColor:(id)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setSelectedColorForPoint:(CGPoint)arg1 ;
-(PKColorPicker *)colorPickerViewController;
-(void)setColorPickerViewController:(PKColorPicker *)arg1 ;
@end

