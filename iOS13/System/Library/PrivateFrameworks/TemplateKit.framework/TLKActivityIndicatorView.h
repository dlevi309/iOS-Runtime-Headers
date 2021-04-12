/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, UIActivityIndicatorView, TLKLabel;

@interface TLKActivityIndicatorView : TLKView {

	TLKMultilineText* _subtitle;
	UIActivityIndicatorView* _activityIndicator;
	TLKLabel* _subtitleLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
-(TLKMultilineText *)subtitle;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)subtitleLabelText;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)usesDefaultInsets;
@end

