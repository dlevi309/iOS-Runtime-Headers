/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)position;
-(IKViewElementStyle *)style;
-(long long)alignment;
-(double)width;
-(double)height;
-(TVColor *)color;
-(NSShadow *)shadow;
-(double)minWidth;
-(double)maxWidth;
-(double)minHeight;
-(double)maxHeight;
-(double)fontSize;
-(TVColor *)backgroundColor;
-(NSString *)textStyle;
-(TVColor *)tintColor;
-(id)initWithStyle:(id)arg1 ;
-(UIEdgeInsets)margin;
-(UIEdgeInsets)padding;
-(long long)textAlignment;
-(TVColor *)highlightColor;
-(NSString *)fontWeight;
-(long long)contentAlignment;
-(NSString *)textTransform;
-(double)interitemSpacing;
-(unsigned long long)maxTextLines;
-(UIEdgeInsets)focusMargin;
-(NSString *)textHighlightStyle;
-(id)darkTintColor;
-(id)valueForStyleProperty:(id)arg1 ;
-(TVAppStyle *)styleMetrics;
-(void)setStyleMetrics:(TVAppStyle *)arg1 ;
-(id)cssValueForStyleProperty:(id)arg1 ;
-(NSString *)imageTreatmentName;
-(double)textMinimumScaleFactor;
-(NSString *)ratingStyle;
@end

