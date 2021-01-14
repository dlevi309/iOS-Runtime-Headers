/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKPaletteColorPickerController.h>
#import <libobjc.A.dylib/PKPaletteColorPicker.h>

@protocol PKPaletteColorPicker, PKPaletteColorPickerControllerDelegate;
@class UIViewController, UIColor, NSString;

@interface PKPaletteBaseColorPickerController : NSObject <PKPaletteColorPickerController, PKPaletteColorPicker> {

	id<PKPaletteColorPicker> _colorPicker;
	UIViewController* _viewController;
	id<PKPaletteColorPickerControllerDelegate> _delegate;
	UIColor* _selectedColor;
	long long _colorUserInterfaceStyle;

}

@property (nonatomic,readonly) id<PKPaletteColorPicker> colorPicker;                                  //@synthesize colorPicker=_colorPicker - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                     //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteColorPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UIColor * selectedColor;                                                   //@synthesize selectedColor=_selectedColor - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                       //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
-(id<PKPaletteColorPickerControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteColorPickerControllerDelegate>)arg1 ;
-(UIViewController *)viewController;
-(UIColor *)selectedColor;
-(id<PKPaletteColorPicker>)colorPicker;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setSelectedColorForPoint:(CGPoint)arg1 ;
@end

