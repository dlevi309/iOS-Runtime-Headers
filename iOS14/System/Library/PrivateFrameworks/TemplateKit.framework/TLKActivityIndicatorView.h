/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIActivityIndicatorView *)activityIndicator;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(TLKMultilineText *)subtitle;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(void)didMoveToWindow;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)subtitleLabelText;
-(BOOL)usesDefaultLayoutMargins;
@end

