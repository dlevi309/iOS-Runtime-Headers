/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@interface FigHUDLayer : CALayer {

	CTFontRef _Font;
	double _FontSize;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _LabelColors;
	CFArrayRef _ValueColors;

}
-(id)init;
-(long long)addLine:(CFStringRef)arg1 withLabelColorIndex:(int)arg2 withValueColorIndex:(int)arg3 ;
-(void)resetLines;
-(void)setFont:(CFStringRef)arg1 withPointSize:(double)arg2 ;
-(long long)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CFArrayRef)getValues;
-(CFArrayRef)getLabels;
-(void)dealloc;
@end

