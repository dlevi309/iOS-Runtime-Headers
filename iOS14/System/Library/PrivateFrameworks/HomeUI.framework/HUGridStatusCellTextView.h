/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, UIColor, HUGridStatusCellLayoutOptions, NSArray;

@interface HUGridStatusCellTextView : UIView {

	NSAttributedString* _title;
	NSAttributedString* _shortTitle;
	UIColor* _textColor;
	HUGridStatusCellLayoutOptions* _layoutOptions;
	NSArray* _textLines;

}

@property (nonatomic,retain) NSArray * textLines;                                        //@synthesize textLines=_textLines - In the implementation block
@property (nonatomic,readonly) NSAttributedString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSAttributedString * shortTitle;                          //@synthesize shortTitle=_shortTitle - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) HUGridStatusCellLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextLines:(NSArray *)arg1 ;
-(NSArray *)textLines;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(HUGridStatusCellLayoutOptions *)layoutOptions;
-(NSAttributedString *)shortTitle;
-(NSAttributedString *)title;
-(void)setLayoutOptions:(HUGridStatusCellLayoutOptions *)arg1 ;
-(id)font;
-(id)_commonTextAttributesWithLineBreakMode:(long long)arg1 ;
-(id)_effectiveTextColor;
-(void)setTitle:(id)arg1 shortTitle:(id)arg2 ;
-(void)_parseTitleLines;
@end

