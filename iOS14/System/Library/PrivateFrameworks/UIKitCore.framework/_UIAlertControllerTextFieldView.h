/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContainerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)_borderWidth;
-(UIView *)containerView;
-(id)_textFieldFont;
-(void)_loadConstraints;
-(UITextField *)textField;
-(void)dealloc;
@end

