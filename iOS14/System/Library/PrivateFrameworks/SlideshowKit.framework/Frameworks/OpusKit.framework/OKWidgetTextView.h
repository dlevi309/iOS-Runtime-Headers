/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetTextViewProxy.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString;

@interface OKWidgetTextView : OKWidgetTextViewProxy <UITextViewDelegate> {

	UITextView* _textView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)layoutSubviews;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)initWithWidget:(id)arg1 ;
-(void)dealloc;
-(id)settingFontName;
-(void)setSettingFontName:(id)arg1 ;
-(float)settingFontSize;
-(void)setSettingFontSize:(float)arg1 ;
-(id)settingTextColor;
-(void)setSettingTextColor:(id)arg1 ;
-(id)settingTextBackgroundColor;
-(void)setSettingTextBackgroundColor:(id)arg1 ;
-(long long)settingTextAlignment;
-(void)setSettingTextAlignment:(long long)arg1 ;
-(UIEdgeInsets)settingContentEdgeInsets;
-(void)setSettingContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)settingOverflowEnabled;
-(void)setSettingOverflowEnabled:(BOOL)arg1 ;
-(BOOL)settingScrollEnabled;
-(void)setSettingScrollEnabled:(BOOL)arg1 ;
-(id)settingText;
-(void)setSettingText:(id)arg1 ;
-(id)settingAttributedText;
-(void)setSettingAttributedText:(id)arg1 ;
@end

