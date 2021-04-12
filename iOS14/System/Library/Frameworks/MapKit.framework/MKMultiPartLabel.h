/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextView, NSDictionary, MKMultiPartAttributedString, UIFont, UIColor, _MKMultiPartLabelMetrics, NSString;

@interface MKMultiPartLabel : UIView {

	UITextView* _textView;
	CGRect _previousBounds;
	NSDictionary* _cachedTextAttributes;
	NSDictionary* _lastAppliedNonColorAttributes;
	BOOL _highlighted;
	MKMultiPartAttributedString* _multiPartString;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	UIColor* _highlightedTextColor;
	_MKMultiPartLabelMetrics* _data;

}

@property (nonatomic,retain) _MKMultiPartLabelMetrics * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MKMultiPartAttributedString * multiPartString;              //@synthesize multiPartString=_multiPartString - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIFont * font;                                              //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInset; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                             //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
+(id)_formattedStringsCache;
-(long long)lineBreakMode;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2 ;
-(void)setData:(_MKMultiPartLabelMetrics *)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setTextInset:(UIEdgeInsets)arg1 ;
-(void)_setupTextView;
-(void)_updateColorsForCurrentState;
-(void)setMultiPartString:(MKMultiPartAttributedString *)arg1 ;
-(id)_attributedAdjustedMultiPartStringFromString:(id)arg1 ;
-(void)_updateTextViewTextAndInvalidateLayout:(id)arg1 ;
-(id)_addDefaultAttributesToAttributedString:(id)arg1 ;
-(MKMultiPartAttributedString *)multiPartString;
-(void)layoutSubviews;
-(void)_updateStrings;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_MKMultiPartLabelMetrics *)data;
-(NSString *)text;
-(BOOL)isHighlighted;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)highlightedTextColor;
-(void)setTextAlignment:(long long)arg1 ;
-(id)_textAttributes;
-(unsigned long long)numberOfLines;
-(UIEdgeInsets)textInset;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
@end

