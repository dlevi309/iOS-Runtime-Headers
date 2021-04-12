/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class UIViewController;


@protocol PKPaletteColorPickerController <NSObject>
@property (nonatomic,readonly) id<PKPaletteColorPicker> colorPicker; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (assign,nonatomic,__weak) id<PKPaletteColorPickerControllerDelegate> delegate; 
@required
-(id<PKPaletteColorPickerControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIViewController *)viewController;
-(id<PKPaletteColorPicker>)colorPicker;

@end

