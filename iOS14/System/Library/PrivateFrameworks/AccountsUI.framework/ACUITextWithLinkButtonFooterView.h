/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithText:(id)arg1 linkButtons:(id)arg2 ;
-(double)_heightForFooterTextConstrainedToWidth:(double)arg1 ;
-(double)_heightForEmptyLineConstrainedToWidth:(double)arg1 ;
-(double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)initWithText:(id)arg1 linkButton:(id)arg2 ;
@end

