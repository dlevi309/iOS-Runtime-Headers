/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, UIColor;

@interface PKDashboardFooterTextView : PKDashboardCollectionViewCell <UITextViewDelegate> {

	BOOL _isTemplateLayout;
	UITextView* _textView;
	NSString* _footerText;
	UIColor* _linkTextColor;
	/*^block*/id _action;
	NSRange _linkRange;

}

@property (nonatomic,copy) NSString * footerText;                   //@synthesize footerText=_footerText - In the implementation block
@property (assign,nonatomic) NSRange linkRange;                     //@synthesize linkRange=_linkRange - In the implementation block
@property (nonatomic,retain) UIColor * linkTextColor;               //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (nonatomic,copy) id action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBackgroundColor;
+(double)defaultHorizontalInset;
-(id)action;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAction:(id)arg1 ;
-(void)_updateText;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(NSRange)linkRange;
-(NSString *)footerText;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(void)setFooterText:(NSString *)arg1 ;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(void)createSubviews;
-(BOOL)_isLinkRangeValid;
-(UIColor *)linkTextColor;
@end

