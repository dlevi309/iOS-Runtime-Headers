/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

@class NSString;


@protocol TMLFontJSExports <JSExport>
@property (nonatomic,readonly) CGFontRef CGFontRef; 
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) double ascender; 
@property (nonatomic,readonly) double descender; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) double xHeight; 
@property (nonatomic,readonly) double lineHeight; 
@property (nonatomic,readonly) double leading; 
@required
-(NSString *)familyName;
-(NSString *)fontName;
-(double)leading;
-(id)bold;
-(double)ascender;
-(double)xHeight;
-(double)pointSize;
-(double)capHeight;
-(double)lineHeight;
-(id)italic;
-(double)descender;
-(id)withWidth:(double)arg1;
-(id)withSize:(double)arg1;
-(id)withFamily:(id)arg1;
-(id)withWeight:(double)arg1;
-(id)withSymbolicTraits:(unsigned)arg1;
-(id)withAttributes:(id)arg1;
-(id)withStyle:(id)arg1;
-(id)withAXRestrictedStyle:(id)arg1;
-(id)withScale:(double)arg1;
-(id)withScaleTransform:(double)arg1;
-(CGFontRef)CGFontRef;

@end

