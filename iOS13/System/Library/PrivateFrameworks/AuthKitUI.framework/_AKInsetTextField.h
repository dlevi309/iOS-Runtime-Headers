/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UITextField.h>

@interface _AKInsetTextField : UITextField {

	CGSize _insetSize;

}

@property (assign,nonatomic) CGSize insetSize;              //@synthesize insetSize=_insetSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGSize)insetSize;
-(void)setInsetSize:(CGSize)arg1 ;
@end

