/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFBorderPrivateVars, NSArray, NSDictionary;

@interface PDFBorder : NSObject <NSCopying, NSCoding> {

	PDFBorderPrivateVars* _private;

}

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double lineWidth; 
@property (nonatomic,copy) NSArray * dashPattern; 
@property (nonatomic,copy,readonly) NSDictionary * borderKeyValues; 
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(id)init;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setAnnotation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)drawInRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(void)dealloc;
-(BOOL)_isRectangular;
-(NSDictionary *)borderKeyValues;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(NSArray *)dashPattern;
-(double)horizontalCornerRadius;
-(double)verticalCornerRadius;
-(const CFDictionaryRef)createDictionaryRef;
-(void)setDashPattern:(NSArray *)arg1 ;
-(void)setHorizontalCornerRadius:(double)arg1 ;
-(void)setVerticalCornerRadius:(double)arg1 ;
-(const double*)dashPatternRaw;
-(unsigned)dashCountRaw;
-(void)_updateDashPatternRaw;
-(void)_setStyleFromDictionary:(CGPDFDictionaryRef)arg1 ;
-(BOOL)setBorderCharacteristicsFromArray:(CGPDFArrayRef)arg1 ;
-(void)_setDashFromArray:(CGPDFArrayRef)arg1 ;
-(void)updateCornerBorderStyle;
@end

