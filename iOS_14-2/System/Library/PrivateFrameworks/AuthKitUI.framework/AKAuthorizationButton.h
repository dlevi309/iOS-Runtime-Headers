/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIControl.h>

@class UILabel, NSString;

@interface AKAuthorizationButton : UIControl {

	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * buttonText; 
@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end

