/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPaletteToolPickerArrowIndicatorView;

@interface PKPaletteToolPickerOverlayView : UIView {

	PKPaletteToolPickerArrowIndicatorView* _firstArrowView;
	PKPaletteToolPickerArrowIndicatorView* _secondArrowView;

}

@property (nonatomic,retain) PKPaletteToolPickerArrowIndicatorView * firstArrowView;               //@synthesize firstArrowView=_firstArrowView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPickerArrowIndicatorView * secondArrowView;              //@synthesize secondArrowView=_secondArrowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFirstArrowView:(PKPaletteToolPickerArrowIndicatorView *)arg1 ;
-(PKPaletteToolPickerArrowIndicatorView *)firstArrowView;
-(void)setSecondArrowView:(PKPaletteToolPickerArrowIndicatorView *)arg1 ;
-(PKPaletteToolPickerArrowIndicatorView *)secondArrowView;
@end

