/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/_REContentLoggingProperties.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSTimeZone, UIImage, NSString, RETextContentProvider, REImageContentProvider, CLKTextProvider, CLKImageProvider, NSAttributedString, UIColor, REAccessoryDescription, REAccessoryImage, REAccessoryMatchup, NSNumber;

@interface REContent : NSObject <_REContentLoggingProperties, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _contents;
	NSTimeZone* _timeZone;

}

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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(REAccessoryDescription *)descriptionAccessory;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSAttributedString *)headerText;
-(void)setHeaderText:(NSAttributedString *)arg1 ;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(CLKTextProvider *)headerTextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)headerImageProvider;
-(void)setHeaderImageProvider:(CLKImageProvider *)arg1 ;
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
-(UIImage *)overrideHeaderImage;
-(void)setOverrideBodyImage:(UIImage *)arg1 ;
-(UIImage *)overrideBodyImage;
-(void)setBodyImageCompositingFilter:(NSString *)arg1 ;
-(NSString *)bodyImageCompositingFilter;
-(void)setHeaderImageContentProvider:(REImageContentProvider *)arg1 ;
-(void)setBodyImageContentProvider:(REImageContentProvider *)arg1 ;
-(void)setPunchThrough:(unsigned long long)arg1 ;
-(unsigned long long)punchThrough;
-(void)setUseMonospaceFont:(BOOL)arg1 ;
-(BOOL)useMonospaceFont;
-(void)setHeaderFontStyle:(unsigned long long)arg1 ;
-(unsigned long long)headerFontStyle;
-(void)setDescription1FontStyle:(unsigned long long)arg1 ;
-(unsigned long long)description1FontStyle;
-(void)setDescription2FontStyle:(unsigned long long)arg1 ;
-(unsigned long long)description2FontStyle;
-(void)setTintColorAffectsHeader:(BOOL)arg1 ;
-(BOOL)tintColorAffectsHeader;
-(void)setBodyImageShouldStretch:(BOOL)arg1 ;
-(BOOL)bodyImageShouldStretch;
-(void)setHeaderImageEdge:(unsigned)arg1 ;
-(unsigned)headerImageEdge;
-(void)setDescriptionAccessory:(REAccessoryDescription *)arg1 ;
-(void)setImageAccessory:(REAccessoryImage *)arg1 ;
-(REAccessoryImage *)imageAccessory;
-(void)setMatchupAccessory:(REAccessoryMatchup *)arg1 ;
-(REAccessoryMatchup *)matchupAccessory;
-(void)setImageFocusRect:(CGRect)arg1 ;
-(CGRect)imageFocusRect;
-(void)setOverrideBodyString:(NSString *)arg1 ;
-(NSString *)overrideBodyString;
-(void)setDescription1Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description1Text;
-(void)setDescription2Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description2Text;
-(void)setDescription3Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description3Text;
-(UIImage *)bodyImage;
-(void)setBodyImage:(UIImage *)arg1 ;
-(CLKTextProvider *)description1TextProvider;
-(void)setDescription1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)description2TextProvider;
-(void)setDescription2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)description3TextProvider;
-(void)setDescription3TextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)bodyImageProvider;
-(void)setBodyImageProvider:(CLKImageProvider *)arg1 ;
-(NSNumber *)description1Opacity;
-(void)setDescription1Opacity:(NSNumber *)arg1 ;
@end

