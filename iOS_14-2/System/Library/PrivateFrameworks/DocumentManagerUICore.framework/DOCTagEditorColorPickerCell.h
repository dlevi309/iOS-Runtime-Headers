/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

