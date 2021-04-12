/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, UITextField;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell {

	NSLayoutConstraint* _leadingConstraint;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * editableTextField;              //@synthesize textField=_textField - In the implementation block
-(void)updateConstraints;
-(void)layoutMarginsDidChange;
-(void)safeAreaInsetsDidChange;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UITextField *)editableTextField;
-(id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3 ;
@end

