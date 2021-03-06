/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UISwipeActionButton.h>

@interface UISwipeActionStandardButton : UISwipeActionButton {

	double _buttonWidth;
	SCD_Struct_UI30 _flags;
	double _extensionLength;

}

@property (assign,nonatomic) double extensionLength;              //@synthesize extensionLength=_extensionLength - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)titleLabel;
-(void)layoutSubviews;
-(double)buttonWidth;
-(void)setExtensionLength:(double)arg1 ;
-(double)extensionLength;
@end

