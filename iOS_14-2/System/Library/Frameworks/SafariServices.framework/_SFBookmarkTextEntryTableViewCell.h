/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutMarginsDidChange;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)updateConstraints;
-(id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3 ;
-(void)safeAreaInsetsDidChange;
-(UITextField *)editableTextField;
@end

