/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, UITextView, UIButton, UILayoutGuide, NSString;

@interface PSUICarrierItemsNotLoadedView : UIView <UITextViewDelegate, PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _titleLabel;
	UITextView* _linkTextView;
	UIButton* _retryButton;
	UILayoutGuide* _layoutGuide;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * linkTextView;                      //@synthesize linkTextView=_linkTextView - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                         //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UILayoutGuide * layoutGuide;                    //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILayoutGuide *)layoutGuide;
-(UIActivityIndicatorView *)spinner;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setLinkText:(id)arg1 url:(id)arg2 ;
-(UITextView *)linkTextView;
-(void)setLinkTextView:(UITextView *)arg1 ;
-(UIButton *)retryButton;
-(void)setRetryButton:(UIButton *)arg1 ;
@end

