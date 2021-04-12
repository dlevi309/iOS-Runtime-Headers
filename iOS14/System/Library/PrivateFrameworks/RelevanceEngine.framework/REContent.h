/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/_REContentLoggingProperties.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSTimeZone, CLKTextProvider, CLKImageProvider, CLKComplicationTemplate, CLKGaugeProvider, UIImage, NSString, RETextContentProvider, REImageContentProvider, NSAttributedString, UIColor, REAccessoryDescription, REAccessoryImage, REAccessoryMatchup, NSNumber;

@interface REContent : NSObject <_REContentLoggingProperties, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _contents;
	NSTimeZone* _timeZone;

}

@property (nonatomic,copy) CLKTextProvider * summaryTextProvider; 
@property (nonatomic,copy) CLKImageProvider * summaryImageProvider; 
@property (nonatomic,copy) CLKComplicationTemplate * circularTempate; 
@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider; 
@property (nonatomic,retain) UIImage * overrideHeaderImage; 
@property (nonatomic,retain) UIImage * overrideBodyImage; 
@property (nonatomic,retain) NSString * bodyImageCompositingFilter; 
@property (nonatomic,copy) RETextContentProvider * headerTextContentProvider; 
@property (nonatomic,copy) REImageContentProvider * headerImageContentProvider; 
@property (nonatomic,copy) REImageContentProvider * bodyImageContentProvider; 
@property (nonatomic,copy) RETextContentProvider * description1TextContentProvider; 
@property (nonatomic,copy) RETextContentProvider * description2TextContentProvider; 
@property (nonatomic,copy) RETextContentProvider * description3TextContentProvider; 
@property (nonatomic,copy) CLKTextProvider * headerTextProvider; 
@property (nonatomic,copy) CLKImageProvider * headerImageProvider; 
@property (nonatomic,copy) CLKImageProvider * bodyImageProvider; 
@property (nonatomic,copy) CLKTextProvider * description1TextProvider; 
@property (nonatomic,copy) CLKTextProvider * description2TextProvider; 
@property (nonatomic,copy) CLKTextProvider * description3TextProvider; 
@property (nonatomic,copy) NSAttributedString * headerText; 
@property (nonatomic,copy) UIImage * headerImage; 
@property (nonatomic,copy) UIImage * bodyImage; 
@property (nonatomic,copy) NSAttributedString * description1Text; 
@property (nonatomic,copy) NSAttributedString * description2Text; 
@property (nonatomic,copy) NSAttributedString * description3Text; 
@property (assign,nonatomic) unsigned long long punchThrough; 
@property (nonatomic,copy) UIColor * tintColor; 
@property (assign,nonatomic) unsigned long long style; 
@property (assign,nonatomic) BOOL useMonospaceFont; 
@property (assign,nonatomic) unsigned long long headerFontStyle; 
@property (assign,nonatomic) unsigned long long description1FontStyle; 
@property (assign,nonatomic) unsigned long long description2FontStyle; 
@property (assign,nonatomic) BOOL tintColorAffectsHeader; 
@property (assign,nonatomic) BOOL bodyImageShouldStretch; 
@property (assign,nonatomic) unsigned headerImageEdge; 
@property (nonatomic,copy) REAccessoryDescription * descriptionAccessory; 
@property (nonatomic,copy) REAccessoryImage * imageAccessory; 
@property (nonatomic,copy) REAccessoryMatchup * matchupAccessory; 
@property (assign,nonatomic) CGRect imageFocusRect; 
@property (nonatomic,copy) NSString * overrideBodyString; 
@property (nonatomic,copy) NSNumber * description1Opacity; 
@property (nonatomic,readonly) NSDictionary * loggingContentValues; 
+(BOOL)supportsSecureCoding;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)summaryTextProvider;
-(void)setSummaryTextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)summaryImageProvider;
-(void)setSummaryImageProvider:(CLKImageProvider *)arg1 ;
-(CLKComplicationTemplate *)circularTempate;
-(void)setCircularTempate:(CLKComplicationTemplate *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(REAccessoryDescription *)descriptionAccessory;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(UIImage *)headerImage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setHeaderText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)headerText;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setBodyImage:(UIImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(unsigned long long)style;
-(UIImage *)bodyImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(CLKTextProvider *)headerTextProvider;
-(CLKTextProvider *)description1TextProvider;
-(CLKTextProvider *)description2TextProvider;
-(CLKTextProvider *)description3TextProvider;
-(CLKImageProvider *)headerImageProvider;
-(UIImage *)overrideHeaderImage;
-(unsigned)headerImageEdge;
-(REAccessoryImage *)imageAccessory;
-(CLKImageProvider *)bodyImageProvider;
-(UIImage *)overrideBodyImage;
-(BOOL)bodyImageShouldStretch;
-(unsigned long long)description1FontStyle;
-(unsigned long long)description2FontStyle;
-(NSString *)bodyImageCompositingFilter;
-(void)setHeaderImageProvider:(CLKImageProvider *)arg1 ;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(void)setDescription1TextProvider:(CLKTextProvider *)arg1 ;
-(BOOL)tintColorAffectsHeader;
-(BOOL)useMonospaceFont;
-(NSString *)overrideBodyString;
-(CGRect)imageFocusRect;
-(unsigned long long)headerFontStyle;
-(NSNumber *)description1Opacity;
-(REAccessoryMatchup *)matchupAccessory;
-(void)setOverrideBodyImage:(UIImage *)arg1 ;
-(void)setImageFocusRect:(CGRect)arg1 ;
-(void)setTintColorAffectsHeader:(BOOL)arg1 ;
-(void)setDescription1TextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)description1TextContentProvider;
-(void)setDescription2TextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)description2TextContentProvider;
-(void)setDescription3TextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)description3TextContentProvider;
-(void)setHeaderTextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)headerTextContentProvider;
-(REImageContentProvider *)bodyImageContentProvider;
-(REImageContentProvider *)headerImageContentProvider;
-(NSDictionary *)loggingContentValues;
-(void)setOverrideHeaderImage:(UIImage *)arg1 ;
-(void)setBodyImageCompositingFilter:(NSString *)arg1 ;
-(void)setHeaderImageContentProvider:(REImageContentProvider *)arg1 ;
-(void)setBodyImageContentProvider:(REImageContentProvider *)arg1 ;
-(void)setPunchThrough:(unsigned long long)arg1 ;
-(unsigned long long)punchThrough;
-(void)setUseMonospaceFont:(BOOL)arg1 ;
-(void)setHeaderFontStyle:(unsigned long long)arg1 ;
-(void)setDescription1FontStyle:(unsigned long long)arg1 ;
-(void)setDescription2FontStyle:(unsigned long long)arg1 ;
-(void)setBodyImageShouldStretch:(BOOL)arg1 ;
-(void)setHeaderImageEdge:(unsigned)arg1 ;
-(void)setDescriptionAccessory:(REAccessoryDescription *)arg1 ;
-(void)setImageAccessory:(REAccessoryImage *)arg1 ;
-(void)setMatchupAccessory:(REAccessoryMatchup *)arg1 ;
-(void)setOverrideBodyString:(NSString *)arg1 ;
-(void)setDescription1Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description1Text;
-(void)setDescription2Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description2Text;
-(void)setDescription3Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description3Text;
-(void)setDescription2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setDescription3TextProvider:(CLKTextProvider *)arg1 ;
-(void)setBodyImageProvider:(CLKImageProvider *)arg1 ;
-(void)setDescription1Opacity:(NSNumber *)arg1 ;
@end

