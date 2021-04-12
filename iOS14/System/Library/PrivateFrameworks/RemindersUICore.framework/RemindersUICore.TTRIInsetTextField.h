/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
*/

#import <RemindersUICore/RemindersUICore-Structs.h>
#import <UIKitCore/UITextField.h>

@interface RemindersUICore.TTRIInsetTextField : UITextField {

	 horizontalInset;
	 verticalInset;

}

@property (assign,nonatomic) double horizontalInset; 
@property (assign,nonatomic) double verticalInset; 
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)verticalInset;
-(void)setVerticalInset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)horizontalInset;
-(void)setHorizontalInset:(double)arg1 ;
@end

