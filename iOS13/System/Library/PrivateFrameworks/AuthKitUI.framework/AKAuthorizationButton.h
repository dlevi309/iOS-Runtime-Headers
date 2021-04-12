/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, NSString;

@interface AKAuthorizationButton : UIControl {

	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * buttonText; 
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

