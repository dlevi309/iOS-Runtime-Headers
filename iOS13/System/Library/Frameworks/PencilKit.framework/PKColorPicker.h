/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_PKColorPickerViewDelegate.h>

@protocol PKColorPickerDelegate;
@class _PKColorPickerView, UIColor;

@interface PKColorPicker : UIViewController <_PKColorPickerViewDelegate> {

	id<PKColorPickerDelegate> _delegate;
	_PKColorPickerView* _colorPickerView;

}

@property (nonatomic,retain) _PKColorPickerView * colorPickerView;                   //@synthesize colorPickerView=_colorPickerView - In the implementation block
@property (assign,nonatomic,__weak) id<PKColorPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
+(id)_representableColorForColor:(id)arg1 ;
-(id)init;
-(id<PKColorPickerDelegate>)delegate;
-(void)setDelegate:(id<PKColorPickerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(_PKColorPickerView *)colorPickerView;
-(long long)colorUserInterfaceStyle;
-(id)_colorPickerView;
-(void)_setSelectedColorForPoint:(CGPoint)arg1 ;
-(void)_colorPickerViewUserDidTouchUpInside:(id)arg1 ;
-(void)_colorPickerViewDidChangeSelectedColor:(id)arg1 ;
-(void)_setInitialColorForSpringLoading:(id)arg1 ;
-(void)setColorPickerView:(_PKColorPickerView *)arg1 ;
@end

