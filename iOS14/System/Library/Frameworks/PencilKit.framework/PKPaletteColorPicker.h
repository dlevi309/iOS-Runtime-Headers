/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class UIColor;


@protocol PKPaletteColorPicker <NSObject>
@property (nonatomic,copy) UIColor * selectedColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@required
-(UIColor *)selectedColor;
-(void)setSelectedColor:(id)arg1;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1;
-(void)setSelectedColorForPoint:(CGPoint)arg1;

@end

