/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
-(CFArrayRef)getLabels;
-(long long)addLine:(CFStringRef)arg1 withLabelColorIndex:(int)arg2 withValueColorIndex:(int)arg3 ;
-(void)setFont:(CFStringRef)arg1 withPointSize:(double)arg2 ;
-(void)resetLines;
-(long long)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(CFArrayRef)getValues;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
@end

