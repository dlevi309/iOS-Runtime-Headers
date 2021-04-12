/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSArray, UILabel, NSString;

@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView> {

	NSArray* _linkButtons;
	UILabel* _textLabel;
	NSString* _footerText;

}
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithText:(id)arg1 linkButtons:(id)arg2 ;
-(double)_heightForFooterTextConstrainedToWidth:(double)arg1 ;
-(double)_heightForEmptyLineConstrainedToWidth:(double)arg1 ;
-(double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)initWithText:(id)arg1 linkButton:(id)arg2 ;
@end

