/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, IKViewElementStyle, TVAppStyle, NSString, NSShadow, TVColor;

@interface TVViewElementStyle : NSObject <NSCopying> {

	NSMutableDictionary* _cachedColorObjects;
	IKViewElementStyle* _style;

}

@property (nonatomic,__weak,readonly) IKViewElementStyle * style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) TVAppStyle * styleMetrics; 
@property (nonatomic,readonly) NSString * textTransform; 
@property (nonatomic,readonly) NSShadow * shadow; 
@property (nonatomic,readonly) TVColor * backgroundColor; 
@property (nonatomic,readonly) TVColor * color; 
@property (nonatomic,readonly) double fontSize; 
@property (nonatomic,readonly) NSString * fontWeight; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIEdgeInsets margin; 
@property (nonatomic,readonly) UIEdgeInsets focusMargin; 
@property (nonatomic,readonly) double maxHeight; 
@property (nonatomic,readonly) double maxWidth; 
@property (nonatomic,readonly) double minHeight; 
@property (nonatomic,readonly) double minWidth; 
@property (nonatomic,readonly) UIEdgeInsets padding; 
@property (nonatomic,readonly) long long textAlignment; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) long long contentAlignment; 
@property (nonatomic,readonly) TVColor * highlightColor; 
@property (nonatomic,readonly) NSString * imageTreatmentName; 
@property (nonatomic,readonly) double interitemSpacing; 
@property (nonatomic,readonly) NSString * textHighlightStyle; 
@property (nonatomic,readonly) double textMinimumScaleFactor; 
@property (nonatomic,readonly) long long position; 
@property (nonatomic,readonly) NSString * ratingStyle; 
@property (nonatomic,readonly) unsigned long long maxTextLines; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) TVColor * tintColor; 
-(double)fontSize;
-(NSShadow *)shadow;
-(UIEdgeInsets)margin;
-(long long)position;
-(double)width;
-(long long)alignment;
-(double)maxWidth;
-(double)minWidth;
-(id)initWithStyle:(id)arg1 ;
-(TVColor *)color;
-(long long)contentAlignment;
-(double)interitemSpacing;
-(double)height;
-(long long)textAlignment;
-(TVColor *)backgroundColor;
-(NSString *)textStyle;
-(NSString *)fontWeight;
-(double)minHeight;
-(UIEdgeInsets)padding;
-(double)maxHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVColor *)tintColor;
-(IKViewElementStyle *)style;
-(TVColor *)highlightColor;
-(NSString *)textTransform;
-(id)darkTintColor;
-(unsigned long long)maxTextLines;
-(UIEdgeInsets)focusMargin;
-(NSString *)textHighlightStyle;
-(id)valueForStyleProperty:(id)arg1 ;
-(TVAppStyle *)styleMetrics;
-(void)setStyleMetrics:(TVAppStyle *)arg1 ;
-(id)cssValueForStyleProperty:(id)arg1 ;
-(NSString *)imageTreatmentName;
-(double)textMinimumScaleFactor;
-(NSString *)ratingStyle;
@end

