/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIButton.h>

@class NSString;

@interface OBTextAccessoryButton : UIButton {

	NSString* _textStyle;

}

@property (assign,nonatomic) NSString * textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
+(id)accessoryButtonWithTextStyle:(id)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
@end

