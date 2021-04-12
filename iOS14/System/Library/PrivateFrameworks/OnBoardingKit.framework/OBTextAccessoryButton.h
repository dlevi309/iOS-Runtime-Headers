/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIButton.h>

@class NSString;

@interface OBTextAccessoryButton : UIButton {

	NSString* _textStyle;

}

@property (assign,nonatomic) NSString * textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
+(id)accessoryButtonWithTextStyle:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

