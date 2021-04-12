/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APHUDLayer : CALayer {

	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _Colors;

}
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
-(void)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
@end

