/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(UIButton *)cancelButton;
-(UIButton *)confirmButton;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
@end

