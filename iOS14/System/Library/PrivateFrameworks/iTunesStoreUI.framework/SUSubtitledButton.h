/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, NSString, UIColor;

@interface SUSubtitledButton : UIButton {

	CFDictionaryRef _subtitleContentLookup;
	UILabel* _subtitleView;

}

@property (nonatomic,retain,readonly) NSString * currentSubtitle; 
@property (nonatomic,retain,readonly) UIColor * currentSubtitleColor; 
@property (nonatomic,retain,readonly) UIColor * currentSubtitleShadowColor; 
@property (nonatomic,retain,readonly) UILabel * subtitleLabel; 
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(id)_subtitleFont;
-(void)dealloc;
-(void)setSubtitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSubtitleShadowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSString *)currentSubtitle;
-(void)_setupSubtitleView;
-(UIColor *)currentSubtitleShadowColor;
-(UIColor *)currentSubtitleColor;
-(CGRect)subtitleRectForContentRect:(CGRect)arg1 ;
-(long long)_subtitleLineBreakMode;
-(void)configureFromScriptButton:(id)arg1 ;
-(id)subtitleForState:(unsigned long long)arg1 ;
-(id)subtitleColorForState:(unsigned long long)arg1 ;
-(id)subtitleShadowColorForState:(unsigned long long)arg1 ;
-(id)_subtitledContentForState:(unsigned long long)arg1 ;
@end

