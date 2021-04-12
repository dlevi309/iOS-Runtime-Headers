/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIListContentTextPropertiesInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIFont, NSString, UIColor, NSAttributedString;

@interface _UIContentViewLabelConfiguration : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedFont : 1;
		unsigned hasCustomizedTextColor : 1;
		unsigned hasCustomizedTextAlignment : 1;
		unsigned hasCustomizedLineBreakMode : 1;
		unsigned hasCustomizedNumberOfLines : 1;
		unsigned hasCustomizedAdjustsFontSizeToFitWidth : 1;
		unsigned hasCustomizedMinimumScaleFactor : 1;
		unsigned hasCustomizedAllowsDefaultTighteningForTruncation : 1;
		unsigned hasCustomizedAdjustsFontForContentSizeCategory : 1;
	}  _configurationFlags;
	BOOL _adjustsFontSizeToFitWidth;
	BOOL _allowsDefaultTighteningForTruncation;
	BOOL _adjustsFontForContentSizeCategory;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	long long _lineBreakMode;
	NSAttributedString* _attributedText;
	long long _numberOfLines;
	double _minimumScaleFactor;
	UIColor* _highlightedTextColor;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                         //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,readonly) long long _effectiveTextAlignment; 
@property (nonatomic,readonly) BOOL _hasNonEmptyPlainTextOnly; 
+(BOOL)supportsSecureCoding;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(long long)lineBreakMode;
-(BOOL)adjustsFontForContentSizeCategory;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)init;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)description;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(void)applyToLabel:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_effectiveTextAlignment;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)highlightedTextColor;
-(BOOL)_hasNonEmptyPlainTextOnly;
-(BOOL)allowsDefaultTighteningForTruncation;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfLines;
-(BOOL)isEqual:(id)arg1 ;
-(UIFont *)font;
-(double)minimumScaleFactor;
@end

