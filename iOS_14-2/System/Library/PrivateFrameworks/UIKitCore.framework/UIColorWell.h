/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIColorPickerViewControllerDelegate.h>

@class UIButton, _UIColorWellConicalGradientBackgroundView, UIColorPickerViewController, UIDragInteraction, UIDropInteraction, UIColor, NSString;

@interface UIColorWell : UIControl <UIDragInteractionDelegate, UIDropInteractionDelegate, UIColorPickerViewControllerDelegate> {

	UIButton* _button;
	_UIColorWellConicalGradientBackgroundView* _gradientView;
	UIColorPickerViewController* _colorPicker;
	UIDragInteraction* _dragInteraction;
	UIDropInteraction* _dropInteraction;
	BOOL _supportsAlpha;
	UIColor* _selectedColor;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL supportsAlpha;                    //@synthesize supportsAlpha=_supportsAlpha - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;               //@synthesize selectedColor=_selectedColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)_setSelectedColor:(id)arg1 notifyingPicker:(BOOL)arg2 sendingAction:(BOOL)arg3 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)colorPickerViewControllerDidSelectColor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)selectedColor;
-(BOOL)supportsAlpha;
-(void)setPickerTitle:(id)arg1 ;
-(double)_widthForTraitCollection:(id)arg1 ;
-(void)setSupportsAlpha:(BOOL)arg1 ;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_commonInit;
-(void)invokeColorPicker:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
@end

