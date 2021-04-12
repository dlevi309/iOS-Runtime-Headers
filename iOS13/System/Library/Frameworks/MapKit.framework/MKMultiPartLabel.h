/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextView, NSDictionary, MKMultiPartAttributedString, UIFont, UIColor, _MKMultiPartLabelMetrics, NSString;

@interface MKMultiPartLabel : UIView {

	UITextView* _textView;
	CGRect _previousBounds;
	NSDictionary* _cachedTextAttributes;
	MKMultiPartAttributedString* _multiPartString;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
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
+(id)_formattedStringsCache;
-(_MKMultiPartLabelMetrics *)data;
-(void)setData:(_MKMultiPartLabelMetrics *)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(unsigned long long)numberOfLines;
-(UIColor *)textColor;
-(id)_textAttributes;
-(long long)textAlignment;
-(void)_updateStrings;
-(void)_setupTextView;
-(void)setMultiPartString:(MKMultiPartAttributedString *)arg1 ;
-(id)_attributedAdjustedMultiPartStringFromString:(id)arg1 ;
-(void)_updateTextViewTextAndInvalidateLayout:(id)arg1 ;
-(id)_addDefaultAttributesToAttributedString:(id)arg1 ;
-(UIEdgeInsets)textInset;
-(void)setTextInset:(UIEdgeInsets)arg1 ;
-(MKMultiPartAttributedString *)multiPartString;
@end

