/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIEdgeInsets)edgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SiriUIActionableFooterViewDelegate>)delegate;
-(void)_buttonTapped:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDelegate:(id<SiriUIActionableFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSString *)title;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
-(void)setHasKeyline:(BOOL)arg1 ;
-(BOOL)hasKeyline;
@end

