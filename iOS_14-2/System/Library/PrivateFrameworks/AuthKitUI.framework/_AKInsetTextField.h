/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UITextField.h>

@interface _AKInsetTextField : UITextField {

	CGSize _insetSize;

}

@property (assign,nonatomic) CGSize insetSize;              //@synthesize insetSize=_insetSize - In the implementation block
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGSize)insetSize;
-(void)setInsetSize:(CGSize)arg1 ;
@end

