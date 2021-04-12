/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@protocol SiriUIActionableFooterViewDelegate;
@class UIButton, SiriUIKeyline, SiriUISnippetViewController, NSString;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {

	UIButton* _button;
	SiriUIKeyline* _keyline;
	BOOL _hasKeyline;
	SiriUISnippetViewController* _snippetViewController;
	id<SiriUIActionableFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActionableFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL hasKeyline;                                                     //@synthesize hasKeyline=_hasKeyline - In the implementation block
+(double)defaultHeight;
-(id<SiriUIActionableFooterViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUIActionableFooterViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(void)_buttonTapped:(id)arg1 ;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
-(void)setHasKeyline:(BOOL)arg1 ;
-(BOOL)hasKeyline;
@end

