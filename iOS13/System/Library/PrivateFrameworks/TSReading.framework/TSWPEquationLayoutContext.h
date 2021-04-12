/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutContext.h>

@class NSString;

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext> {

	CFStringRef _fontName;
	double _fontSize;
	double _columnWidth;

}

@property (assign,nonatomic) double fontSize;                       //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double columnWidth;                    //@synthesize columnWidth=_columnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setColumnWidth:(double)arg1 ;
-(double)columnWidth;
-(double)containerWidth;
-(double)baseFontSize;
-(CFStringRef)baseFontName;
-(id)initWithTextAttributes:(CFDictionaryRef)arg1 columnWidth:(double)arg2 ;
@end

