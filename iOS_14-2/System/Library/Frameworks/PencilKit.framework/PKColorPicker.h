/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(id)init;
-(id<PKColorPickerDelegate>)delegate;
-(void)setDelegate:(id<PKColorPickerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(UIColor *)selectedColor;
-(void)viewDidLoad;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(_PKColorPickerView *)colorPickerView;
-(void)setColorPickerView:(_PKColorPickerView *)arg1 ;
-(id)_colorPickerView;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)_setSelectedColorForPoint:(CGPoint)arg1 ;
-(void)_colorPickerViewUserDidTouchUpInside:(id)arg1 ;
-(void)_colorPickerViewDidChangeSelectedColor:(id)arg1 ;
-(void)_setInitialColorForSpringLoading:(id)arg1 ;
@end

