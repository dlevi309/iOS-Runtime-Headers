/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class DOCTagColorPicker, UIGestureRecognizer;

@interface DOCTagEditorColorPickerCell : UICollectionViewCell {

	DOCTagColorPicker* _colorPickerView;

}

@property (nonatomic,retain) DOCTagColorPicker * colorPickerView;                                  //@synthesize colorPickerView=_colorPickerView - In the implementation block
@property (nonatomic,readonly) long long selectedColor; 
@property (nonatomic,readonly) UIGestureRecognizer * changeColorPanGestureRecognizer; 
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)selectedColor;
-(DOCTagColorPicker *)colorPickerView;
-(void)setColorPickerView:(DOCTagColorPicker *)arg1 ;
-(UIGestureRecognizer *)changeColorPanGestureRecognizer;
@end

