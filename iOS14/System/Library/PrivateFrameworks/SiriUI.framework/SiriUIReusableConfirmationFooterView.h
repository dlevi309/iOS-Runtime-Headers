/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIKeyline, SiriUIContentButton, SiriUISnippetViewController, SAUIConfirmationOptions, UIButton;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {

	SiriUIKeyline* _verticalKeyline;
	SiriUIContentButton* _cancelButton;
	SiriUIContentButton* _confirmButton;
	SiriUISnippetViewController* _snippetViewController;
	SAUIConfirmationOptions* _confirmationOptions;

}

@property (nonatomic,retain) SAUIConfirmationOptions * confirmationOptions;              //@synthesize confirmationOptions=_confirmationOptions - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * confirmButton;                                 //@synthesize confirmButton=_confirmButton - In the implementation block
+(double)defaultHeight;
-(UIButton *)cancelButton;
-(UIEdgeInsets)edgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)confirmButton;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
@end

