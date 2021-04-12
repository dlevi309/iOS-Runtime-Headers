/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>

@class UILabel, CNComposeHeaderLabelView, NSString;

@interface MFComposeMultiView : MFMailComposeHeaderView {

	UILabel* _accountLabel;
	CNComposeHeaderLabelView* _imageSizeHeaderLabelView;
	UILabel* _imageSizeLabel;
	UILabel* _placeholderImageSizeLabel;
	BOOL _imageSizeShown;
	NSString* _accountDescription;
	BOOL _accountHasUnsafeDomain;
	BOOL _accountAutoselected;

}

@property (assign,getter=isAccountAutoselected,nonatomic) BOOL accountAutoselected;              //@synthesize accountAutoselected=_accountAutoselected - In the implementation block
@property (assign,nonatomic) BOOL accountHasUnsafeDomain;                                        //@synthesize accountHasUnsafeDomain=_accountHasUnsafeDomain - In the implementation block
-(void)setAccountDescription:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)labelColor;
-(void)layoutSubviews;
-(void)refreshPreferredContentSize;
-(void)setAccountHasUnsafeDomain:(BOOL)arg1 ;
-(BOOL)accountHasUnsafeDomain;
-(id)accountLabel;
-(id)_accountDescriptionAttributedString;
-(id)imageSizeLabel;
-(id)imageSizeHeaderLabelView;
-(id)placeholderImageSizeLabel;
-(void)setImageSizeDescription:(id)arg1 ;
-(void)setShowsImageSize:(BOOL)arg1 ;
-(void)setAccountAutoselected:(BOOL)arg1 ;
-(BOOL)isAccountAutoselected;
@end

