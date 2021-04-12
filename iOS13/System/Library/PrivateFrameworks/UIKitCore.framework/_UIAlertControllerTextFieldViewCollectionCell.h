/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIAlertControllerTextFieldView, UITapGestureRecognizer;

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {

	_UIAlertControllerTextFieldView* _textField;
	UITapGestureRecognizer* _selectButtonGesture;

}

@property (nonatomic,readonly) _UIAlertControllerTextFieldView * textField; 
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredFocusedView;
-(_UIAlertControllerTextFieldView *)textField;
-(void)_selectButton:(id)arg1 ;
-(void)setTextField:(id)arg1 horizontalMargin:(double)arg2 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
@end

