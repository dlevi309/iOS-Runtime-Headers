/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITextField.h>

@interface SFDialogTextField : UITextField {

	unsigned long long _stackPosition;

}

@property (assign,nonatomic) unsigned long long stackPosition;              //@synthesize stackPosition=_stackPosition - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(id)_placeholderColor;
-(void)setStackPosition:(unsigned long long)arg1 ;
-(unsigned long long)stackPosition;
@end

