/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIAlertControllerTextField, NSArray, UITextField;

@interface _UIAlertControllerTextFieldView : UIView {

	UIView* _containerView;
	_UIAlertControllerTextField* _textField;
	NSArray* _containerViewConstraints;

}

@property (nonatomic,retain) UIView * containerView; 
@property (readonly) UITextField * textField; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UITextField *)textField;
-(id)_textFieldFont;
-(void)_loadConstraints;
-(double)_borderWidth;
@end

