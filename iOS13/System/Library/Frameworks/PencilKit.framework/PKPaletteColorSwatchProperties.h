/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class PKSwatchColor;


@protocol PKPaletteColorSwatchProperties <NSObject>
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showsSelectionHighlight; 
@property (nonatomic,retain) PKSwatchColor * swatchColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@required
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1;
-(void)setColorUserInterfaceStyle:(long long)arg1;
-(long long)colorUserInterfaceStyle;
-(BOOL)showsSelectionHighlight;
-(PKSwatchColor *)swatchColor;
-(void)setShowsSelectionHighlight:(BOOL)arg1;
-(void)setSwatchColor:(id)arg1;

@end

