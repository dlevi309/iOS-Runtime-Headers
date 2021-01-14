/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {

	ACUILinkButton* _linkButton;
	long long _desiredTextAlignment;

}

@property (assign,nonatomic) long long alignment;              //@synthesize desiredTextAlignment=_desiredTextAlignment - In the implementation block
-(long long)alignment;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithButton:(id)arg1 ;
@end

