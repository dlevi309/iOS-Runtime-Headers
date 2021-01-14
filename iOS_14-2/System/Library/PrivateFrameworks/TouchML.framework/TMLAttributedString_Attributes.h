/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TMLRuntimeObject.h>

@class NSMutableDictionary, NSDictionary, UIFont, NSParagraphStyle, UIColor, NSNumber, NSString, NSTextAttachment, NSShadow;

@interface TMLAttributedString_Attributes : NSObject <NSCopying, TMLRuntimeObject> {

	NSMutableDictionary* _attributes;
	BOOL _created;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                                //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                                      //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) NSParagraphStyle * paragraphStyle; 
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) long long ligature; 
@property (nonatomic,retain) NSNumber * kern; 
@property (assign,nonatomic) long long strikethroughStyle; 
@property (assign,nonatomic) long long underlineStyle; 
@property (nonatomic,retain) UIColor * strokeColor; 
@property (assign,nonatomic) double strokeWidth; 
@property (nonatomic,retain) NSString * textEffect; 
@property (nonatomic,retain) NSTextAttachment * attachment; 
@property (nonatomic,retain) UIColor * underlineColor; 
@property (assign,nonatomic) double obliqueness; 
@property (assign,nonatomic) double expansion; 
@property (nonatomic,retain) id link; 
@property (nonatomic,retain) NSShadow * shadow; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) long long superscript; 
@property (assign,nonatomic) long long verticalGlyphForm; 
@property (assign,nonatomic) BOOL accessibilitySpeechPunctuation; 
@property (nonatomic,retain) NSString * accessibilitySpeechLanguage; 
@property (nonatomic,retain) NSNumber * accessibilitySpeechPitch; 
@property (nonatomic,retain) NSNumber * accessibilitySpeechQueueAnnouncement; 
@property (nonatomic,retain) NSString * accessibilitySpeechIPANotation; 
@property (nonatomic,retain) NSNumber * accessibilityTextHeadingLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)link;
-(UIColor *)strokeColor;
-(NSShadow *)shadow;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setLink:(id)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setParagraphStyle:(NSParagraphStyle *)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(id)init;
-(NSRange)range;
-(UIColor *)foregroundColor;
-(void)setFont:(UIFont *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSNumber *)kern;
-(UIColor *)underlineColor;
-(void)setUnderlineColor:(UIColor *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(UIColor *)backgroundColor;
-(NSDictionary *)attributes;
-(NSTextAttachment *)attachment;
-(NSParagraphStyle *)paragraphStyle;
-(double)baselineOffset;
-(void)setAttribute:(id)arg1 value:(id)arg2 ;
-(double)strokeWidth;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(UIFont *)font;
-(NSString *)textEffect;
-(void)tmlObjectCompleted;
-(void)setLigature:(long long)arg1 ;
-(long long)ligature;
-(void)setSuperscript:(long long)arg1 ;
-(long long)superscript;
-(void)setAXAttribute:(id)arg1 value:(id)arg2 ;
-(void)setKern:(NSNumber *)arg1 ;
-(long long)strikethroughStyle;
-(void)setStrikethroughStyle:(long long)arg1 ;
-(long long)underlineStyle;
-(void)setUnderlineStyle:(long long)arg1 ;
-(void)setTextEffect:(NSString *)arg1 ;
-(double)obliqueness;
-(void)setObliqueness:(double)arg1 ;
-(double)expansion;
-(void)setExpansion:(double)arg1 ;
-(long long)verticalGlyphForm;
-(void)setVerticalGlyphForm:(long long)arg1 ;
-(NSNumber *)accessibilitySpeechPitch;
-(void)setAccessibilitySpeechPitch:(NSNumber *)arg1 ;
-(BOOL)accessibilitySpeechPunctuation;
-(void)setAccessibilitySpeechPunctuation:(BOOL)arg1 ;
-(NSString *)accessibilitySpeechLanguage;
-(void)setAccessibilitySpeechLanguage:(NSString *)arg1 ;
-(NSNumber *)accessibilitySpeechQueueAnnouncement;
-(void)setAccessibilitySpeechQueueAnnouncement:(NSNumber *)arg1 ;
-(NSString *)accessibilitySpeechIPANotation;
-(void)setAccessibilitySpeechIPANotation:(NSString *)arg1 ;
-(NSNumber *)accessibilityTextHeadingLevel;
-(void)setAccessibilityTextHeadingLevel:(NSNumber *)arg1 ;
@end

