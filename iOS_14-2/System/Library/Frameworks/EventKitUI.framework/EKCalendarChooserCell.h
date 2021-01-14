/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKUITableViewCell.h>

@class UIImage, UIImageView, UIColor, NSTextAttachment, NSString;

@interface EKCalendarChooserCell : EKUITableViewCell {

	BOOL _showCheckmarksOnLeft;
	BOOL _checked;
	BOOL _shouldAnimate;
	BOOL _showsColorDot;
	UIImage* _colorDot;
	UIImage* _colorDotHighlighted;
	UIImageView* _colorDotView;
	UIImageView* _checkmarkView;
	UIColor* _checkMarkColor;
	NSTextAttachment* _colorDotAttachment;
	BOOL _showingSelectionCheckmark;
	BOOL _multiSelectStyle;
	NSString* _textLabelText;
	UIColor* _selectionCheckmarkColor;

}

@property (assign,nonatomic) BOOL showingSelectionCheckmark;                 //@synthesize showingSelectionCheckmark=_showingSelectionCheckmark - In the implementation block
@property (assign,nonatomic) BOOL multiSelectStyle;                          //@synthesize multiSelectStyle=_multiSelectStyle - In the implementation block
@property (assign,nonatomic) BOOL showCheckmarksOnLeft;                      //@synthesize showCheckmarksOnLeft=_showCheckmarksOnLeft - In the implementation block
@property (assign,nonatomic) BOOL checked;                                   //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimate;                             //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
@property (assign,nonatomic) BOOL showsColorDot;                             //@synthesize showsColorDot=_showsColorDot - In the implementation block
@property (nonatomic,retain) NSString * textLabelText;                       //@synthesize textLabelText=_textLabelText - In the implementation block
@property (nonatomic,retain) UIColor * selectionCheckmarkColor;              //@synthesize selectionCheckmarkColor=_selectionCheckmarkColor - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)checked;
-(id)_multiselectBackgroundColor;
-(BOOL)shouldAnimate;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setContentAlpha:(double)arg1 ;
-(BOOL)showsColorDot;
-(void)setChecked:(BOOL)arg1 ;
-(void)setShowCheckmarksOnLeft:(BOOL)arg1 ;
-(BOOL)multiSelectStyle;
-(void)_updateTextLabelTextWithColorDot;
-(BOOL)showCheckmarksOnLeft;
-(void)updateSelectionCheckmark;
-(UIColor *)selectionCheckmarkColor;
-(void)setTextLabelText:(NSString *)arg1 ;
-(void)setColorDotImage:(id)arg1 ;
-(void)setColorDotHighlightedImage:(id)arg1 ;
-(double)textLeadingIndent;
-(BOOL)showingSelectionCheckmark;
-(void)setShowingSelectionCheckmark:(BOOL)arg1 ;
-(void)setMultiSelectStyle:(BOOL)arg1 ;
-(void)setShouldAnimate:(BOOL)arg1 ;
-(void)setShowsColorDot:(BOOL)arg1 ;
-(NSString *)textLabelText;
-(void)setSelectionCheckmarkColor:(UIColor *)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

